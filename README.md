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

# TODO 
- Goal: implement fp32 addition
- implement fp32 adder for the general case 
