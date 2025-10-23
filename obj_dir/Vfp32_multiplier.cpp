// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfp32_multiplier__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfp32_multiplier::Vfp32_multiplier(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfp32_multiplier__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , result{vlSymsp->TOP.result}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__1__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__2__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__3__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__4__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__5__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__6__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__7__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__8__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__9__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__10__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__11__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__12__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__13__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__14__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__15__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__16__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__17__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__18__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__19__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__20__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__21__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__22__KET____DOT__u_adder}
    , __PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder{vlSymsp->TOP.__PVT__fp32_multiplier__DOT__u_multiplier__DOT__multiplier_chain__BRA__23__KET____DOT__u_adder}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vfp32_multiplier::Vfp32_multiplier(const char* _vcname__)
    : Vfp32_multiplier(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfp32_multiplier::~Vfp32_multiplier() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfp32_multiplier___024root___eval_debug_assertions(Vfp32_multiplier___024root* vlSelf);
#endif  // VL_DEBUG
void Vfp32_multiplier___024root___eval_static(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier___024root___eval_initial(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier___024root___eval_settle(Vfp32_multiplier___024root* vlSelf);
void Vfp32_multiplier___024root___eval(Vfp32_multiplier___024root* vlSelf);

void Vfp32_multiplier::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfp32_multiplier::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfp32_multiplier___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfp32_multiplier___024root___eval_static(&(vlSymsp->TOP));
        Vfp32_multiplier___024root___eval_initial(&(vlSymsp->TOP));
        Vfp32_multiplier___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfp32_multiplier___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfp32_multiplier::eventsPending() { return false; }

uint64_t Vfp32_multiplier::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfp32_multiplier::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfp32_multiplier___024root___eval_final(Vfp32_multiplier___024root* vlSelf);

VL_ATTR_COLD void Vfp32_multiplier::final() {
    Vfp32_multiplier___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfp32_multiplier::hierName() const { return vlSymsp->name(); }
const char* Vfp32_multiplier::modelName() const { return "Vfp32_multiplier"; }
unsigned Vfp32_multiplier::threads() const { return 1; }
void Vfp32_multiplier::prepareClone() const { contextp()->prepareClone(); }
void Vfp32_multiplier::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vfp32_multiplier::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfp32_multiplier___024root__trace_decl_types(VerilatedVcd* tracep);

void Vfp32_multiplier___024root__trace_init_top(Vfp32_multiplier___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfp32_multiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfp32_multiplier___024root*>(voidSelf);
    Vfp32_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vfp32_multiplier___024root__trace_decl_types(tracep);
    Vfp32_multiplier___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfp32_multiplier___024root__trace_register(Vfp32_multiplier___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfp32_multiplier::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfp32_multiplier::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfp32_multiplier___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
