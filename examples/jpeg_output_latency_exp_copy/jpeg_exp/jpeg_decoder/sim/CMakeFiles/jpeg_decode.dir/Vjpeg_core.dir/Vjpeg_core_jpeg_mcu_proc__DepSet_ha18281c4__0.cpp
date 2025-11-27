// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_mcu_proc.h"

bool Vjpeg_core_jpeg_mcu_proc::get_valid() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::get_valid\n"); );
    VL_OUT8(get_valid__Vfuncrtn,0,0);
    // Body
    get_valid__Vfuncrtn = ((IData)(this->__PVT__outport_valid_o) 
                           & (3U != (IData)(this->__PVT__u_id__DOT__block_type_q)));
    // Final
    return (get_valid__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_mcu_proc::get_sample_idx() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::get_sample_idx\n"); );
    VL_OUT8(get_sample_idx__Vfuncrtn,5,0);
    // Body
    get_sample_idx__Vfuncrtn = (0x3fU & (IData)(this->__PVT__coeff_idx_q));
    // Final
    return (get_sample_idx__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_mcu_proc::get_sample() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::get_sample\n"); );
    VL_OUT16(get_sample__Vfuncrtn,15,0);
    // Body
    get_sample__Vfuncrtn = this->__PVT__coeff_q;
    // Final
    return (get_sample__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_mcu_proc::get_bitbuffer_pop() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::get_bitbuffer_pop\n"); );
    VL_OUT8(get_bitbuffer_pop__Vfuncrtn,5,0);
    // Body
    get_bitbuffer_pop__Vfuncrtn = this->__PVT__pop_bits_r;
    // Final
    return (get_bitbuffer_pop__Vfuncrtn);
}

VL_INLINE_OPT void Vjpeg_core_jpeg_mcu_proc___nba_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__1(Vjpeg_core_jpeg_mcu_proc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc___nba_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__1\n"); );
    // Body
    vlSelf->__PVT__lookup_table_r = ((IData)(vlSelf->__PVT__first_q)
                                      ? ((0U == (IData)(vlSelf->__PVT__u_id__DOT__block_type_q))
                                          ? 0U : 2U)
                                      : ((0U == (IData)(vlSelf->__PVT__u_id__DOT__block_type_q))
                                          ? 1U : 3U));
}
