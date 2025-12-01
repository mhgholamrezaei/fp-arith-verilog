#include "fp_adder_tester.h"
#include <iostream>
#include <fstream>
#include <unistd.h> // For getopt
#include <string>


// read command line arguments using getopt in a function
void read_command_line_arguments(int argc, char* argv[], int& test_number, std::string& filename, bool& verbose, std::string& mode) {
    int c;
    while ((c = getopt(argc, argv, "f:n:hvm:")) != -1) {
        switch (c) {
            case 'f':
                filename = optarg;
                break;
            case 'm':
                mode = optarg;
                break;
            case 'n':
                test_number = std::stoi(optarg);
                break;
            case 'v':
                verbose = true;
                break;
            case 'h':
                std::cout << "Usage: ./fp8_adder_test [-f <filename>] [-n <test_number>] [-v]" << std::endl;
                std::cout << "  -f <filename>     Use custom test vectors from file" << std::endl;
                std::cout << "  -n <test_number>  Use specified number of random test vectors (default=10000)" << std::endl;
                std::cout << "  -m <mode>         Use specified mode (verilog or emulation) (default=verilog)" << std::endl;
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
    std::string mode = "verilog";
    read_command_line_arguments(argc, argv, test_number, filename, verbose, mode);

    // Call tester class to run the test
    FpAdderTester tester(10, 5);
    FpAdder* fp_adder_under_test;
    if (mode == "verilog") {
        fp_adder_under_test = new FpAdderVerilog();
    } else if (mode == "emulation") {
        fp_adder_under_test = new FpAdderEmulation();
    } else {
        std::cerr << "ERROR: Invalid mode. Use 'verilog' or 'emulation'." << std::endl;
        exit(1);
    }
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
