#pragma once

#include "../../shared/src/fp_utils.h"

#ifdef VERILATOR
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vmultiplier_fp16.h"
#endif

// Abstract base class for floating-point multipliers
class FpMultiplier {
public:
    virtual FpType run(const FpType &a, const FpType &b) = 0;
};

class FpMultiplierEmulation : public FpMultiplier {
public:
    // Multiply with special-case handling for zero, infinity, NaN, overflow, and underflow
    // Based on multiplier_fp16.v Verilog implementation
    FpType run(const FpType &a, const FpType &b) override {
        FpType result;
        
        // Set format parameters from input operands
        result.m_bits = a.m_bits;
        result.e_bits = a.e_bits;
        
        // Sign calculation
        result.sign = a.sign ^ b.sign;
        
        // Exception flag sets 1 if either one of the exponent is 7 (all 3 exponent bits set)
        bool a_is_exception = (a.exponent == 0x1F);
        bool b_is_exception = (b.exponent == 0x1F);
        bool exception = a_is_exception || b_is_exception;
        
        // Zero detection: exp==0 && mant==0
        bool a_is_zero = (a.exponent == 0) && (a.mantissa == 0);
        bool b_is_zero = (b.exponent == 0) && (b.mantissa == 0);
        
        // NaN detection: NaN occurs when either operand is NaN (exp=7 with non-zero mantissa)
        bool a_is_nan = (a.exponent == 0x1F) && (a.mantissa != 0);
        bool b_is_nan = (b.exponent == 0x1F) && (b.mantissa != 0);
        bool nan = a_is_nan || b_is_nan || (a_is_zero && b_is_exception) || (b_is_zero && a_is_exception);
        
        // Handle NaN case (highest priority)
        if (nan) {
            result.exponent = 0x1F;
            result.mantissa = 0x3FF; // Quiet NaN payload
            return result;
        }
        
        // Assigning significand values according to Hidden Bit
        // 11 bits: 1 hidden + 10 mantissa bits
        // Verilog: (|a[14:10]) ? {1'b1, a[9:0]} : {1'b0, a[9:0]}
        // This means: if any exponent bit is set, add hidden bit; otherwise don't
        uint16_t operand_a = ((a.exponent & 0x1F) != 0) ? (0x1000 | (a.mantissa & 0x3FF)) : (a.mantissa & 0x3FF);
        uint16_t operand_b = ((b.exponent & 0x1F) != 0) ? (0x1000 | (b.mantissa & 0x3FF)) : (b.mantissa & 0x3FF);
        
        // Calculate product (11x11 -> 22-bit)
        uint32_t product = (uint32_t)operand_a * (uint32_t)operand_b;
        
        // Normalization check
        bool normalised = (product >> 21) & 1;
        
        // Adjust product if not normalized
        uint32_t product_normalised = normalised ? product : product << 1;
        
        // Product round: OR of all 22 bits [21:0] (matching Verilog line 55 exactly)
        // Note: Verilog comment says "ending 22 bits" but code uses [21:0]
        bool product_round = (product_normalised & 0x3FFFFF) != 0;
        
        // Final Mantissa with rounding
        // Extract bits [8:5] as base mantissa
        uint16_t base_mantissa = (product_normalised >> 11) & 0x3FF;
        // Add 1 if bit[4] is set AND product_round (round to nearest)
        // This matches Verilog: product_normalised[4] & product_round
        uint16_t add_round = (((product_normalised >> 10) & 1) && product_round) ? 1 : 0;
        uint8_t product_mantissa = base_mantissa + add_round;

        // Check for renormalization (if mantissa overflowed into 5th bit)
        bool renormalized = (product_mantissa >> 10) & 1;
        
        // Zero detection: check if upper 5 bits [9:5] are all zero
        bool zero = exception ? false : ((product_normalised >> 11) == 0);
        
        // Sum of exponents (4-bit addition)
        uint16_t sum_exponent = (a.exponent & 0x1F) + (b.exponent & 0x1F);
        
        // Final exponent calculation (4-bit arithmetic)
        // exponent = sum_exponent - 15+ normalised + renormalized
        // -15 in 16-bit two's complement is 0xF1
        uint16_t bias = 0xF1; // -15 in 16 bits
        // k = {normalised & renormalized, normalised ^ renormalized} (2 bits, range 0..2)
        uint16_t k = ((normalised & renormalized) << 1) | (normalised ^ renormalized);
        uint16_t k_ext = k & 0x3FF;
        
        // Calculate: exponent = sum_exponent + bias + k_ext (in 4-bit arithmetic)
        uint16_t exponent_tmp1 = (sum_exponent + bias) & 0x1FFF;
        uint16_t exponent = (exponent_tmp1 + k_ext) & 0x1FFF;
        
        // Overflow detection: If overall exponent is greater (or equal) to 15 then Overflow condition
        // Note: We need to exclude negative values (0xC-0xF) which have bit3=1 and bit2=1
        // Overflow occurs when: (bit15=1 AND bit14=0, meaning >=16) OR (exponent = 15 exactly)
        // Values 0x10-0x1F (16-31) are overflow, values 0x20-0x3F (32-63, signed: -16 to -1) are underflow
        bool exp_gt_15 = ((exponent >> 5) & 1) && !((exponent >> 4) & 1);  // >15: bit5=1 AND bit4=0 (values 16-31)
        bool exp_eq_15 = !((exponent >> 5) & 1) && ((exponent & 0x3FF) == 0x3FF);  // 15: bit5=0, all lower bits=1
        bool overflow = !zero && (exp_gt_15 || exp_eq_15);
        
        // Underflow detection: If exponent is negative (in 6-bit two's complement) then Underflow condition
        // Negative values in 16-bit two's complement: 0x1000-0x1FFF (16-31, represents -16 to -1)
        // These have bit5=1 AND bit4=0
        bool underflow = ((exponent >> 5) & 1) && ((exponent >> 4) & 1) && !zero;
        
        // Final result - IEEE-754 priority order
        // Note: Exception (infinity) must be handled AFTER overflow/underflow/zero checks
        // because we need to calculate the product to check for NaN (inf * 0)
        if (overflow) {
            result.exponent = 0x1F;
            result.mantissa = 0;
            return result;
        }
        
        if (underflow) {
            result.exponent = 0;
            result.mantissa = 0;
            return result;
        }
        
        if (zero) {
            result.exponent = 0;
            result.mantissa = 0;
            return result;
        }
        
        // Handle exception (infinity): inf * normal = inf, inf * inf = inf
        // (NaN case already handled at the top)
        if (exception) {
            result.exponent = 0x1F;
            result.mantissa = 0;
            return result;
        }
        
        // Normal result
        result.exponent = exponent & 0x1F;
        result.mantissa = product_mantissa & 0x3FF;
        
        return result;
    }
};

// Golden reference implementation using native floating-point multiplication
class FpMultiplierGolden : public FpMultiplier {
public:
    FpType run(const FpType &a, const FpType &b) override {
        return FpUtil::fromFloat(FpUtil::toFloat(a) * FpUtil::toFloat(b), a.m_bits, a.e_bits);
    }
};

#ifdef VERILATOR
// Verilog Testbench implementation
class FpMultiplierVerilog : public FpMultiplier {
private:
    Vmultiplier_fp16* dut;
    vluint64_t sim_time;
    VerilatedVcdC* trace;
    
public:
    FpMultiplierVerilog() : sim_time(0), trace(nullptr) {
        dut = new Vmultiplier_fp16;
        // Initialize tracing
        Verilated::traceEverOn(true);
        trace = new VerilatedVcdC;
        dut->trace(trace, 99);
        std::cout << "INFO: Opening VCD file: vcd/multiplier_fp16_test.vcd" << std::endl;
        trace->open("vcd/multiplier_fp16_test.vcd");
        std::cout << "INFO: VCD file opened successfully" << std::endl;
    }
    
    ~FpMultiplierVerilog() {
        if (trace) {
            std::cout << "INFO: Closing VCD file" << std::endl;
            trace->flush();
            trace->close();
            delete trace;
        }
        delete dut;
    }
    
    void tick() {
        dut->eval();
        if (trace) {
            trace->dump(sim_time);
            trace->flush();
        }
        sim_time++;
    }
    
    void clock_cycle() {
        tick();
    }
    
    void reset() {
        dut->eval();
    }
    
    FpType run(const FpType &a, const FpType &b) override {
        // Convert FpType to IEEE-754 bit representation
        uint16_t a_bits = (a.sign ? 1u : 0u) << (a.m_bits + a.e_bits);
        a_bits |= (a.exponent & ((1 << a.e_bits) - 1)) << a.m_bits;
        a_bits |= a.mantissa & ((1 << a.m_bits) - 1);


        uint16_t b_bits = (b.sign ? 1u : 0u) << (b.m_bits + b.e_bits);
        b_bits |= (b.exponent & ((1 << b.e_bits) - 1)) << b.m_bits;
        b_bits |= b.mantissa & ((1 << b.m_bits) - 1);
        
        // Apply inputs to Verilog module
        dut->a = a_bits;
        dut->b = b_bits;
        
        clock_cycle();
        
        // Get result and convert back to FpType
        uint16_t result_bits = dut->result;
        FpType result = FpType(result_bits >> (a.m_bits + a.e_bits),
            (result_bits >> a.m_bits) & ((1 << a.e_bits) - 1),
            result_bits & ((1 << a.m_bits) - 1),
            a.m_bits,
            a.e_bits);
        return result;
    }
};
#endif