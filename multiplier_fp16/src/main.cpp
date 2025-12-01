#include "fp_multiplier_tester.h"
#include <unistd.h> // For getopt
#include <iostream>
#include <string>
#include <cstdlib> // For exit

// read command line arguments using getopt in a function
void read_command_line_arguments(int argc, char* argv[], int& test_number, std::string& filename, bool& verbose, std::string& mode) {
    int c;
    while ((c = getopt(argc, argv, "f:n:m:h:v")) != -1) {
        switch (c) {
            case 'f':
                filename = optarg;
                break;
            case 'n':
                test_number = std::stoi(optarg);
                break;
            case 'm':
                mode = optarg;
                break;
            case 'v':
                verbose = true;
                break;
            case 'h':
                std::cout << "Usage: ./main [-f <filename>] [-n <test_number>] [-v]" << std::endl;
                std::cout << "  -f <filename>     Use custom test vectors from file" << std::endl;
                std::cout << "  -n <test_number>  Use specified number of random test vectors (default=10000)" << std::endl;
                std::cout << "  -m <mode>         Use specified mode (default=emulation)" << std::endl;
                std::cout << "  -v                Verbose output (show all test results)" << std::endl;
                std::cout << "  -h                Show this help message" << std::endl;
            default:
                exit(0);
        }
    }
}

int main(int argc, char* argv[]) {
    // read command line arguments using getopt in a function
    int test_number = 10000;
    std::string filename = "";
    bool verbose = false;
    std::string mode = "emulation";
    read_command_line_arguments(argc, argv, test_number, filename, verbose, mode);

    // Call tester class to run the test
    FpMultiplierTester tester(4, 3);
    FpMultiplier* fp_multiplier_under_test = nullptr;
    if (mode == "emulation") {
        fp_multiplier_under_test = new FpMultiplierEmulation();
    } else if (mode == "verilog") {
        fp_multiplier_under_test = new FpMultiplierVerilog();
    } else {
        std::cerr << "ERROR: Invalid mode: " << mode << std::endl;
        exit(1);
    }
    FpMultiplier* fp_multiplier_golden = new FpMultiplierGolden();
    int result = 0;
    if (filename.empty()) {
        result = tester.run(*fp_multiplier_under_test, *fp_multiplier_golden, test_number, verbose);
    } else {
        result = tester.run(*fp_multiplier_under_test, *fp_multiplier_golden, filename, verbose);
    }

    // Clean up
    delete fp_multiplier_under_test;
    delete fp_multiplier_golden;
    
    std::cout << "INFO: Tests completed. VCD file should be generated." << std::endl;
    return result;
}