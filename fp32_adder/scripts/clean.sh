#!/bin/bash
# fp32_adder/scripts/clean.sh - Clean FP32 adder project build artifacts

echo "Cleaning FP32 Adder Project"
echo "=========================="

# Change to the adder module directory
cd "$(dirname "$0")/.."

# Remove Verilator build directory
if [ -d "../obj_dir" ]; then
    echo "Removing obj_dir..."
    rm -rf ../obj_dir
fi

# Remove VCD directory
if [ -d "../vcd" ]; then
    echo "Removing vcd..."
    rm -rf ../vcd
fi

# Remove any standalone executables
if [ -f "./fp32_adder_test" ]; then
    echo "Removing fp32_adder_test executable..."
    rm -f ./fp32_adder_test
fi

# Remove test output logs
if [ -f "./test_output.log" ]; then
    echo "Removing test output log..."
    rm -f ./test_output.log
fi

echo "Adder clean completed successfully!"
