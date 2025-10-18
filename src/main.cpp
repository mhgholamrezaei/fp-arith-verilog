#include "fp_utils.h"
#include "fp_multiplier.h"

// Test class for floating-point multiplication
class FpMultiplierTester {
private:
    std::random_device rd;
    std::mt19937 gen;
    std::uniform_real_distribution<float> dis;
    float max_float = 10.0f; 
    float min_float = -10.0f;

public:
    FpMultiplierTester() : gen(rd()), dis(min_float, max_float) {}

    float random_float_in_range(float min, float max) {
        std::uniform_real_distribution<float> range_dis(min, max);
        return range_dis(gen);
    }

    float edge_case_float() {
        static int counter = 0;
        float edge_cases[] = {
            0.0f, -0.0f, 1.0f, -1.0f, 2.0f, -2.0f,
            std::numeric_limits<float>::max(),
            std::numeric_limits<float>::min(),
            std::numeric_limits<float>::infinity(),
            -std::numeric_limits<float>::infinity(),
            std::numeric_limits<float>::quiet_NaN(),
            std::numeric_limits<float>::signaling_NaN(),
        };
        return edge_cases[counter++ % sizeof(edge_cases) / sizeof(edge_cases[0])];
    }

    float random_float() {
        return (gen() % 2) ? edge_case_float() : random_float_in_range(min_float, max_float);
    }

    int run(FpMultiplier& fp_multiplier_under_test, FpMultiplier& fp_multiplier_golden, uint32_t n = 1) {
        int errors = 0;
        for (uint32_t i = 0; i < n; i++) {
            FpType a = FpUtil::fromFloat(float(random_float_in_range(this->min_float, this->max_float)));
            FpType b = FpUtil::fromFloat(float(random_float_in_range(this->min_float, this->max_float)));
            FpType z = fp_multiplier_under_test.run(a, b);
            FpType z_golden = fp_multiplier_golden.run(a, b);
            
            // Compare results
            if (z.sign != z_golden.sign || z.exponent != z_golden.exponent || z.mantissa != z_golden.mantissa) {
                errors++;
                std::cout << "--------------------------------" << std::endl;
                std::cout << "Error at index " << i << ": " << std::endl;
                FpUtil::print("a", a);
                FpUtil::print("b", b);
                FpUtil::print("z       ", z);
                FpUtil::print("z_golden", z_golden);
            }
            else {
                std::cout << "--------------------------------" << std::endl;
                std::cout << "Success at index " << i << ": " << std::endl;
                std::cout << "a: " << std::endl;
                FpUtil::print("a", a);
                std::cout << "b: " << std::endl;
                FpUtil::print("b", b);
                FpUtil::print("z       ", z);
                FpUtil::print("z_golden", z_golden);
            }
        }
        std::cout << "--------------------------------" << std::endl;
        std::cout << "Number of tests: " << n << std::endl;
        std::cout << "Number of errors: " << errors << std::endl;
        return 0;
    }
};

int main() {
    FpMultiplierTester tester;
    int test_number = 10;  // Test count
    FpMultiplier* fp_multiplier_under_test = new FpMultiplierVerilog();
    FpMultiplier* fp_multiplier_golden = new FpMultiplierGolden();
    
    std::cout << "Starting FP32 multiplier tests..." << std::endl;
    int result = tester.run(*fp_multiplier_under_test, *fp_multiplier_golden, test_number);
    
    // Clean up
    delete fp_multiplier_under_test;
    delete fp_multiplier_golden;
    
    std::cout << "Tests completed. VCD file should be generated." << std::endl;
    return result;
}