#pragma once

#include <iostream>
#include <cstdint>
#include <limits>
#include <random>

// Floating-point type representation
class FpType {
public:
    bool sign{false};
    uint64_t mantissa{0};
    uint64_t exponent{0};
    uint32_t m_bits{23};
    uint32_t e_bits{8};
    
    FpType() = default;
    FpType(bool s, uint64_t exp, uint64_t mant, uint32_t mb = 23, uint32_t eb = 8) : sign(s), mantissa(mant), exponent(exp), m_bits(mb), e_bits(eb) {}
};

// Utility functions for floating-point operations
class FpUtil {
public:
    // Convert float to bit representation
    static uint32_t floatToBits(float f) {
        union { float f; uint32_t u; } converter;
        converter.f = f;
        return converter.u;
    }

    // Convert bit representation to float
    static float bitsToFloat(uint32_t u) {
        union { float f; uint32_t u; } converter;
        converter.u = u;
        return converter.f;
    }

    // Convert float to FpType
    static FpType fromFloat(float f) {
        uint32_t bits = floatToBits(f);
        FpType result;
        result.sign = (bits >> (result.m_bits + result.e_bits)) & 1;
        result.exponent = (uint64_t) (bits >> result.m_bits) & ((1 << result.e_bits) - 1);
        result.mantissa = (uint64_t) bits & ((1 << result.m_bits) - 1);
        return result;
    }

    // Convert FpType to float
    static float toFloat(const FpType &e) {
        uint32_t bits = (e.sign ? 1u : 0u) << (e.m_bits + e.e_bits);
        bits |= (e.exponent & ((1 << e.e_bits) - 1)) << e.m_bits;
        bits |= e.mantissa & ((1 << e.m_bits) - 1);
        return bitsToFloat(bits);
    }

    // Print FpType in a readable format
    static void print(const char *name, const FpType &e) {
        std::cout << name << ": sign=" << e.sign 
                  << " exp=0x" << std::hex << e.exponent << std::dec
                  << " mant=0x" << std::hex << e.mantissa << std::dec;
        
        // Determine special cases
        if (e.exponent == 0 && e.mantissa == 0) {
            std::cout << " [zero]";
        } else if (e.exponent == ((1 << e.e_bits) - 1) && e.mantissa == 0) {
            std::cout << " [inf]";
        } else if (e.exponent == ((1 << e.e_bits) - 1) && e.mantissa != 0) {
            std::cout << " [nan]";
        }
        
        std::cout << " (" << toFloat(e) << ")" << std::endl;
    }

    //  Checks if two FpType are equal
    static bool is_equal(const FpType &a, const FpType &b, float eps = 1e-6f) {
        float fa = toFloat(a);
        float fb = toFloat(b);

        // Treat both NaNs as equal
        if (std::isnan(fa) && std::isnan(fb)) return true;

        // Both infinities must have same sign
        if (std::isinf(fa) && std::isinf(fb)) 
            return std::signbit(fa) == std::signbit(fb);

        // Use relative comparison (also catches zeros)
        return std::fabs(fa - fb) <= eps;
    }
};
