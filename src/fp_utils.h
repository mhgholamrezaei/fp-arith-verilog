#pragma once

#include <iostream>
#include <cstdint>
#include <limits>
#include <random>

// Floating-point type representation
class FpType {
public:
    bool sign{false};
    uint32_t mantissa{0};
    uint32_t exponent{0};
    
    FpType() = default;
    FpType(bool s, uint32_t exp, uint32_t mant) : sign(s), mantissa(mant), exponent(exp) {}
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
        result.sign = (bits >> 31) & 1;
        result.exponent = (bits >> 23) & 0xFF;
        result.mantissa = bits & 0x7FFFFF;
        return result;
    }

    // Convert FpType to float
    static float toFloat(const FpType &e) {
        uint32_t bits = (e.sign ? 1u : 0u) << 31;
        bits |= (e.exponent & 0xFFu) << 23;
        bits |= e.mantissa & 0x7FFFFFu;
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
        } else if (e.exponent == 0xFF && e.mantissa == 0) {
            std::cout << " [inf]";
        } else if (e.exponent == 0xFF && e.mantissa != 0) {
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
        return std::fabs(fa - fb) <= eps * std::fmax(1.0f, std::fmax(std::fabs(fa), std::fabs(fb)));
    }
};
