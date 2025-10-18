#!/bin/bash
# clean.sh - Clean FP32 multiplier project build artifacts

echo "Cleaning FP32 Multiplier Project"
echo "================================="

# Remove Verilator build directory
if [ -d "./obj_dir" ]; then
    echo "Removing obj_dir..."
    rm -rf ./obj_dir
fi

# Remove VCD directory
if [ -d "./vcd" ]; then
    echo "Removing vcd..."
    rm -rf ./vcd
fi

# Remove any standalone executables
if [ -f "./main" ]; then
    echo "Removing main executable..."
    rm -f ./main
fi

# Remove test output logs
if [ -f "./test_output.log" ]; then
    echo "Removing test output log..."
    rm -f ./test_output.log
fi

echo "Clean completed successfully!"
