# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vfp32_multiplier.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vfp32_multiplier \
  Vfp32_multiplier___024root__DepSet_h6d0c43e2__0 \
  Vfp32_multiplier___024root__DepSet_hf282a3d0__0 \
  Vfp32_multiplier_adder_nbit__W30__DepSet_hca203fe5__0 \
  Vfp32_multiplier_adder_nbit__W30__DepSet_hca203fe5__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vfp32_multiplier___024root__Slow \
  Vfp32_multiplier___024root__DepSet_h6d0c43e2__0__Slow \
  Vfp32_multiplier___024root__DepSet_hf282a3d0__0__Slow \
  Vfp32_multiplier_adder_nbit__W30__Slow \
  Vfp32_multiplier_adder_nbit__W30__DepSet_h99562fcd__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vfp32_multiplier__Trace__0 \
  Vfp32_multiplier__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vfp32_multiplier__Syms \
  Vfp32_multiplier__Trace__0__Slow \
  Vfp32_multiplier__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_vcd_c \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
