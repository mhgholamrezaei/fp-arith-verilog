#pragma once

#include "../../shared/src/fp_utils.h"

#ifdef VERILATOR
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vfp32_adder.h"
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
        FpType result; 
        return result;
    }
};

#ifdef VERILATOR
class FpAdderVerilog : public FpAdder {
private:
    Vfp32_adder* dut;
    VerilatedVcdC* vcd;
    uint64_t sim_time;
    
public:
    FpAdderVerilog() : dut(new Vfp32_adder()), vcd(nullptr), sim_time(0) {
        // Initialize VCD tracing
        Verilated::traceEverOn(true);
        vcd = new VerilatedVcdC();
        dut->trace(vcd, 99);
        std::cout << "INFO: Opening VCD file: vcd/fp32_adder_test.vcd" << std::endl;
        vcd->open("vcd/fp32_adder_test.vcd");
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
        // Convert FpType to 32-bit representation
        uint32_t a_bits = FpUtil::floatToBits(FpUtil::toFloat(a));
        uint32_t b_bits = FpUtil::floatToBits(FpUtil::toFloat(b));
        
        // Set inputs
        dut->a = a_bits;
        dut->b = b_bits;
        
        // Evaluate
        dut->eval();
        
        // Dump VCD
        vcd->dump(sim_time++);
        vcd->flush();
        
        // Convert result back to FpType
        return FpUtil::fromFloat(FpUtil::bitsToFloat(dut->result));
    }
};
#endif

// Golden model using C++ floating-point arithmetic
class FpAdderGolden : public FpAdder {
public:
    FpType run(const FpType &a, const FpType &b) override {
        // Convert to float, perform operation, convert back
        float fa = FpUtil::toFloat(a);
        float fb = FpUtil::toFloat(b);
        float result = fa + fb;
        return FpUtil::fromFloat(result);
    }
};
