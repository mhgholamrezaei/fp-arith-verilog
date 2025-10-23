#include "../shared/src/fp_utils.h"
#include "fp_adder.h"
#include <utility>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>
#include <random>
#include <clocale> // For setlocale
#include <unistd.h> // For getopt

// Test class for floating-point addition
class FpAdderTester {
private:
    std::random_device rd;
    std::mt19937 gen;
    std::uniform_real_distribution<float> dis;
    float max_float = std::numeric_limits<float>::max();
    float min_float = -std::numeric_limits<float>::max();

public:
    FpAdderTester() : gen(rd()), dis(min_float, max_float) {}

    float random_float_in_range(float min, float max) {
        std::uniform_real_distribution<float> range_dis(min, max);
        return range_dis(gen);
    }
    
    // return a float number from a rotational array of float numbers
    float edge_case_float() {
        static unsigned int index = 0;
        static const float edge_case_floats[] = {
            0.0f,
            1.0f,
            -1.0f,
            std::numeric_limits<float>::max(),
            -std::numeric_limits<float>::max(),
            std::numeric_limits<float>::quiet_NaN(),
            std::numeric_limits<float>::signaling_NaN(),
            std::numeric_limits<float>::infinity(),
            -std::numeric_limits<float>::infinity(),
            std::numeric_limits<float>::denorm_min(),
            -std::numeric_limits<float>::denorm_min()
        };
        return edge_case_floats[index++ % sizeof(edge_case_floats) / sizeof(edge_case_floats[0])];
    }

    // return a random float pair
    std::pair<float, float> random_float() {
        float a, b;
        if (rand() % 2 == 0) {
            a = edge_case_float();
        } else {
            a = random_float_in_range(min_float, max_float);
        }
        if (rand() % 2 == 0) {
            b = edge_case_float();
        } else {
            b = random_float_in_range(min_float, max_float);
        }
        return std::make_pair(a, b);
    }

    // generate a vector of pair of floating points  using random_float
    // n as the number of test vectors
    std::vector<std::pair<float, float>> random_test_vectors(uint32_t n) {
        std::vector<std::pair<float, float>> test_vectors;
        for (uint32_t i = 0; i < n; i++) {
            test_vectors.push_back(random_float());
        }
        return test_vectors;
    }

    // generate a vector of a pari of floating points from a file 
    // filename as the name of the file
    std::vector<std::pair<float, float>> custom_test_vectors(const std::string& filename) {
        std::vector<std::pair<float, float>> test_vectors;
        std::ifstream file(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file: " + filename);
        }
        std::string line;
        while (getline(file, line)) {
            if (line.empty()) {                
                continue;
            }
            if (line[0] == '#') {
                continue;
            }   
            // Support for "inf", "-inf", "nan" parsing
            std::istringstream iss(line);
            std::string a_str, b_str;
            iss >> a_str >> b_str;

            auto parse_float = [&line](const std::string& s) -> float {
                if (s == "inf" || s == "+inf" || s == "INFINITY" || s == "+INFINITY") {
                    return std::numeric_limits<float>::infinity();
                } else if (s == "-inf" || s == "-INFINITY") {
                    return -std::numeric_limits<float>::infinity();
                } else if (s == "nan" || s == "NAN") {
                    return std::numeric_limits<float>::quiet_NaN();
                } else {
                    try {
                        // Handle scientific notation and regular floats
                        // Use C locale for consistent parsing
                        char* old_locale = setlocale(LC_NUMERIC, "C");
                        
                        // First try parsing as double, then convert to float
                        // This handles cases where the value is smaller than minimum normal float
                        double double_val = std::stod(s);
                        float result = static_cast<float>(double_val);
                        
                        if (old_locale) setlocale(LC_NUMERIC, old_locale);
                        return result;
                    } catch (const std::exception& e) {
                        std::cerr << "ERROR: Unable to parse float from '" << s << "' on line: " << line << std::endl;
                        std::cerr << "Exception: " << e.what() << std::endl;
                        throw;
                    }
                }
            };

            float a_f = parse_float(a_str);
            float b_f = parse_float(b_str);
            test_vectors.push_back(std::make_pair(a_f, b_f));
        }
        file.close();
        return test_vectors;
    }
    
    // get two inputs and dut's output and golden model's output and print them
    void print_test_vector(const std::pair<float, float>& test_pair, const FpType& dut_output, const FpType& golden_output) {
        FpUtil::print("a            ", FpUtil::fromFloat(test_pair.first));
        FpUtil::print("b            ", FpUtil::fromFloat(test_pair.second));
        FpUtil::print("dut_output   ", dut_output);
        FpUtil::print("golden_output", golden_output);
        std::cout << "--------------------------------" << std::endl;
    }

    // run the test vectors and compare the results
    // fp_adder_under_test and fp_adder_golden as the dut and golden model
    // test_vectors as the test vectors
    int run(FpAdder& fp_adder_under_test, FpAdder& fp_adder_golden, std::vector<std::pair<float, float>>& test_vectors, bool verbose) {
        int errors = 0;
        uint32_t i = 0;
        for (const auto& test_pair : test_vectors) {
            FpType a = FpUtil::fromFloat(test_pair.first);
            FpType b = FpUtil::fromFloat(test_pair.second);
            FpType z = fp_adder_under_test.run(a, b);
            FpType z_golden = fp_adder_golden.run(a, b);
            // compare results
            if (!FpUtil::is_equal(z, z_golden)) {
                errors++;
                std::cout << "Error: " << std::endl;
                print_test_vector(test_pair, z, z_golden);
            }
            else if (verbose) {
                print_test_vector(test_pair, z, z_golden);
            }
        }
   
        std::cout << "INFO: #test/#errors = " << test_vectors.size() << "/" << errors << std::endl;
        return errors;
    }
    
    // get the file name, generate test vectors and call the run
    int run(FpAdder& fp_adder_under_test, FpAdder& fp_adder_golden, const std::string& filename, bool verbose) {
        std::vector<std::pair<float, float>> test_vectors = custom_test_vectors(filename);
        return run(fp_adder_under_test, fp_adder_golden, test_vectors, verbose);
    }

    // get the test number, generate test vectors and call the run
    int run(FpAdder& fp_adder_under_test, FpAdder& fp_adder_golden, uint32_t n, bool verbose) {
        std::vector<std::pair<float, float>> test_vectors = random_test_vectors(n);
        return run(fp_adder_under_test, fp_adder_golden, test_vectors, verbose);
    }
};

// read command line arguments using getopt in a function
void read_command_line_arguments(int argc, char* argv[], int& test_number, std::string& filename, bool& verbose) {
    int c;
    while ((c = getopt(argc, argv, "f:n:hv")) != -1) {
        switch (c) {
            case 'f':
                filename = optarg;
                break;
            case 'n':
                test_number = std::stoi(optarg);
                break;
            case 'v':
                verbose = true;
                break;
            case 'h':
                std::cout << "Usage: ./fp32_adder_test [-f <filename>] [-n <test_number>] [-v]" << std::endl;
                std::cout << "  -f <filename>     Use custom test vectors from file" << std::endl;
                std::cout << "  -n <test_number>  Use specified number of random test vectors (default=10000)" << std::endl;
                std::cout << "  -v                Verbose output (show all test results)" << std::endl;
                std::cout << "  -h                Show this help message" << std::endl;
            default:
                exit(0);
        }
    }
}

int main(int argc, char* argv[]) {
    // read command line arguments using getopt in a function
    int test_number = 1;
    std::string filename = "";
    bool verbose = false;
    read_command_line_arguments(argc, argv, test_number, filename, verbose);

    // Call tester class to run the test
    FpAdderTester tester;
    FpAdder* fp_adder_under_test = new FpAdderVerilog();
    FpAdder* fp_adder_golden = new FpAdderGolden();
    int result = 0;
    if (filename.empty()) {
        result = tester.run(*fp_adder_under_test, *fp_adder_golden, test_number, verbose);
    } else {
        result = tester.run(*fp_adder_under_test, *fp_adder_golden, filename, verbose);
    }

    // Clean up
    delete fp_adder_under_test;
    delete fp_adder_golden;
    
    std::cout << "INFO: Tests completed. VCD file should be generated." << std::endl;
    return result;
}
