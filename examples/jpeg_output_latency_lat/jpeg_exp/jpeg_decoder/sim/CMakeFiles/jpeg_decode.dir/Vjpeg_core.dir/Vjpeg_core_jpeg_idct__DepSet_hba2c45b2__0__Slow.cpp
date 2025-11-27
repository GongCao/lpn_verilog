// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_idct.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_idct___stl_sequent__TOP__jpeg_core__u_jpeg_idct__0(Vjpeg_core_jpeg_idct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct___stl_sequent__TOP__jpeg_core__u_jpeg_idct__0\n"); );
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__ptr_conv__Vstatic__out_idx;
    __PVT__genblk2__DOT__u_idct_y__DOT__ptr_conv__Vstatic__out_idx = 0;
    CData/*5:0*/ __Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__Vfuncout;
    __Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx;
    __Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx = 0;
    // Body
    vlSelf->__PVT__u_id_fifo__DOT__accept_o = (8U != (IData)(vlSelf->__PVT__u_id_fifo__DOT__count_q));
    vlSelf->__PVT__u_id_fifo__DOT__valid_o = (0U != (IData)(vlSelf->__PVT__u_id_fifo__DOT__count_q));
    vlSelf->__PVT__outport_data_o = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out
        [(7U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__ptr_q))];
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_0_1 
        = (((- (IData)((1U & (((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val0_q))) 
                               & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read1_q)) 
                              >> 0xfU)))) << 0x10U) 
           | ((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val0_q))) 
              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read1_q)));
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_2_3 
        = (((- (IData)((1U & (((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val1_q))) 
                               & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read1_q)) 
                              >> 0xfU)))) << 0x10U) 
           | ((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val1_q))) 
              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read1_q)));
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_4_5 
        = (((- (IData)((1U & (((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val2_q))) 
                               & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read1_q)) 
                              >> 0xfU)))) << 0x10U) 
           | ((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val2_q))) 
              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read1_q)));
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_6_7 
        = (((- (IData)((1U & (((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val3_q))) 
                               & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read1_q)) 
                              >> 0xfU)))) << 0x10U) 
           | ((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val3_q))) 
              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read1_q)));
    vlSelf->__PVT__idct_x_data_w = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out
        [(7U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__ptr_q))];
    __Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx 
        = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__ptr_q;
    __PVT__genblk2__DOT__u_idct_y__DOT__ptr_conv__Vstatic__out_idx 
        = ((0x20U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
            ? ((0x10U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                ? ((8U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x3fU : 0x37U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x2fU : 0x27U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1fU
                                                    : 0x17U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0xfU
                                                    : 7U)))
                    : ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x3eU : 0x36U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x2eU : 0x26U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1eU
                                                    : 0x16U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0xeU
                                                    : 6U))))
                : ((8U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x3dU : 0x35U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x2dU : 0x25U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1dU
                                                    : 0x15U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0xdU
                                                    : 5U)))
                    : ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x3cU : 0x34U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x2cU : 0x24U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1cU
                                                    : 0x14U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0xcU
                                                    : 4U)))))
            : ((0x10U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                ? ((8U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x3bU : 0x33U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x2bU : 0x23U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1bU
                                                    : 0x13U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0xbU
                                                    : 3U)))
                    : ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x3aU : 0x32U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x2aU : 0x22U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1aU
                                                    : 0x12U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0xaU
                                                    : 2U))))
                : ((8U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x39U : 0x31U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x29U : 0x21U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x19U
                                                    : 0x11U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 9U
                                                    : 1U)))
                    : ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x38U : 0x30U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x28U : 0x20U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x18U
                                                    : 0x10U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 8U
                                                    : 0U))))));
    __Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__Vfuncout 
        = __PVT__genblk2__DOT__u_idct_y__DOT__ptr_conv__Vstatic__out_idx;
    vlSelf->__PVT__outport_idx_o = __Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__Vfuncout;
    vlSelf->__PVT__outport_id_o = vlSelf->__PVT__u_id_fifo__DOT__ram_q
        [vlSelf->__PVT__u_id_fifo__DOT__rd_ptr_q];
    vlSelf->__Vcellinp__u_id_fifo__pop_i = (((IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__valid_q) 
                                             >> 6U) 
                                            & (0x3fU 
                                               == (IData)(vlSelf->__PVT__outport_idx_o)));
}
