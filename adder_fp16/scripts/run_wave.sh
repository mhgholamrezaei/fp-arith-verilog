#!/bin/bash
# fp16_adder/scripts/run_wave.sh - Launch GTKWave for FP16 adder VCD files

echo "Launching GTKWave for FP16 Adder"
echo "================================="

# Change to the adder module directory
cd "$(dirname "$0")/.."

# Check if GTKWave is available
if ! command -v gtkwave &> /dev/null; then
    echo "Error: GTKWave not found. Please install GTKWave first."
    exit 1
fi

# Check if VCD file exists
VCD_FILE="vcd/adder_fp16_test.vcd"
if [ ! -f "$VCD_FILE" ]; then
    echo "Error: VCD file not found at $VCD_FILE"
    echo "Please run the adder tests first to generate the VCD file."
    exit 1
fi

echo "INFO: Opening VCD file: $VCD_FILE"
echo "INFO: Launching GTKWave..."

# Launch GTKWave with the VCD file
gtkwave "$VCD_FILE" &

echo "INFO: GTKWave launched successfully!"
echo "INFO: VCD file: $VCD_FILE"
