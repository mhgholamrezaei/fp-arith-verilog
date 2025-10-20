# FP Arithmetic Verilog
## FP Multiplicatoin Verilog Implementation

This repository contains a lightweight Verilog implementation of IEEE 754 single-precision floating-point (FP) multiplication. The design performs FP multiplication in a single clock cycle and handles normalization, rounding, overflow, underflow, and special values such as NaN and infinity.  


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
   This will clean, build, and run the full suite of FP32 multiplier tests inside the Apptainer container:
   ```bash
   ./scripts/run_all.sh
   ```

3. **View simulation waveform (VCD) with GTKWave**  
   After running tests, view the generated waveform:
   ```bash
   ./scripts/run_wave.sh
   ```

4. **Clean project build and VCD files**  
   To clean up generated files:
   ```bash
   ./scripts/clean.sh
   ```


### Command-Line Options

The C++ testbench (`src/main.cpp`) provides several command-line options to customize test runs:

| Option           | Description                                                        |
|------------------|--------------------------------------------------------------------|
| `-h`, `--help`   | Show help message with usage and options                           |
| `-n <num>`       | Number of random test cases to generate and run (default: 1000)    |
| `-f <file>`      | Use a text file with test vectors (see `test_vectors/test_vectors_all.txt`) |
| `-s <seed>`      | Seed the random number generator for reproducible results          |
| `-v`             | Enable verbose output                                              |

#### Examples

- **Run with 10 random test cases:**
  ```bash
  ./fp32_multiplier_test -n 10
  ```

- **Run using vectors from a file (e.g., all edge cases):**
  ```bash
  ./fp32_multiplier_test -f test_vectors/test_vectors_all.txt
  ```

Use `./fp32_multiplier_test -h` for the full list of options and usage.


