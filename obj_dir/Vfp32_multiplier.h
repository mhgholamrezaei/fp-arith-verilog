// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VFP32_MULTIPLIER_H_
#define VERILATED_VFP32_MULTIPLIER_H_  // guard

#include "verilated.h"

class Vfp32_multiplier__Syms;
class Vfp32_multiplier___024root;
class VerilatedVcdC;
class Vfp32_multiplier_adder_nbit__W30;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vfp32_multiplier VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vfp32_multiplier__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN(&a,31,0);
    VL_IN(&b,31,0);
    VL_OUT(&result,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder;
    Vfp32_multiplier_adder_nbit__W30* const __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vfp32_multiplier___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vfp32_multiplier(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vfp32_multiplier(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vfp32_multiplier();
  private:
    VL_UNCOPYABLE(Vfp32_multiplier);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
