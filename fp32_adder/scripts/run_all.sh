#!/bin/bash
# fp32_adder/scripts/run_all.sh - Complete FP32 adder test suite

set -e

echo "INFO: FP32 Adder Complete Test Suite"
echo "===================================="

# Change to the adder module directory
cd "$(dirname "$0")/.."

# Check if Apptainer is available
if ! command -v apptainer &> /dev/null; then
    echo "Error: Apptainer not found. Please install Apptainer first."
    echo "Alternatively, ensure Verilator is installed and available in PATH."
    exit 1
fi

# Check if the Apptainer image exists
if [ ! -f "../apptainer/verilator.sif" ]; then
    echo "Error: Apptainer image not found at ../apptainer/verilator.sif"
    echo "Please build the image first: apptainer build ../apptainer/verilator.sif ../apptainer/verilator.def"
    exit 1
fi

echo "INFO: Using Apptainer container for Verilator..."

# Clean previous builds
echo "INFO: Cleaning previous builds..."
../apptainer/apptainer_run.sh make clean

# Build the FP32 adder test
echo "INFO: Building FP32 adder test..."
../apptainer/apptainer_run.sh make all

# Copy fp32_adder_test to the current directory
if [ -f "obj_dir/fp32_adder_test" ]; then
    cp obj_dir/fp32_adder_test .
    echo "INFO: Executable copied successfully"
else
    echo "ERROR: Executable not found in obj_dir/"
    exit 1
fi

echo ""
echo "INFO: FP32 adder test suite completed successfully!"
