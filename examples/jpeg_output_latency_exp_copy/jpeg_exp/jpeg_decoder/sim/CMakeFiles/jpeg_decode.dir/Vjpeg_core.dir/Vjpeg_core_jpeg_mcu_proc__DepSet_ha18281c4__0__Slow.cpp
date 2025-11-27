// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_mcu_proc.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_mcu_proc___stl_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__0(Vjpeg_core_jpeg_mcu_proc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc___stl_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__0\n"); );
    // Init
    SData/*15:0*/ __PVT__decode_number__Vstatic__code;
    __PVT__decode_number__Vstatic__code = 0;
    SData/*15:0*/ __Vfunc_decode_number__0__Vfuncout;
    __Vfunc_decode_number__0__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_decode_number__0__w;
    __Vfunc_decode_number__0__w = 0;
    CData/*4:0*/ __Vfunc_decode_number__0__bits;
    __Vfunc_decode_number__0__bits = 0;
    SData/*15:0*/ __Vfunc_decode_number__1__Vfuncout;
    __Vfunc_decode_number__1__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_decode_number__1__w;
    __Vfunc_decode_number__1__w = 0;
    CData/*4:0*/ __Vfunc_decode_number__1__bits;
    __Vfunc_decode_number__1__bits = 0;
    // Body
    vlSelf->__PVT__u_id__DOT__block_x_next_w = (0xffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_id__DOT__block_x_q)));
    vlSelf->__PVT__lookup_table_r = ((IData)(vlSelf->__PVT__first_q)
                                      ? ((0U == (IData)(vlSelf->__PVT__u_id__DOT__block_type_q))
                                          ? 0U : 2U)
                                      : ((0U == (IData)(vlSelf->__PVT__u_id__DOT__block_type_q))
                                          ? 1U : 3U));
    vlSelf->__PVT__outport_valid_o = ((IData)(vlSelf->__PVT__push_q) 
                                      & (0x40U > (IData)(vlSelf->__PVT__coeff_idx_q)));
    vlSelf->__PVT__pop_bits_r = 0U;
    if ((3U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__pop_bits_r = (0x3fU & ((0U == (IData)(vlSelf->__PVT__coeff_idx_q))
                                               ? ((IData)(vlSelf->__PVT__lookup_width_q) 
                                                  + 
                                                  (0xfU 
                                                   & (IData)(vlSelf->__PVT__code_q)))
                                               : ((
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__code_q)) 
                                                   | (0xf0U 
                                                      == (IData)(vlSelf->__PVT__code_q)))
                                                   ? (IData)(vlSelf->__PVT__lookup_width_q)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__lookup_width_q) 
                                                   + 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__code_q))))));
    }
    vlSelf->__PVT__outport_id_o = (((IData)(vlSelf->__PVT__u_id__DOT__block_type_q) 
                                    << 0x1eU) | ((0x3fff0000U 
                                                  & ((IData)(vlSelf->__PVT__u_id__DOT__block_y_q) 
                                                     << 0x10U)) 
                                                 | (IData)(vlSelf->__PVT__u_id__DOT__block_x_q)));
    __Vfunc_decode_number__1__bits = (0xfU & (IData)(vlSelf->__PVT__code_q));
    if ((0xfU >= ((IData)(0x10U) - (0xfU & (IData)(vlSelf->__PVT__code_q))))) {
        __Vfunc_decode_number__1__w = (0xffffU & ((IData)(vlSelf->__PVT__input_data_q) 
                                                  >> 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__code_q)))));
        __Vfunc_decode_number__0__w = (0xffffU & ((IData)(vlSelf->__PVT__input_data_q) 
                                                  >> 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__code_q)))));
    } else {
        __Vfunc_decode_number__1__w = 0U;
        __Vfunc_decode_number__0__w = 0U;
    }
    __PVT__decode_number__Vstatic__code = __Vfunc_decode_number__1__w;
    if (((0U == ((IData)(__PVT__decode_number__Vstatic__code) 
                 & ((IData)(1U) << (0x1fU & ((IData)(__Vfunc_decode_number__1__bits) 
                                             - (IData)(1U)))))) 
         & (0U != (IData)(__Vfunc_decode_number__1__bits)))) {
        __PVT__decode_number__Vstatic__code = (0xffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (VL_EXTENDS_II(16,16, (IData)(__PVT__decode_number__Vstatic__code)) 
                                                   | ((IData)(0xffffffffU) 
                                                      << (IData)(__Vfunc_decode_number__1__bits)))));
    }
    __Vfunc_decode_number__1__Vfuncout = __PVT__decode_number__Vstatic__code;
    __Vfunc_decode_number__0__bits = (0xfU & (IData)(vlSelf->__PVT__code_q));
    __PVT__decode_number__Vstatic__code = __Vfunc_decode_number__0__w;
    if (((0U == ((IData)(__PVT__decode_number__Vstatic__code) 
                 & ((IData)(1U) << (0x1fU & ((IData)(__Vfunc_decode_number__0__bits) 
                                             - (IData)(1U)))))) 
         & (0U != (IData)(__Vfunc_decode_number__0__bits)))) {
        __PVT__decode_number__Vstatic__code = (0xffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (VL_EXTENDS_II(16,16, (IData)(__PVT__decode_number__Vstatic__code)) 
                                                   | ((IData)(0xffffffffU) 
                                                      << (IData)(__Vfunc_decode_number__0__bits)))));
    }
    __Vfunc_decode_number__0__Vfuncout = __PVT__decode_number__Vstatic__code;
    vlSelf->__PVT__coeff_r = (0xffffU & ((0U == (IData)(vlSelf->__PVT__coeff_idx_q))
                                          ? ((IData)(__Vfunc_decode_number__0__Vfuncout) 
                                             + vlSelf->__PVT__prev_dc_coeff_q
                                             [vlSelf->__PVT__u_id__DOT__block_type_q])
                                          : (IData)(__Vfunc_decode_number__1__Vfuncout)));
}

VL_ATTR_COLD void Vjpeg_core_jpeg_mcu_proc___ctor_var_reset(Vjpeg_core_jpeg_mcu_proc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_start_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_end_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_width_i = VL_RAND_RESET_I(16);
    vlSelf->__PVT__img_height_i = VL_RAND_RESET_I(16);
    vlSelf->__PVT__img_mode_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inport_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inport_last_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lookup_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lookup_width_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__lookup_value_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__outport_blk_space_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_pop_o = VL_RAND_RESET_I(6);
    vlSelf->__PVT__lookup_req_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lookup_table_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__lookup_input_o = VL_RAND_RESET_I(16);
    vlSelf->__PVT__outport_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_data_o = VL_RAND_RESET_I(16);
    vlSelf->__PVT__outport_idx_o = VL_RAND_RESET_I(6);
    vlSelf->__PVT__outport_id_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__outport_eob_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__start_block_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__state_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__next_state_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__coeff_idx_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__first_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__code_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__lookup_width_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__input_data_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__pop_bits_r = VL_RAND_RESET_I(6);
    vlSelf->__PVT__lookup_table_r = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__prev_dc_coeff_q[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__dc_coeff_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__coeff_r = VL_RAND_RESET_I(16);
    vlSelf->__PVT__coeff_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__push_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_id__DOT__block_type_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_id__DOT__type_idx_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_id__DOT__block_x_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_id__DOT__block_y_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_id__DOT__x_idx_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_id__DOT__y_idx_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_id__DOT__block_x_next_w = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_id__DOT__end_of_image_q = VL_RAND_RESET_I(1);
}
