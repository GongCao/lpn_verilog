// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjpeg_core.h"
#include "Vjpeg_core__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vjpeg_core::Vjpeg_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vjpeg_core__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_i{vlSymsp->TOP.rst_i}
    , inport_valid_i{vlSymsp->TOP.inport_valid_i}
    , inport_strb_i{vlSymsp->TOP.inport_strb_i}
    , inport_last_i{vlSymsp->TOP.inport_last_i}
    , outport_accept_i{vlSymsp->TOP.outport_accept_i}
    , inport_accept_o{vlSymsp->TOP.inport_accept_o}
    , outport_valid_o{vlSymsp->TOP.outport_valid_o}
    , outport_pixel_r_o{vlSymsp->TOP.outport_pixel_r_o}
    , outport_pixel_g_o{vlSymsp->TOP.outport_pixel_g_o}
    , outport_pixel_b_o{vlSymsp->TOP.outport_pixel_b_o}
    , idle_o{vlSymsp->TOP.idle_o}
    , outport_width_o{vlSymsp->TOP.outport_width_o}
    , outport_height_o{vlSymsp->TOP.outport_height_o}
    , outport_pixel_x_o{vlSymsp->TOP.outport_pixel_x_o}
    , outport_pixel_y_o{vlSymsp->TOP.outport_pixel_y_o}
    , inport_data_i{vlSymsp->TOP.inport_data_i}
    , jpeg_core{vlSymsp->TOP.jpeg_core}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vjpeg_core::Vjpeg_core(const char* _vcname__)
    : Vjpeg_core(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vjpeg_core::~Vjpeg_core() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vjpeg_core___024root___eval_debug_assertions(Vjpeg_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vjpeg_core___024root___eval_static(Vjpeg_core___024root* vlSelf);
void Vjpeg_core___024root___eval_initial(Vjpeg_core___024root* vlSelf);
void Vjpeg_core___024root___eval_settle(Vjpeg_core___024root* vlSelf);
void Vjpeg_core___024root___eval(Vjpeg_core___024root* vlSelf);

void Vjpeg_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjpeg_core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjpeg_core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vjpeg_core___024root___eval_static(&(vlSymsp->TOP));
        Vjpeg_core___024root___eval_initial(&(vlSymsp->TOP));
        Vjpeg_core___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vjpeg_core___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vjpeg_core::eventsPending() { return false; }

uint64_t Vjpeg_core::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vjpeg_core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vjpeg_core___024root___eval_final(Vjpeg_core___024root* vlSelf);

VL_ATTR_COLD void Vjpeg_core::final() {
    Vjpeg_core___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vjpeg_core::hierName() const { return vlSymsp->name(); }
const char* Vjpeg_core::modelName() const { return "Vjpeg_core"; }
unsigned Vjpeg_core::threads() const { return 1; }
