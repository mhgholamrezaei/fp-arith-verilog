# FP8 Multiplier Module Makefile
# Standalone build system for FP8 multiplier

# C++ Configuration
CXX := g++
CXXFLAGS := -std=c++11 -O2 -Wall -Wextra

# Verilator Configuration
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --Wno-PROCASSINIT --timing --trace --cc --exe
VERILATOR_TOP = --top-module multiplier_fp8

# Module-specific paths (relative to module directory)
VSRC_DIR = vsrc
SRC_DIR = src
TEST_VECTORS_DIR = test_vectors
SHARED_VSRC = ../shared/vsrc
SHARED_SRC = ../shared/src

# Source files
VERILOG_SOURCES = $(VSRC_DIR)/multiplier_fp8.v $(SHARED_VSRC)/multiplier_nbit_full.v \
                  $(SHARED_VSRC)/adder_nbit_cin.v $(SHARED_VSRC)/adder_1bit.v $(SHARED_VSRC)/maj3.v
CPP_SOURCES = $(SRC_DIR)/fp_multiplier_test.cpp

# Output directories (relative to module directory)
OBJ_DIR = obj_dir
VCD_DIR = vcd

# Main target executable
MAIN_TARGET = multiplier_fp8_test.out

# Default target
all: $(MAIN_TARGET)

# Main FP8 multiplier test build with Verilator
$(MAIN_TARGET): $(VERILOG_SOURCES) $(CPP_SOURCES) $(VCD_DIR)
	@echo "Building FP8 multiplier test with Verilator..."
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_TOP) \
		-CFLAGS "-I../shared/src" \
		$(VERILOG_SOURCES) \
		$(SRC_DIR)/fp_multiplier_test.cpp -o $(MAIN_TARGET) 
	@echo "Compiling..."
	cd $(OBJ_DIR) && make -f Vmultiplier_fp8.mk
	@echo "Multiplier build complete!"

# Clean all build artifacts
clean:
	@echo "Cleaning build artifacts..."
	rm -rf $(OBJ_DIR)
	rm -rf $(VCD_DIR)
	rm -f test_output.log
	@echo "Clean complete!"

# Create necessary directories
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(VCD_DIR):
	mkdir -p $(VCD_DIR)

.PHONY: all clean
