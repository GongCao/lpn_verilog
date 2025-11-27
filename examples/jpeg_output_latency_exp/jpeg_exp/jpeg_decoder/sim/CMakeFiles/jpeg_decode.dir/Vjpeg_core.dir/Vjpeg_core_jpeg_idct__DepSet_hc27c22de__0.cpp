// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_idct.h"

bool Vjpeg_core_jpeg_idct::get_valid() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct::get_valid\n"); );
    VL_OUT8(get_valid__Vfuncrtn,0,0);
    // Body
    get_valid__Vfuncrtn = (1U & ((IData)(this->__PVT__genblk2__DOT__u_idct_y__DOT__valid_q) 
                                 >> 6U));
    // Final
    return (get_valid__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_idct::get_sample_idx() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct::get_sample_idx\n"); );
    VL_OUT8(get_sample_idx__Vfuncrtn,5,0);
    // Body
    get_sample_idx__Vfuncrtn = this->__PVT__outport_idx_o;
    // Final
    return (get_sample_idx__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_idct::get_sample() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct::get_sample\n"); );
    VL_OUT(get_sample__Vfuncrtn,31,0);
    // Body
    get_sample__Vfuncrtn = this->__PVT__outport_data_o;
    // Final
    return (get_sample__Vfuncrtn);
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct___nba_sequent__TOP__jpeg_core__u_jpeg_idct__2(Vjpeg_core_jpeg_idct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct___nba_sequent__TOP__jpeg_core__u_jpeg_idct__2\n"); );
    // Body
    vlSelf->__Vcellinp__u_id_fifo__pop_i = (((IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__valid_q) 
                                             >> 6U) 
                                            & (0x3fU 
                                               == (IData)(vlSelf->__PVT__outport_idx_o)));
}
