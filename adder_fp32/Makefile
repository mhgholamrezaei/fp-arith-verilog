# FP32 Adder Module Makefile
# Standalone build system for FP32 adder

# C++ Configuration
CXX := g++
CXXFLAGS := -std=c++11 -O2 -Wall -Wextra

# Verilator Configuration
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --Wno-PROCASSINIT --timing --trace --cc --exe
VERILATOR_TOP = --top-module adder_fp32

# Module-specific paths (relative to module directory)
VSRC_DIR = vsrc
SRC_DIR = src
TEST_VECTORS_DIR = test_vectors
SHARED_VSRC = ../shared/vsrc
SHARED_SRC = ../shared/src

# Source files
VERILOG_SOURCES = $(VSRC_DIR)/adder_fp32.v  $(SHARED_VSRC)/leading_one_detector_32.v $(SHARED_VSRC)/right_shifter_24.v $(SHARED_VSRC)/left_shifter_23.v $(SHARED_VSRC)/adder_nbit_cin.v $(SHARED_VSRC)/adder_1bit.v $(SHARED_VSRC)/maj3.v
CPP_SOURCES = $(SRC_DIR)/fp_adder_test.cpp

# Output directories (relative to module directory)
OBJ_DIR = obj_dir
VCD_DIR = vcd

# Main target executable
MAIN_TARGET = $(OBJ_DIR)/adder_fp32_test

# Default target
all: $(MAIN_TARGET)

# Main FP32 adder test build with Verilator
$(MAIN_TARGET): $(VERILOG_SOURCES) $(CPP_SOURCES) $(VCD_DIR)
	@echo "Building FP32 adder test with Verilator..."
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_TOP) \
		-CFLAGS "-I../shared/src" \
		$(VERILOG_SOURCES) \
		$(SRC_DIR)/fp_adder_test.cpp -o adder_fp32_test
	@echo "Compiling..."
	cd $(OBJ_DIR) && make -f Vadder_fp32.mk
	@echo "Adder build complete!"

# Clean build artifacts for this module only
clean:
	@echo "Cleaning FP32 adder build artifacts..."
	rm -rf $(OBJ_DIR)/Vadder_fp32.*
	rm -rf $(OBJ_DIR)/Vfp32_adder.*
	rm -f $(OBJ_DIR)/adder_fp32_test
	@echo "Adder clean complete!"

# Clean all build artifacts
clean:
	@echo "Cleaning all build artifacts..."
	rm -rf $(OBJ_DIR)
	rm -rf $(VCD_DIR)
	rm -f test_output.log
	@echo "Clean complete!"

# Create necessary directories
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(VCD_DIR):
	mkdir -p $(VCD_DIR)

# Help target
help:
	@echo "FP32 Adder Module - Available targets:"
	@echo "  all           - Build the FP32 adder test executable"
	@echo "  clean          - Clean adder build artifacts only"
	@echo "  help           - Show this help message"
	@echo ""
	@echo "Examples:"

.PHONY: all clean help
