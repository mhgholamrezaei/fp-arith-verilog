# FP Arithmetic Verilog
## FP Multiplication and Addition Verilog Implementation

This repository contains lightweight Verilog implementations of IEEE 754 single-precision floating-point (FP) multiplication and addition. The designs perform FP operations in a single clock cycle and handle normalization, rounding, overflow, underflow, and special values such as NaN and infinity.

## Project Structure

```
fp-arith-verilog/
├── fp32_multiplier/          # FP32 Multiplier Module
│   ├── vsrc/
│   │   ├── fp32_multiplier.v
│   │   ├── multiplier_nbit.v
│   │   └── shared/           # Symlink to shared components
│   ├── src/
│   │   ├── fp_multiplier_test.cpp
│   │   ├── fp_multiplier.h
│   │   └── shared/           # Symlink to shared utilities
│   └── test_vectors/
│       └── *.txt
├── fp32_adder/               # FP32 Adder Module
│   ├── vsrc/
│   │   ├── fp32_adder.v
│   │   └── shared/           # Symlink to shared components
│   ├── src/
│   │   ├── fp_adder_test.cpp
│   │   ├── fp_adder.h
│   │   └── shared/           # Symlink to shared utilities
│   └── test_vectors/
│       └── *.txt
├── shared/                   # Common utilities and components
│   ├── src/
│   │   └── fp_utils.h
│   └── vsrc/
│       ├── adder_1bit.v
│       ├── adder_nbit.v
│       └── maj3.v
├── Makefile                  # Multi-target build system
└── scripts/
    └── *.sh
```

### Requirements
- Apptainer >= 1.1.1 (tested with 1.4.1+179-gb49cf5538)
- GTKWave >= 3.3.100 (tested with v3.3.104). 

### Usage

1. **Build Apptainer image**  
   If you have not already built the container image for Verilator, run:
   ```bash
   apptainer build ./apptainer/verilator.sif ./apptainer/verilator.def
   ```

2. **Build and run all tests**  
   This will clean, build, and run the full suite of FP32 tests inside the Apptainer container:
   ```bash
   ./scripts/run_all.sh
   ```

3. **Build individual modules**
   ```bash
   make multiplier    # Build only FP32 multiplier
   make adder         # Build only FP32 adder
   make all           # Build both modules
   ```

4. **Run tests**
   ```bash
   make test-multiplier    # Run multiplier tests
   make test-adder         # Run adder tests
   make test-all           # Run all tests
   ```

5. **View simulation waveform (VCD) with GTKWave**  
   After running tests, view the generated waveform:
   ```bash
   ./scripts/run_wave.sh
   ```

6. **Clean project build and VCD files**  
   To clean up generated files:
   ```bash
   ./scripts/clean.sh
   ```

### Command-Line Options

Both C++ testbenches provide several command-line options to customize test runs:

| Option           | Description                                                        |
|------------------|--------------------------------------------------------------------|
| `-h`, `--help`   | Show help message with usage and options                           |
| `-n <num>`       | Number of random test cases to generate and run (default: 1000)    |
| `-f <file>`      | Use a text file with test vectors                                 |
| `-v`             | Enable verbose output                                              |

#### Examples

- **Run FP32 multiplier with 10 random test cases:**
  ```bash
  ./obj_dir/fp32_multiplier_test -n 10
  ```

- **Run FP32 adder using vectors from a file:**
  ```bash
  ./obj_dir/fp32_adder_test -f fp32_adder/test_vectors/test_vectors_basic.txt
  ```

- **Run FP32 multiplier using edge case vectors:**
  ```bash
  ./obj_dir/fp32_multiplier_test -f fp32_multiplier/test_vectors/test_vectors_all.txt
  ```

Use `./obj_dir/fp32_multiplier_test -h` or `./obj_dir/fp32_adder_test -h` for the full list of options and usage.

## Modules

### FP32 Multiplier
- **Location**: `fp32_multiplier/`
- **Features**: Single-cycle FP multiplication with full IEEE 754 compliance
- **Test vectors**: Comprehensive edge case testing including NaN, infinity, zero, overflow, underflow

### FP32 Adder
- **Location**: `fp32_adder/`
- **Features**: Single-cycle FP addition/subtraction with full IEEE 754 compliance
- **Test vectors**: Basic arithmetic and edge case testing

### Shared Components
- **Location**: `shared/`
- **Components**: Common Verilog modules (adders, majority gate) and C++ utilities
- **Reusability**: Both modules use shared components for consistency

## TODO 
- [x] Update the top interface. Remove the synchronous interface. 
- [x] Add a new sub-project for fp32 adder.
- [x] Implement fp32 adder tester.
- [ ] Add more comprehensive test vectors for fp32_adder
- [ ] Implement fp32_divider module
- [ ] Add performance benchmarking
- [ ] Add synthesis scripts for FPGA targets