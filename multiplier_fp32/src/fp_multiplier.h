#pragma once

#include "../../shared/src/fp_utils.h"

#ifdef VERILATOR
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vmultiplier_fp32.h"
#endif

// Abstract base class for floating-point multipliers
class FpMultiplier {
public:
    virtual FpType run(const FpType &a, const FpType &b) = 0;
};

class FpMultiplierEmulation : public FpMultiplier {
public:
    // Multiply with special-case handling for zero, infinity, NaN, overflow, and underflow
    FpType run(const FpType &a, const FpType &b) override {
        FpType result;
        
        // Sign calculation
        result.sign = a.sign ^ b.sign;
        
        // Exception flag sets 1 if either one of the exponent is 255
        bool a_is_exception = (a.exponent == 0xFF);
        bool b_is_exception = (b.exponent == 0xFF);
        bool exception = a_is_exception || b_is_exception;
        
        // Zero detection
        bool a_is_zero = (a.exponent == 0) && (a.mantissa == 0);
        bool b_is_zero = (b.exponent == 0) && (b.mantissa == 0);
        
        // NaN detection: NaN occurs when either operand is NaN (exp=255 with non-zero mantissa)
        bool a_is_nan = (a.exponent == 0xFF) && (a.mantissa != 0);
        bool b_is_nan = (b.exponent == 0xFF) && (b.mantissa != 0);
        bool nan = a_is_nan || b_is_nan || (a_is_zero && b_is_exception) || (b_is_zero && a_is_exception);
        
        // Handle NaN case (highest priority)
        if (nan) {
            result.exponent = 0xFF;
            result.mantissa = 0x400000; // Quiet NaN payload
            return result;
        }
        
        // Assigning significand values according to Hidden Bit
        uint32_t operand_a = (a.exponent != 0) ? (0x800000 | a.mantissa) : a.mantissa;
        uint32_t operand_b = (b.exponent != 0) ? (0x800000 | b.mantissa) : b.mantissa;
        
        // Calculate product (24x24 -> 48-bit)
        uint64_t product = (uint64_t)operand_a * (uint64_t)operand_b;
        
        // Normalization check
        bool normalised = (product >> 47) & 1;
        
        // Adjust product if not normalized
        uint64_t product_normalised = normalised ? product : product << 1;
        
        // Product round: ending 22 bits are OR'ed for rounding operation
        bool product_round = (product_normalised & 0x7FFFFF) != 0;
        
        // Final Mantissa with rounding
        uint32_t product_mantissa = ((product_normalised >> 24) & 0x7FFFFF) + (((product_normalised >> 23) & 1) & (product_round ? 1 : 0));
        
        // Check for renormalization
        bool renormalized = (product_mantissa >> 23) & 1;
        
        // Zero detection
        bool zero = exception ? false : ((product_normalised >> 24) == 0);
        
        // Sum of exponents
        uint32_t sum_exponent = a.exponent + b.exponent;
        
        // Final exponent calculation
        uint32_t exponent = sum_exponent - 127 + normalised + renormalized;
        
        // Overflow detection: If overall exponent is greater (or equal) to 255 then Overflow condition
        bool exp_gt_255 = (exponent >> 8) & 1;  // >255 ⇒ bit8=1
        bool exp_eq_255 = !((exponent >> 8) & 1) && ((exponent & 0xFF) == 0xFF);  // 255 ⇒ bit8=0, rest=all 1
        bool overflow = !zero && (exp_gt_255 || exp_eq_255);
        
        // Underflow detection: If sum of both exponents is less than 127 then Underflow condition
        bool underflow = ((exponent >> 8) & (exponent >> 7)) && !zero;
        
        // Final result - IEEE-754 priority order
        if (overflow) {
            result.exponent = 0xFF;
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
        
        if (exception) {
            result.exponent = 0xFF;
            result.mantissa = 0;
            return result;
        }
        
        // Normal result
        result.exponent = exponent & 0xFF;
        result.mantissa = product_mantissa & 0x7FFFFF;
        
        return result;
    }
};

// Golden reference implementation using native floating-point multiplication
class FpMultiplierGolden : public FpMultiplier {
public:
    FpType run(const FpType &a, const FpType &b) override {
        return FpUtil::fromFloat(FpUtil::toFloat(a) * FpUtil::toFloat(b));
    }
};

#ifdef VERILATOR
// Verilog Testbench implementation
class FpMultiplierVerilog : public FpMultiplier {
private:
    Vmultiplier_fp32* dut;
    vluint64_t sim_time;
    VerilatedVcdC* trace;
    
public:
    FpMultiplierVerilog() : sim_time(0), trace(nullptr) {
        dut = new Vmultiplier_fp32;
        // Initialize tracing
        Verilated::traceEverOn(true);
        trace = new VerilatedVcdC;
        dut->trace(trace, 99);
        std::cout << "INFO: Opening VCD file: vcd/multiplier_fp32_test.vcd" << std::endl;
        trace->open("vcd/multiplier_fp32_test.vcd");
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
        uint32_t a_bits = (a.sign ? 1u : 0u) << (a.m_bits + a.e_bits);
        a_bits |= (a.exponent & ((1 << a.e_bits) - 1)) << a.m_bits;
        a_bits |= a.mantissa & ((1 << a.m_bits) - 1);
        
        uint32_t b_bits = (b.sign ? 1u : 0u) << (b.m_bits + b.e_bits);
        b_bits |= (b.exponent & ((1 << b.e_bits) - 1)) << b.m_bits;
        b_bits |= b.mantissa & ((1 << b.m_bits) - 1);
        
        // Apply inputs to Verilog module
        dut->a = a_bits;
        dut->b = b_bits;
        
        clock_cycle();
        
        // Get result and convert back to FpType
        uint32_t result_bits = dut->result;
        
        FpType result;
        result.sign = (result_bits >> (a.m_bits + a.e_bits)) & 1;
        result.exponent = (result_bits >> a.m_bits) & ((1 << a.e_bits) - 1);
        result.mantissa = result_bits & ((1 << a.m_bits) - 1);
        
        return result;
    }
};
#endif