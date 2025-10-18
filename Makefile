# FP32 Multiplier Project Makefile
# Single main target for FP32 multiplier testing with Verilator

# C++ Configuration
CXX := g++
CXXFLAGS := -std=c++11 -O2 -Wall -Wextra

# Verilator Configuration
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --Wno-PROCASSINIT --timing --trace --cc --exe
VERILATOR_TOP = --top-module fp32_multiplier

# Source files
VERILOG_SOURCES = $(wildcard vsrc/*.v)
CPP_SOURCES = src/main.cpp

# Output directories
OBJ_DIR = obj_dir
VCD_DIR = vcd

# Main target executable
MAIN_TARGET = $(OBJ_DIR)/main

# Default target
all: $(MAIN_TARGET)

# Main FP32 multiplier test build with Verilator
$(MAIN_TARGET): $(VERILOG_SOURCES) $(CPP_SOURCES) $(VCD_DIR)
	@echo "Building FP32 multiplier test with Verilator..."
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_TOP) \
		$(VERILOG_SOURCES) $(CPP_SOURCES) -o main
	@echo "Compiling..."
	cd $(OBJ_DIR) && make -f Vfp32_multiplier.mk
	@echo "Build complete!"

# Run the FP32 multiplier tests
run: $(MAIN_TARGET)
	@echo "Running FP32 multiplier tests..."
	./$(MAIN_TARGET)

# Run tests with verbose output
test-verbose: $(MAIN_TARGET)
	@echo "Running FP32 multiplier tests with verbose output..."
	./$(MAIN_TARGET) 2>&1 | tee test_output.log


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
	@echo "Available targets:"
	@echo "  all         - Build the FP32 multiplier test executable with Verilator"
	@echo "  run         - Build and run the FP32 multiplier tests"
	@echo "  test-verbose- Run FP32 multiplier tests with verbose output and logging"
	@echo "  clean       - Remove all build artifacts"
	@echo "  help        - Show this help message"

.PHONY: all run test-verbose clean help
