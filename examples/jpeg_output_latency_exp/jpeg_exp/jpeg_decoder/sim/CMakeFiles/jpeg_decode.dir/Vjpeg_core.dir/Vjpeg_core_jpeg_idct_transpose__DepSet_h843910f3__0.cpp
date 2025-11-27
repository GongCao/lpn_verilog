// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_idct_transpose.h"

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__2(Vjpeg_core_jpeg_idct_transpose* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__2\n"); );
    // Body
    vlSelf->__Vcellinp__u_ram0__addr1_i = (((IData)(vlSelf->__PVT__block_rd_q) 
                                            << 4U) 
                                           | (IData)(vlSelf->__PVT__rd_addr_q));
}
