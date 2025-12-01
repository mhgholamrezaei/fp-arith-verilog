#pragma once

#include "../../shared/src/fp_utils.h"

#ifdef VERILATOR
#include "verilated.h"
#include "verilated_vcd_c.h"
#ifdef VERILATOR_FP8
#include "Vadder_fp8.h"
#endif
#ifdef VERILATOR_FP32
#include "Vadder_fp32.h"
#endif
#ifdef VERILATOR_FP16
#include "Vadder_fp16.h"
#endif
#endif

// Abstract base class for floating-point adders
class FpAdder {
public:
    virtual FpType run(const FpType &a, const FpType &b) = 0;
};

class FpAdderEmulation : public FpAdder {
public:
    // Add with special-case handling for zero, infinity, NaN, overflow, and underflow
    FpType run(const FpType &a, const FpType &b) override {
        // Set format parameters from input operands
        FpType result = FpType(false, 0x0, 0x0, a.m_bits, a.e_bits);
        uint32_t max_exponent = (1 << a.e_bits) - 1;
        uint32_t max_mantissa = (1 << a.m_bits) - 1;

        // Step 0: Special cases
        bool a_is_infinity = (a.exponent == max_exponent);
        bool b_is_infinity = (b.exponent == max_exponent);
        bool is_infinity = a_is_infinity || b_is_infinity;
        
        bool a_is_zero = (a.exponent == 0) && (a.mantissa == 0);
        bool b_is_zero = (b.exponent == 0) && (b.mantissa == 0);
        bool is_zero = a_is_zero && b_is_zero;
        
        // NaN detection: NaN occurs when either operand is NaN (exp=255 with non-zero mantissa)
        bool a_is_nan = (a.exponent == max_exponent) && (a.mantissa != 0);
        bool b_is_nan = (b.exponent == max_exponent) && (b.mantissa != 0);
        bool is_nan = a_is_nan || b_is_nan || (a_is_infinity && b_is_infinity && (a.sign != b.sign));

        // Handle special cases
        if (is_nan) {
            result.sign = false;
            result.exponent = max_exponent;
            result.mantissa = (1 << (a.m_bits - 1));
            return result;
        }
        if (is_infinity) {
            result.sign = a_is_infinity ? a.sign : b.sign;
            result.exponent = max_exponent;
            result.mantissa = 0x0;
            return result;
        }
        if (is_zero) {
            result.sign = a.sign;
            result.exponent = 0x0;
            result.mantissa = 0x0;
            return result;
        }
        
        // Step 1: Extract sign, exponent, and mantissa from inputs
        bool a_sign = a.sign;
        bool b_sign = b.sign;
        uint8_t a_exp = a.exponent;
        uint8_t b_exp = b.exponent;
        uint32_t a_mantissa = a.mantissa;
        uint32_t b_mantissa = b.mantissa;
        
        // Add hidden bit for normalized numbers
        uint32_t a_mantissa_5 = a_is_zero ? a_mantissa : ((1 << a.m_bits) | a_mantissa);
        uint32_t b_mantissa_5 = b_is_zero ? b_mantissa : ((1 << b.m_bits) | b_mantissa);
        
        // Step 2: Compute the difference in exponents
        int32_t exp_diff = (int32_t)a_exp - (int32_t)b_exp;
        bool swap_exp = exp_diff < 0;
        
        uint32_t larger_exp = swap_exp ? b_exp : a_exp;
        uint32_t larger_mantissa = swap_exp ? b_mantissa_5 : a_mantissa_5;
        uint32_t smaller_mantissa = swap_exp ? a_mantissa_5 : b_mantissa_5;
        bool larger_sign = swap_exp ? b_sign : a_sign;
        
        uint32_t exp_diff_abs = swap_exp ? (-exp_diff) : exp_diff;
        
        // Step 3: Shift the smaller mantissa by the difference in exponents
        uint32_t smaller_mantissa_shifted;
        if (exp_diff_abs >= (1 + a.m_bits)) {
            smaller_mantissa_shifted = 0; // Shifted out completely
        } else {
            smaller_mantissa_shifted = smaller_mantissa >> exp_diff_abs;
        }
        
        // Step 4: Determine the effective operation
        bool operation_add = (a_sign == b_sign);
        
        // Step 5: Perform the addition/subtraction
        uint32_t mantissa_sub_add_result;
        if (operation_add) {
            // Addition
            mantissa_sub_add_result = larger_mantissa + smaller_mantissa_shifted;
        } else {
            // Subtraction
            mantissa_sub_add_result = larger_mantissa - smaller_mantissa_shifted;
        }
        
        // Step 6: Normalize the result
        uint32_t result_mantissa;
        uint32_t result_exp;
        
        if (operation_add) {
            // For addition, check if we need to shift right (overflow)
            bool do_right_shift = (mantissa_sub_add_result & (1 << (a.m_bits + 1))) != 0;
            if (do_right_shift) {
                result_mantissa = (mantissa_sub_add_result >> 1) & max_mantissa;
                result_exp = larger_exp + 1;
            } else {
                result_mantissa = mantissa_sub_add_result & max_mantissa;
                result_exp = larger_exp;
            }
        } else {
            // For subtraction, find leading 1 and normalize
            uint32_t temp_mantissa = mantissa_sub_add_result & (1 << (a.m_bits + 1)) - 1;
            uint32_t leading_1_position = 0;
            
            // Find leading 1 position (priority encoder)
            for (int i = a.m_bits; i >= 0; i--) {
                if ((temp_mantissa >> i) & 1) {
                    leading_1_position = a.m_bits - i;
                    break;
                }
            }
            
            if (leading_1_position == 0 && mantissa_sub_add_result == 0) {
                // Result is zero
                result.sign = a_sign;
                result.exponent = 0x0;
                result.mantissa = 0x0;
                return result;
            }
            
            // Normalize by shifting left
            result_mantissa = (temp_mantissa << leading_1_position) & max_mantissa;
            result_exp = larger_exp - leading_1_position;
        }
        
        // Step 7: Compute the sign
        bool result_sign;
        if (operation_add) {
            result_sign = a_sign;
        } else {
            result_sign = larger_sign ^ ((mantissa_sub_add_result & (1 << (a.m_bits + 1))) != 0);
        }
        
        // Step 8: Handle overflow and underflow
        if (result_exp >= max_exponent) {
            // Overflow
            result.sign = result_sign;
            result.exponent = max_exponent;
            result.mantissa = 0x0;
            return result;
        }
        if (result_exp == 0 || (mantissa_sub_add_result & (1 << (a.m_bits + 1)) && !operation_add)) {
            // Underflow
            result.sign = result_sign;
            result.exponent = 0x0;
            result.mantissa = 0x0;
            return result;
        }
        
        // Step 9: Return normal result
        result.sign = result_sign;
        result.exponent = result_exp;
        result.mantissa = result_mantissa;
        return result;
    }
};

#ifdef VERILATOR
class FpAdderVerilog : public FpAdder {
private:
    #ifdef VERILATOR_FP8
    Vadder_fp8* dut;
    #endif
    #ifdef VERILATOR_FP32
    Vadder_fp32* dut;
    #endif
    #ifdef VERILATOR_FP16
    Vadder_fp16* dut;
    #endif
    VerilatedVcdC* vcd;
    uint64_t sim_time;
    
public:
    FpAdderVerilog() : dut(nullptr), vcd(nullptr), sim_time(0) {
        #ifdef VERILATOR_FP8
        dut = new Vadder_fp8();
        #endif
        #ifdef VERILATOR_FP32
        dut = new Vadder_fp32();
        #endif
        #ifdef VERILATOR_FP16
        dut = new Vadder_fp16();
        #endif
        // Initialize VCD tracing
        Verilated::traceEverOn(true);
        vcd = new VerilatedVcdC();
        #ifdef VERILATOR_FP8
        dut->trace(vcd, 99);
            std::cout << "INFO: Opening VCD file: vcd/adder_fp8_test.vcd" << std::endl;
            vcd->open("vcd/adder_fp8_test.vcd");
        #endif
        #ifdef VERILATOR_FP32
        dut->trace(vcd, 99);
        std::cout << "INFO: Opening VCD file: vcd/adder_fp32_test.vcd" << std::endl;
        vcd->open("vcd/adder_fp32_test.vcd");
        #endif
        #ifdef VERILATOR_FP16
        dut->trace(vcd, 99);
        std::cout << "INFO: Opening VCD file: vcd/adder_fp16_test.vcd" << std::endl;
        vcd->open("vcd/adder_fp16_test.vcd");
        #endif
        std::cout << "INFO: VCD file opened successfully" << std::endl;
    }
    
    ~FpAdderVerilog() {
        if (vcd) {
            vcd->close();
            delete vcd;
        }
        delete dut;
    }
    
    FpType run(const FpType &a, const FpType &b) override {
         // Convert FpType to IEEE-754 bit representation
        #ifdef VERILATOR_FP8
        uint8_t a_bits = (a.sign ? 1u : 0u) << (a.m_bits + a.e_bits);
        #endif
        #ifdef VERILATOR_FP32
        uint32_t a_bits = (a.sign ? 1u : 0u) << (a.m_bits + a.e_bits);
        #endif
        #ifdef VERILATOR_FP16
        uint16_t a_bits = (a.sign ? 1u : 0u) << (a.m_bits + a.e_bits);
        #endif
        a_bits |= (a.exponent & ((1 << a.e_bits) - 1)) << a.m_bits;
        a_bits |= a.mantissa & ((1 << a.m_bits) - 1);


        #ifdef VERILATOR_FP8
        uint8_t b_bits = (b.sign ? 1u : 0u) << (b.m_bits + b.e_bits);
        #endif
        #ifdef VERILATOR_FP32
        uint32_t b_bits = (b.sign ? 1u : 0u) << (b.m_bits + b.e_bits);
        #endif
        #ifdef VERILATOR_FP16
        uint16_t b_bits = (b.sign ? 1u : 0u) << (b.m_bits + b.e_bits);
        #endif
        b_bits |= (b.exponent & ((1 << b.e_bits) - 1)) << b.m_bits;
        b_bits |= b.mantissa & ((1 << b.m_bits) - 1);
        
        // Set inputs
        dut->a = a_bits;
        dut->b = b_bits;
        
        // Evaluate
        dut->eval();
        
        // Dump VCD
        vcd->dump(sim_time++);
        vcd->flush();

        // Get result and convert back to FpType
        #ifdef VERILATOR_FP8
        uint8_t result_bits = dut->result;
        #endif
        #ifdef VERILATOR_FP32
        uint32_t result_bits = dut->result;
        #endif
        #ifdef VERILATOR_FP16
        uint16_t result_bits = dut->result;
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

// Golden model using C++ floating-point arithmetic
class FpAdderGolden : public FpAdder {
public:
    FpType run(const FpType &a, const FpType &b) override {
        // Convert to float, perform operation, convert back
        return FpUtil::fromFloat(FpUtil::toFloat(a) + FpUtil::toFloat(b), a.m_bits, a.e_bits);
    }
};
