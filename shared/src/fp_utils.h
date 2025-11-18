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
    uint32_t m_bits{23};
    uint32_t e_bits{8};
    
    FpType() = default;
    FpType(bool s, uint32_t exp, uint32_t mant, uint32_t mb = 23, uint32_t eb = 8) : sign(s), mantissa(mant), exponent(exp), m_bits(mb), e_bits(eb) {}
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
    static FpType fromFloat(float f, uint32_t mb = 23, uint32_t eb = 8) {
        // Handle special cases
        if (std::isnan(f)) {
            return FpType(std::signbit(f), (1 << eb) - 1, 1 << (mb - 1), mb, eb);
        }
        if (std::isinf(f)) {
            return FpType(std::signbit(f), (1 << eb) - 1, 0, mb, eb);
        }
        if (f == 0.0f || f == -0.0f) {
            return FpType(std::signbit(f), 0, 0, mb, eb);
        }
        uint32_t bits = floatToBits(f);
        
        bool sign = std::signbit(f);
        int32_t exponent = (bits >> 23) & 0xFF;
        int32_t mantissa = bits & ((1 << 23) - 1);

        // Convert FP32 exponent to FP8/16/32 exponent
        int32_t fp32_exponent_unbiased = exponent - 127;
        int32_t fpX_bias = (1 << (eb - 1)) - 1;
        int32_t fpX_exponent_biased = fp32_exponent_unbiased + fpX_bias;

        // if too small, return zero
        if (fp32_exponent_unbiased < -((int32_t)(1 << (eb - 1)) - 1)) {
            return FpType(false, 0, 0, mb, eb);
        }

        // if too large, return infinity
        if (fp32_exponent_unbiased > ((int32_t)(1 << (eb - 1)))) {
            return FpType(sign, (1 << eb) - 1, 0, mb, eb);
        }

        uint32_t fpX_mantissa = mantissa >> (23 - mb);

        return FpType(sign, fpX_exponent_biased, fpX_mantissa, mb, eb);
    }

    // Convert FpType to float
    static float toFloat(const FpType &e) {
        // Handle special cases
        if (e.exponent == 0 && e.mantissa == 0) {
            return 0.0f;
        }
        if (e.exponent == (1 << e.e_bits) - 1 && e.mantissa == 0) {
            return std::numeric_limits<float>::infinity() * (e.sign ? -1.0f : 1.0f);
        }
        if (e.exponent == (1 << e.e_bits) - 1 && e.mantissa != 0) {

            return std::numeric_limits<float>::quiet_NaN() * (e.sign ? -1.0f : 1.0f);
        }
        int32_t fpX_exponent_unbiased = e.exponent - ((1 << (e.e_bits - 1)) - 1);
        int32_t fp32_exponent_biased = fpX_exponent_unbiased + 127;
        uint32_t fp32_mantissa = e.mantissa << (23 - e.m_bits);
        uint32_t fp32_bits = (e.sign ? 1u : 0u) << 31 | fp32_exponent_biased << 23 | fp32_mantissa;
        return bitsToFloat(fp32_bits);
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
        return std::fabs(fa - fb) <= eps;
    }
};
