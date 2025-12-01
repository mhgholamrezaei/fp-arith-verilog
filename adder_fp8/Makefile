# FP8 Adder Module Makefile
# Standalone build system for FP8 adder

# C++ Configuration
CXX := g++
CXXFLAGS := -std=c++11 -O2 -Wall -Wextra

# Verilator Configuration
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --Wno-PROCASSINIT --timing --trace --cc --exe
VERILATOR_TOP = --top-module adder_fp8

# Module-specific paths (relative to module directory)
VSRC_DIR = vsrc
SRC_DIR = src
TEST_VECTORS_DIR = test_vectors
SHARED_VSRC = ../shared/vsrc
SHARED_SRC = ../shared/src

# Source files
VERILOG_SOURCES = $(VSRC_DIR)/adder_fp8.v  $(SHARED_VSRC)/leading_one_detector_8.v $(SHARED_VSRC)/right_shifter_5.v $(SHARED_VSRC)/left_shifter_4.v $(SHARED_VSRC)/adder_nbit_cin.v $(SHARED_VSRC)/adder_1bit.v $(SHARED_VSRC)/maj3.v
CPP_SOURCES = $(SRC_DIR)/main.cpp

# Output directories (relative to module directory)
OBJ_DIR = obj_dir
VCD_DIR = vcd

# Main target executable
MAIN_TARGET = $(OBJ_DIR)/adder_fp8_test

# Default target
all: $(MAIN_TARGET)

# Main FP8 adder test build with Verilator
$(MAIN_TARGET): $(VERILOG_SOURCES) $(CPP_SOURCES) $(VCD_DIR)
	@echo "Building FP8 adder test with Verilator..."
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_TOP) \
		-CFLAGS "-I../../shared/src -I. -I$(OBJ_DIR) -I$(SRC_DIR) -DVERILATOR_FP8" \
		$(VERILOG_SOURCES) \
		$(CPP_SOURCES) -o adder_fp8_test
	@echo "Compiling..."
	cd $(OBJ_DIR) && make -f Vadder_fp8.mk
	@echo "Adder build complete!"

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
	@echo "FP8 Adder Module - Available targets:"
	@echo "  all           - Build the FP8 adder test executable"
	@echo "  clean          - Clean adder build artifacts only"
	@echo "  help           - Show this help message"
	@echo ""
	@echo "Examples:"

.PHONY: all clean help
