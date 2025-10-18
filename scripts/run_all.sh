#!/bin/bash
# run_all.sh - Complete FP32 multiplier test suite

set -e

echo "FP32 Multiplier Complete Test Suite"
echo "===================================="

# Check if Apptainer is available
if ! command -v apptainer &> /dev/null; then
    echo "Error: Apptainer not found. Please install Apptainer first."
    echo "Alternatively, ensure Verilator is installed and available in PATH."
    exit 1
fi

# Check if the Apptainer image exists
if [ ! -f "./apptainer/verilator.sif" ]; then
    echo "Error: Apptainer image not found at ./apptainer/verilator.sif"
    echo "Please build the image first: apptainer build ./apptainer/verilator.sif ./apptainer/verilator.def"
    exit 1
fi

echo "Using Apptainer container for Verilator..."

# Clean previous builds
echo "Cleaning previous builds..."
./apptainer/apptainer_run.sh make clean

# Build the FP32 multiplier test
echo "Building FP32 multiplier test..."
./apptainer/apptainer_run.sh make all

# Run the test
echo "Running FP32 multiplier tests..."
./apptainer/apptainer_run.sh make run


echo ""
echo "FP32 multiplier test suite completed successfully!"
echo "You can also run './apptainer/apptainer_run.sh make view-vcd' to view waveforms."
