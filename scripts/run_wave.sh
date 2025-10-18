#!/bin/bash
# run_cpp_wave.sh - Run FP32 multiplier tests and view VCD with GTKWave
set -e

# View with GTKWave on host system
echo "Opening GTKWave to view VCD file..."
gtkwave vcd/fp32_multiplier_test.vcd -S ./scripts/init.tcl

echo ""
echo "FP32 multiplier test with VCD viewing completed!"
