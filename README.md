# FP Arithmetic Verilog
## FP multiplicatoin and addition Verilog implementations

### Requirements
- Apptainer >= 1.1.1 (tested with 1.4.1+179-gb49cf5538)
- GTKWave >= 3.3.100 (tested with v3.3.104). 

### Usage

1. **Build Apptainer image**  
   If you have not already built the container image for Verilator, run:
   ```bash
   apptainer build ./apptainer/verilator.sif ./apptainer/verilator.def
   ```

2. **Build**  
   This will clean and build the full suite of FP32 adder (multiplier) tests inside the Apptainer container:
   ```bash
   cd fp32_adder # or fp32_multiplier
   ./scripts/run_all.sh
   ```
3. **Run**  
   This will run with random test-cases. You can provide custom test cases with `-f` option. 
   ```bash 
   ./fp32_adder_test -n <number-of-random-test-caseS>
   ```

4. **View simulation waveform (VCD) with GTKWave**  
   After running tests, view the generated waveform:
   ```bash
   ./scripts/run_wave.sh
   ```

5. **Clean project build and VCD files**  
   To clean up generated files:
   ```bash
   ./scripts/clean.sh
   ```

# TODO 
- Add to PIMsynth
- Support fp8 and fp16

