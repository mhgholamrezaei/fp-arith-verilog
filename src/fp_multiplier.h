#pragma once

#include "fp_utils.h"

#ifdef VERILATOR
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vfp32_multiplier.h"
#endif

// Abstract base class for floating-point multipliers
class FpMultiplier {
public:
    virtual FpType run(const FpType &a, const FpType &b) = 0;
};

// Floating point multiplication with special case handling
// Based on IEEE-754 standard and Verilog implementation
class FpMultiplierImpl : public FpMultiplier {
public:
    // Multiply with special-case handling for zero, infinity, NaN, overflow, and underflow
    FpType run(const FpType &a, const FpType &b) override {
        FpType r;

        // Check special cases from exponent and mantissa
        bool a_zero = (a.exponent == 0 && a.mantissa == 0);
        bool b_zero = (b.exponent == 0 && b.mantissa == 0);
        bool a_inf = (a.exponent == 0xFFu && a.mantissa == 0);
        bool b_inf = (b.exponent == 0xFFu && b.mantissa == 0);
        bool a_nan = (a.exponent == 0xFFu && a.mantissa != 0);
        bool b_nan = (b.exponent == 0xFFu && b.mantissa != 0);

        // Handle special cases first
        if (a_zero || b_zero) {
            r.sign = a.sign ^ b.sign;
            r.exponent = 0;
            r.mantissa = 0;
            return r;
        }

        if (a_inf || b_inf) {
            if (a_nan || b_nan) {
                // NaN * anything = NaN
                r.sign = a.sign ^ b.sign;
                r.exponent = 0xFFu;
                r.mantissa = 1; // non-zero mantissa for NaN
                return r;
            } else {
                // inf * finite = inf
                r.sign = a.sign ^ b.sign;
                r.exponent = 0xFFu;
                r.mantissa = 0;
                return r;
            }
        }

        if (a_nan || b_nan) {
            // NaN * anything = NaN
            r.sign = a.sign ^ b.sign;
            r.exponent = 0xFFu;
            r.mantissa = 1; // non-zero mantissa for NaN
            return r;
        }

        // Exception flag sets 1 if either one of the exponent is 255 (0xFF)
        bool exception = (a.exponent == 0xFFu) || (b.exponent == 0xFFu);
        if (exception) {
            r.sign = a.sign ^ b.sign;
            r.exponent = 0;
            r.mantissa = 0;
            return r;
        }

        // Assigning significand values according to Hidden Bit
        // If exponent is equal to zero then hidden bit will be 0, else it will be 1
        uint32_t a_mantissa = (a.exponent != 0) ? ((1u << 23) | a.mantissa) : a.mantissa;
        uint32_t b_mantissa = (b.exponent != 0) ? ((1u << 23) | b.mantissa) : b.mantissa;

        // Calculating Product (24x24 -> up to 48-bit product)
        uint64_t product = (uint64_t)a_mantissa * (uint64_t)b_mantissa;

        // Check if product is normalized (48th bit set)
        bool normalized = (product >> 47) & 1u;
        
        // Assign normalized value based on 48th bit
        uint64_t product_normalized = normalized ? product : product << 1;

        // Calculate exponent: sum_exponent - 127 + normalized
        int32_t sum_exponent = (int32_t)a.exponent + (int32_t)b.exponent;
        
        // Check for overflow based on sum_exponent (before bias adjustment)
        // If sum_exponent >= 382 (255 + 127), we'll have overflow after bias adjustment
        if (sum_exponent >= 382) {
            r.sign = a.sign ^ b.sign;
            r.exponent = 0xFFu;
            r.mantissa = 0;
            return r;
        }

        // Calculate final exponent
        int32_t exponent = sum_exponent - 127 + (normalized ? 1 : 0);

        // Check for underflow
        if (exponent <= 0) {
            r.sign = a.sign ^ b.sign;
            r.exponent = 0;
            r.mantissa = 0;
            return r;
        }

        // Product round: ending 22 bits are OR'ed for rounding operation
        bool product_round = (product_normalized & 0x7FFFFFu) != 0;

        // Final Mantissa: product_normalized[46:24] + (product_normalized[23] & product_round)
        uint32_t product_mantissa = (product_normalized >> 24) & 0x7FFFFFu;
        if ((product_normalized >> 23) & 1u) {
            product_mantissa += product_round ? 1u : 0u;
        }

        // Check for zero result
        bool zero = (product_mantissa == 0);

        // Set result based on conditions
        if (exception) {
            r.sign = a.sign ^ b.sign;
            r.exponent = 0;
            r.mantissa = 0;
        } else if (zero) {
            r.sign = a.sign ^ b.sign;
            r.exponent = 0;
            r.mantissa = 0;
        } else if (exponent >= 255) {
            // Overflow
            r.sign = a.sign ^ b.sign;
            r.exponent = 0xFFu;
            r.mantissa = 0;
        } else if (exponent <= 0) {
            // Underflow
            r.sign = a.sign ^ b.sign;
            r.exponent = 0;
            r.mantissa = 0;
        } else {
            // Normal result
            r.sign = a.sign ^ b.sign;
            r.exponent = exponent;
            r.mantissa = product_mantissa;
        }

        return r;
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
    Vfp32_multiplier* dut;
    vluint64_t sim_time;
    VerilatedVcdC* trace;
    
public:
    FpMultiplierVerilog() : sim_time(0), trace(nullptr) {
        dut = new Vfp32_multiplier;
        // Initialize tracing
        Verilated::traceEverOn(true);
        trace = new VerilatedVcdC;
        dut->trace(trace, 99);
        std::cout << "Opening VCD file: vcd/fp32_multiplier_test.vcd" << std::endl;
        trace->open("vcd/fp32_multiplier_test.vcd");
        std::cout << "VCD file opened successfully" << std::endl;
    }
    
    ~FpMultiplierVerilog() {
        if (trace) {
            std::cout << "Closing VCD file" << std::endl;
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
        dut->clk = 0;
        tick();
        dut->clk = 1;
        tick();
    }
    
    void reset() {
        dut->reset = 1;
        clock_cycle();
        dut->reset = 0;
    }
    
    FpType run(const FpType &a, const FpType &b) override {
        // Convert FpType to IEEE-754 bit representation
        uint32_t a_bits = (a.sign ? 1u : 0u) << 31;
        a_bits |= (a.exponent & 0xFFu) << 23;
        a_bits |= a.mantissa & 0x7FFFFFu;
        
        uint32_t b_bits = (b.sign ? 1u : 0u) << 31;
        b_bits |= (b.exponent & 0xFFu) << 23;
        b_bits |= b.mantissa & 0x7FFFFFu;
        
        // Apply inputs to Verilog module
        dut->a = a_bits;
        dut->b = b_bits;
        dut->start = 1;
        
        // Wait for start to be processed
        clock_cycle();
        dut->start = 0;
        
        // Wait for computation to complete
        int timeout = 0;
        while (!dut->done && timeout < 100) {
            clock_cycle();
            timeout++;
        }
        
        // Wait one more cycle for valid signal
        clock_cycle();
        
        // Get result and convert back to FpType
        uint32_t result_bits = dut->result;
        
        FpType result;
        result.sign = (result_bits >> 31) & 1;
        result.exponent = (result_bits >> 23) & 0xFF;
        result.mantissa = result_bits & 0x7FFFFF;
        
        return result;
    }
};
#endif