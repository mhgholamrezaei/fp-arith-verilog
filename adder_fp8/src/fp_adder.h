#pragma once

#include "../../shared/src/fp_utils.h"

#ifdef VERILATOR
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vadder_fp8.h"
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
        // Step 0: Special cases
        bool a_is_infinity = (a.exponent == 0x7);
        bool b_is_infinity = (b.exponent == 0x7);
        bool is_infinity = a_is_infinity || b_is_infinity;
        
        bool a_is_zero = (a.exponent == 0) && (a.mantissa == 0);
        bool b_is_zero = (b.exponent == 0) && (b.mantissa == 0);
        bool is_zero = a_is_zero && b_is_zero;
        
        // NaN detection: NaN occurs when either operand is NaN (exp=255 with non-zero mantissa)
        bool a_is_nan = (a.exponent == 0x7) && (a.mantissa != 0);
        bool b_is_nan = (b.exponent == 0x7) && (b.mantissa != 0);
        bool is_nan = a_is_nan || b_is_nan || (a_is_infinity && b_is_infinity && (a.sign != b.sign));

        // Handle special cases
        if (is_nan) {
            return FpType(false, 0x7, 0x8, 4, 3); // NaN
        }
        if (is_infinity) {
            return FpType(a_is_infinity ? a.sign : b.sign, 0x7, 0x0, 4, 3); // Infinity
        }
        if (is_zero) {
            return FpType(a.sign, 0x0, 0x0, 4, 3); // Zero
        }
        
        // Step 1: Extract sign, exponent, and mantissa from inputs
        bool a_sign = a.sign;
        bool b_sign = b.sign;
        uint8_t a_exp = a.exponent;
        uint8_t b_exp = b.exponent;
        uint32_t a_mantissa = a.mantissa;
        uint32_t b_mantissa = b.mantissa;
        
        // Add hidden bit for normalized numbers
        uint32_t a_mantissa_5 = a_is_zero ? a_mantissa : (0x10 | a_mantissa);
        uint32_t b_mantissa_5 = b_is_zero ? b_mantissa : (0x10 | b_mantissa);
        
        // Step 2: Compute the difference in exponents
        int16_t exp_diff = static_cast<int16_t>(a_exp) - static_cast<int16_t>(b_exp);
        bool swap_exp = exp_diff < 0;
        
        uint8_t larger_exp = swap_exp ? b_exp : a_exp;
        uint32_t larger_mantissa = swap_exp ? b_mantissa_5 : a_mantissa_5;
        uint32_t smaller_mantissa = swap_exp ? a_mantissa_5 : b_mantissa_5;
        bool larger_sign = swap_exp ? b_sign : a_sign;
        
        uint8_t exp_diff_abs = swap_exp ? (-exp_diff) : exp_diff;
        
        // Step 3: Shift the smaller mantissa by the difference in exponents
        uint32_t smaller_mantissa_shifted;
        if (exp_diff_abs >= 5) {
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
        uint8_t result_exp;
        
        if (operation_add) {
            // For addition, check if we need to shift right (overflow)
            bool do_right_shift = (mantissa_sub_add_result & 0x20) != 0;
            if (do_right_shift) {
                result_mantissa = (mantissa_sub_add_result >> 1) & 0xF;
                result_exp = larger_exp + 1;
            } else {
                result_mantissa = mantissa_sub_add_result & 0xF;
                result_exp = larger_exp;
            }
        } else {
            // For subtraction, find leading 1 and normalize
            uint32_t temp_mantissa = mantissa_sub_add_result & 0x1F;
            uint8_t leading_1_position = 0;
            
            // Find leading 1 position (priority encoder)
            for (int i = 4; i >= 0; i--) {
                if ((temp_mantissa >> i) & 1) {
                    leading_1_position = 4 - i;
                    break;
                }
            }
            
            if (leading_1_position == 0 && temp_mantissa == 0) {
                // Result is zero
                return FpType(a_sign, 0x0, 0x0, 4, 3);
            }
            
            // Normalize by shifting left
            result_mantissa = (temp_mantissa << leading_1_position) & 0xF;
            result_exp = larger_exp - leading_1_position;
        }
        
        // Step 7: Compute the sign
        bool result_sign;
        if (operation_add) {
            result_sign = a_sign;
        } else {
            result_sign = larger_sign ^ ((mantissa_sub_add_result & 0x20) != 0);
        }
        
        // Step 8: Handle overflow and underflow
        if (result_exp >= 0xFF) {
            // Overflow
            return FpType(result_sign, 0x7, 0x0, 4, 3);
        }
        if (result_exp == 0 || (mantissa_sub_add_result & 0x20 && !operation_add)) {
            // Underflow
            return FpType(result_sign, 0x0, 0x0, 4, 3);
        }
        
        // Step 9: Return normal result
        return FpType(result_sign, result_exp, result_mantissa, 4, 3);
    }
};

#ifdef VERILATOR
class FpAdderVerilog : public FpAdder {
private:
    Vadder_fp8* dut;
    VerilatedVcdC* vcd;
    uint64_t sim_time;
    
public:
    FpAdderVerilog() : dut(new Vadder_fp8()), vcd(nullptr), sim_time(0) {
        // Initialize VCD tracing
        Verilated::traceEverOn(true);
        vcd = new VerilatedVcdC();
        dut->trace(vcd, 99);
        std::cout << "INFO: Opening VCD file: vcd/adder_fp8_test.vcd" << std::endl;
        vcd->open("vcd/adder_fp8_test.vcd");
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
        uint8_t a_bits = (a.sign ? 1u : 0u) << (a.m_bits + a.e_bits);
        a_bits |= (a.exponent & ((1 << a.e_bits) - 1)) << a.m_bits;
        a_bits |= a.mantissa & ((1 << a.m_bits) - 1);


        uint8_t b_bits = (b.sign ? 1u : 0u) << (b.m_bits + b.e_bits);
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
        uint8_t result_bits = dut->result;
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
