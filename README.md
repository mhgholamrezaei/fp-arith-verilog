# FP Arithmetic Verilog
## FP Multiplicatoin Verilog Implementation

This repository contains a lightweight Verilog implementation of IEEE 754 single-precision floating-point (FP) multiplication. The design performs FP multiplication in a single clock cycle and handles normalization, rounding, overflow, underflow, and special values such as NaN and infinity.  


### Requirements
- Apptainer >= 1.1.1 (tested with 1.4.1+179-gb49cf5538)
- GTKWave >= 3.3.100 (tested with v3.3.104). 

### Usage
- Build `apptainer.sif`:
  ```bash 
  apptainer build ./apptainer/verilator.sif ./apptainer/verilator.def
  ```
- Make and run all simulations:
  ```bash
  ./scripts/run_all.sh
  ```
- View wave: 
  ```bash 
  ./scripts/run_wave.sh
  ```
- Clean build and VCD files:
  ```bash
  ./scripts/clean.sh
  ```

