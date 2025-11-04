// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_output.h"

VL_INLINE_OPT void Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__3(Vjpeg_core_jpeg_output* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__3\n"); );
    // Body
    vlSelf->__PVT__id_pop_w = ((IData)(vlSelf->__PVT__output_space_w) 
                               & (0x3fU == (IData)(vlSelf->__PVT__idx_q)));
}
