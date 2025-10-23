# FP32 Multiplier Module Makefile
# Standalone build system for FP32 multiplier

# C++ Configuration
CXX := g++
CXXFLAGS := -std=c++11 -O2 -Wall -Wextra

# Verilator Configuration
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --Wno-PROCASSINIT --timing --trace --cc --exe
VERILATOR_TOP = --top-module fp32_multiplier

# Module-specific paths (relative to module directory)
VSRC_DIR = vsrc
SRC_DIR = src
TEST_VECTORS_DIR = test_vectors
SHARED_VSRC = ../shared/vsrc
SHARED_SRC = ../shared/src

# Source files
VERILOG_SOURCES = $(VSRC_DIR)/fp32_multiplier.v $(VSRC_DIR)/multiplier_nbit.v \
                  $(SHARED_VSRC)/adder_nbit.v $(SHARED_VSRC)/adder_1bit.v $(SHARED_VSRC)/maj3.v
CPP_SOURCES = $(SRC_DIR)/fp_multiplier_test.cpp

# Output directories (relative to project root)
OBJ_DIR = ../obj_dir
VCD_DIR = vcd

# Main target executable
MAIN_TARGET = $(OBJ_DIR)/fp32_multiplier_test

# Default target
all: $(MAIN_TARGET)

# Main FP32 multiplier test build with Verilator
$(MAIN_TARGET): $(VERILOG_SOURCES) $(CPP_SOURCES) $(VCD_DIR)
	@echo "Building FP32 multiplier test with Verilator..."
	cd .. && $(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_TOP) \
		-CFLAGS "-Ishared/src" \
		fp32_multiplier/vsrc/fp32_multiplier.v fp32_multiplier/vsrc/multiplier_nbit.v \
		shared/vsrc/adder_nbit.v shared/vsrc/adder_1bit.v shared/vsrc/maj3.v \
		fp32_multiplier/src/fp_multiplier_test.cpp -o fp32_multiplier_test
	@echo "Compiling..."
	cd $(OBJ_DIR) && make -f Vfp32_multiplier.mk
	@echo "Multiplier build complete!"

# Test targets
test-random: $(MAIN_TARGET)
	@echo "Running FP32 multiplier tests (100 random cases)..."
	./$(MAIN_TARGET) -n 100

test-small: $(MAIN_TARGET)
	@echo "Running FP32 multiplier tests (small test vectors)..."
	./$(MAIN_TARGET) -f $(TEST_VECTORS_DIR)/test_vectors_small.txt

test-all: $(MAIN_TARGET)
	@echo "Running FP32 multiplier tests (all test vectors)..."
	./$(MAIN_TARGET) -f $(TEST_VECTORS_DIR)/test_vectors_all.txt

test-edge: $(MAIN_TARGET)
	@echo "Running FP32 multiplier tests (edge cases)..."
	./$(MAIN_TARGET) -f $(TEST_VECTORS_DIR)/test_vectors_edge_cases.txt

test-verbose: $(MAIN_TARGET)
	@echo "Running FP32 multiplier tests (verbose output)..."
	./$(MAIN_TARGET) -n 10 -v

# Custom test with specific file
test-file: $(MAIN_TARGET)
	@if [ -z "$(FILE)" ]; then \
		echo "Usage: make test-file FILE=path/to/test_vectors.txt"; \
		exit 1; \
	fi
	@echo "Running FP32 multiplier tests with file: $(FILE)"
	./$(MAIN_TARGET) -f $(FILE)

# Clean build artifacts for this module only
clean:
	@echo "Cleaning FP32 multiplier build artifacts..."
	rm -rf $(OBJ_DIR)/Vfp32_multiplier.*
	rm -f $(OBJ_DIR)/fp32_multiplier_test
	@echo "Multiplier clean complete!"

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
	@echo "FP32 Multiplier Module - Available targets:"
	@echo "  all           - Build the FP32 multiplier test executable"
	@echo "  test-random    - Run tests with 100 random cases"
	@echo "  test-small     - Run tests with small test vectors"
	@echo "  test-all       - Run tests with all test vectors"
	@echo "  test-edge      - Run tests with edge case vectors"
	@echo "  test-verbose   - Run tests with verbose output (10 cases)"
	@echo "  test-file      - Run tests with custom file (use FILE=path)"
	@echo "  clean          - Clean multiplier build artifacts only"
	@echo "  clean-all      - Clean all build artifacts"
	@echo "  help           - Show this help message"
	@echo ""
	@echo "Examples:"
	@echo "  make test-file FILE=test_vectors/test_vectors_small.txt"
	@echo "  make test-random"
	@echo "  make test-all"

.PHONY: all test-random test-small test-all test-edge test-verbose test-file clean clean-all help
