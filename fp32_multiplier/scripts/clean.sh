#!/bin/bash
# fp32_multiplier/scripts/clean.sh - Clean FP32 multiplier project build artifacts

echo "Cleaning FP32 Multiplier Project"
echo "================================="

# Change to the multiplier module directory
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
if [ -f "./fp32_multiplier_test" ]; then
    echo "Removing fp32_multiplier_test executable..."
    rm -f ./fp32_multiplier_test
fi

# Remove test output logs
if [ -f "./test_output.log" ]; then
    echo "Removing test output log..."
    rm -f ./test_output.log
fi

echo "Multiplier clean completed successfully!"
