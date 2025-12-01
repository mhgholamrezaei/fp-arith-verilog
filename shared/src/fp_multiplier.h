#pragma once

#include "../../shared/src/fp_utils.h"

#ifdef VERILATOR
#include "verilated.h"
#include "verilated_vcd_c.h"
#ifdef VERILATOR_FP8
#include "Vmultiplier_fp8.h"
#endif
#ifdef VERILATOR_FP32
#include "Vmultiplier_fp32.h"
#endif
#ifdef VERILATOR_FP16
#include "Vmultiplier_fp16.h"
#endif
#endif

// Abstract base class for floating-point multipliers
class FpMultiplier {
public:
    virtual FpType run(const FpType &a, const FpType &b) = 0;
};

class FpMultiplierEmulation : public FpMultiplier {
public:
    // Multiply with special-case handling for zero, infinity, NaN, overflow, and underflow
    // Based on multiplier_fp8.v Verilog implementation
    FpType run(const FpType &a, const FpType &b) override {
        FpType result;
        
        // Set format parameters from input operands
        result.m_bits = a.m_bits;
        result.e_bits = a.e_bits;
        
        // Sign calculation
        result.sign = a.sign ^ b.sign;
        
        // constants
        uint32_t max_exponent = (1 << a.e_bits) - 1;
        uint32_t max_mantissa = (1 << a.m_bits) - 1;

        // Exception flag sets 1 if either one of the exponent is 7 (all 3 exponent bits set)
        bool a_is_exception = (a.exponent == max_exponent);
        bool b_is_exception = (b.exponent == max_exponent);
        bool exception = a_is_exception || b_is_exception;
        
        // Zero detection: exp==0 && mant==0
        bool a_is_zero = (a.exponent == 0) && (a.mantissa == 0);
        bool b_is_zero = (b.exponent == 0) && (b.mantissa == 0);
        
        // NaN detection: NaN occurs when either operand is NaN (exp=7 with non-zero mantissa)
        bool a_is_nan = (a.exponent == max_exponent) && (a.mantissa != 0);
        bool b_is_nan = (b.exponent == max_exponent) && (b.mantissa != 0);
        bool nan = a_is_nan || b_is_nan || (a_is_zero && b_is_exception) || (b_is_zero && a_is_exception);
        
        // Handle NaN case (highest priority)
        if (nan) {
            result.exponent = max_exponent;
            result.mantissa = (1 << (a.m_bits - 1)); // Quiet NaN payload
            return result;
        }
        
        // Assigning significand values according to Hidden Bit
        uint32_t operand_a = ((a.exponent & max_exponent) != 0) ? ((1 << a.m_bits) | (a.mantissa & max_mantissa)) : (a.mantissa & max_mantissa);
        uint32_t operand_b = ((b.exponent & max_exponent) != 0) ? ((1 << b.m_bits) | (b.mantissa & max_mantissa)) : (b.mantissa & max_mantissa);
        
        uint64_t product = (uint64_t)operand_a * (uint64_t)operand_b;
        
        // Normalization check
        bool normalised = (product >> (2 * a.m_bits + 1)) & 1;
        
        // Adjust product if not normalized
        uint64_t product_normalised = normalised ? product : product << 1;
        
        bool product_round = (product_normalised & max_mantissa) != 0;
        
        // Final Mantissa with rounding
        uint64_t base_mantissa = (product_normalised >> (a.m_bits + 1)) & max_mantissa;
        uint64_t add_round = ((product_normalised >> (a.m_bits)) & 1) & (product_round ? 1 : 0);
        uint64_t product_mantissa = base_mantissa + add_round;

        // Check for renormalization 
        bool renormalized = (product_mantissa >> a.m_bits) & 1;
        
        // Zero detection
        bool zero = exception ? false : ((product_normalised >> (a.m_bits + 1)) == 0);
        
        // Sum of exponents
        uint32_t sum_exponent = (a.exponent & max_exponent) + (b.exponent & max_exponent);
        
        // Final exponent calculation (4-bit arithmetic)
        // exponent = sum_exponent - bias + normalised + renormalized
        int32_t bias = -((1 << (a.e_bits - 1)) - 1); 
        uint32_t exponent = (uint32_t)((int32_t)sum_exponent + bias + (int32_t)renormalized + (int32_t)normalised); 

        // Overflow detection: If overall exponent is greater (or equal) to 7 then Overflow condition
        bool exp_gt_7 = ((exponent >> a.e_bits) & 1) && !((exponent >> (a.e_bits - 1)) & 1);  // >7: bit(a.e_bits)=1 AND bit(a.e_bits-1)=0
        bool exp_eq_7 = !((exponent >> a.e_bits) & 1) && ((exponent & max_exponent) == max_exponent);  // 7: bit(a.e_bits)=0, all lower bits=1
        bool overflow = !zero && (exp_gt_7 || exp_eq_7);
        
        
        // Underflow detection: If exponent is negative then Underflow condition
        bool underflow = ((exponent >> a.e_bits) & 1) && ((exponent >> (a.e_bits - 1)) & 1) && !zero;
        
        // Final result - IEEE-754 priority order
        if (overflow) {
            result.exponent = max_exponent;
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
            result.exponent = max_exponent;
            result.mantissa = 0;
            return result;
        }
        
        // Normal result
        result.exponent = exponent & max_exponent;
        result.mantissa = product_mantissa & max_mantissa;
        
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
    #ifdef VERILATOR_FP8
    Vmultiplier_fp8* dut;
    #endif
    #ifdef VERILATOR_FP32
    Vmultiplier_fp32* dut;
    #endif
    #ifdef VERILATOR_FP16
    Vmultiplier_fp16* dut;
    #endif
    vluint64_t sim_time;
    VerilatedVcdC* trace;
    
public:
    FpMultiplierVerilog() : sim_time(0), trace(nullptr) {
        #ifdef VERILATOR_FP8
        dut = new Vmultiplier_fp8;
        #endif
        #ifdef VERILATOR_FP32
        dut = new Vmultiplier_fp32;
        #endif
        #ifdef VERILATOR_FP16
        dut = new Vmultiplier_fp16;
        #endif
        // Initialize tracing
        Verilated::traceEverOn(true);
        trace = new VerilatedVcdC;
        dut->trace(trace, 99);
        #ifdef VERILATOR_FP8
        std::cout << "INFO: Opening VCD file: vcd/multiplier_fp8_test.vcd" << std::endl;
        trace->open("vcd/multiplier_fp8_test.vcd");
        #endif
        #ifdef VERILATOR_FP16
        std::cout << "INFO: Opening VCD file: vcd/multiplier_fp16_test.vcd" << std::endl;
        trace->open("vcd/multiplier_fp16_test.vcd");
        #endif
        #ifdef VERILATOR_FP32
        std::cout << "INFO: Opening VCD file: vcd/multiplier_fp32_test.vcd" << std::endl;
        trace->open("vcd/multiplier_fp32_test.vcd");
        #endif
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
        #ifdef VERILATOR_FP8
        uint8_t a_bits = (a.sign ? 1u : 0u) << (a.m_bits + a.e_bits);
        #endif
        #ifdef VERILATOR_FP16
        uint16_t a_bits = (a.sign ? 1u : 0u) << (a.m_bits + a.e_bits);
        #endif
        #ifdef VERILATOR_FP32
        uint32_t a_bits = (a.sign ? 1u : 0u) << (a.m_bits + a.e_bits);
        #endif
        a_bits |= (a.exponent & ((1 << a.e_bits) - 1)) << a.m_bits;
        a_bits |= a.mantissa & ((1 << a.m_bits) - 1);


        #ifdef VERILATOR_FP8
        uint8_t b_bits = (b.sign ? 1u : 0u) << (b.m_bits + b.e_bits);
        #endif
        #ifdef VERILATOR_FP16
        uint16_t b_bits = (b.sign ? 1u : 0u) << (b.m_bits + b.e_bits);
        #endif
        #ifdef VERILATOR_FP32
        uint32_t b_bits = (b.sign ? 1u : 0u) << (b.m_bits + b.e_bits);
        #endif
        b_bits |= (b.exponent & ((1 << b.e_bits) - 1)) << b.m_bits;
        b_bits |= b.mantissa & ((1 << b.m_bits) - 1);
        
        // Apply inputs to Verilog module
        dut->a = a_bits;
        dut->b = b_bits;
        
        clock_cycle();
        
        // Get result and convert back to FpType
        #ifdef VERILATOR_FP8
        uint8_t result_bits = dut->result;
        #endif
        #ifdef VERILATOR_FP16
        uint16_t result_bits = dut->result;
        #endif
        #ifdef VERILATOR_FP32
        uint32_t result_bits = dut->result;
        #endif
        FpType result = FpType(result_bits >> (a.m_bits + a.e_bits),
            (result_bits >> a.m_bits) & ((1 << a.e_bits) - 1),
            result_bits & ((1 << a.m_bits) - 1),
            a.m_bits,
            a.e_bits);
        return result;
    }
};
#endif