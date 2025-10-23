#!/bin/bash
# fp32_multiplier/scripts/run_all.sh - Complete FP32 multiplier test suite

set -e

echo "INFO: FP32 Multiplier Complete Test Suite"
echo "===================================="

# Change to the multiplier module directory
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

# Build the FP32 multiplier test
echo "INFO: Building FP32 multiplier test..."
../apptainer/apptainer_run.sh make all

# Copy fp32_multiplier_test to the current directory
if [ -f "obj_dir/fp32_multiplier_test" ]; then
    cp obj_dir/fp32_multiplier_test .
    echo "INFO: Executable copied successfully"
else
    echo "ERROR: Executable not found in obj_dir/"
    exit 1
fi

# Run the test
echo "INFO: Running FP32 multiplier tests..."
../apptainer/apptainer_run.sh ./fp32_multiplier_test -n 100

echo ""
echo "INFO: FP32 multiplier test suite completed successfully!"
