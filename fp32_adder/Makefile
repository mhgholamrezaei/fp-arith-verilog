# FP32 Adder Module Makefile
# Standalone build system for FP32 adder

# C++ Configuration
CXX := g++
CXXFLAGS := -std=c++11 -O2 -Wall -Wextra

# Verilator Configuration
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --Wno-PROCASSINIT --timing --trace --cc --exe
VERILATOR_TOP = --top-module fp32_adder

# Module-specific paths (relative to module directory)
VSRC_DIR = vsrc
SRC_DIR = src
TEST_VECTORS_DIR = test_vectors
SHARED_VSRC = ../shared/vsrc
SHARED_SRC = ../shared/src

# Source files
VERILOG_SOURCES = $(VSRC_DIR)/fp32_adder.v  $(VSRC_DIR)/leading_one_detector.v $(VSRC_DIR)/right_shifter.v $(VSRC_DIR)/left_shifter.v $(SHARED_VSRC)/adder_nbit.v $(SHARED_VSRC)/adder_1bit.v $(SHARED_VSRC)/maj3.v
CPP_SOURCES = $(SRC_DIR)/fp_adder_test.cpp

# Output directories (relative to module directory)
OBJ_DIR = obj_dir
VCD_DIR = vcd

# Main target executable
MAIN_TARGET = $(OBJ_DIR)/fp32_adder_test

# Default target
all: $(MAIN_TARGET)

# Main FP32 adder test build with Verilator
$(MAIN_TARGET): $(VERILOG_SOURCES) $(CPP_SOURCES) $(VCD_DIR)
	@echo "Building FP32 adder test with Verilator..."
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_TOP) \
		-CFLAGS "-I../shared/src" \
		$(VERILOG_SOURCES) \
		$(SRC_DIR)/fp_adder_test.cpp -o fp32_adder_test
	@echo "Compiling..."
	cd $(OBJ_DIR) && make -f Vfp32_adder.mk
	@echo "Adder build complete!"

# Test targets
test-random: $(MAIN_TARGET)
	@echo "Running FP32 adder tests (100 random cases)..."
	./$(MAIN_TARGET) -n 100

test-basic: $(MAIN_TARGET)
	@echo "Running FP32 adder tests (basic test vectors)..."
	./$(MAIN_TARGET) -f $(TEST_VECTORS_DIR)/test_vectors_basic.txt

test-edge: $(MAIN_TARGET)
	@echo "Running FP32 adder tests (edge case vectors)..."
	./$(MAIN_TARGET) -f $(TEST_VECTORS_DIR)/test_vectors_edge_cases.txt

test-verbose: $(MAIN_TARGET)
	@echo "Running FP32 adder tests (verbose output)..."
	./$(MAIN_TARGET) -n 10 -v

# Custom test with specific file
test-file: $(MAIN_TARGET)
	@if [ -z "$(FILE)" ]; then \
		echo "Usage: make test-file FILE=path/to/test_vectors.txt"; \
		exit 1; \
	fi
	@echo "Running FP32 adder tests with file: $(FILE)"
	./$(MAIN_TARGET) -f $(FILE)

# Clean build artifacts for this module only
clean:
	@echo "Cleaning FP32 adder build artifacts..."
	rm -rf $(OBJ_DIR)/Vfp32_adder.*
	rm -f $(OBJ_DIR)/fp32_adder_test
	@echo "Adder clean complete!"

# Clean all build artifacts
clean-all:
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
	@echo "  test-random    - Run tests with 100 random cases"
	@echo "  test-basic     - Run tests with basic test vectors"
	@echo "  test-edge      - Run tests with edge case vectors"
	@echo "  test-verbose   - Run tests with verbose output (10 cases)"
	@echo "  test-file      - Run tests with custom file (use FILE=path)"
	@echo "  clean          - Clean adder build artifacts only"
	@echo "  clean-all      - Clean all build artifacts"
	@echo "  help           - Show this help message"
	@echo ""
	@echo "Examples:"
	@echo "  make test-file FILE=test_vectors/test_vectors_basic.txt"
	@echo "  make test-random"
	@echo "  make test-basic"

.PHONY: all test-random test-basic test-edge test-verbose test-file clean clean-all help
