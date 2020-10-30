// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vtop::traceChgThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceChgThis__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
			     & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)) 
				& (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)))));
	vcdp->chgBit  (c+2,(vlTOPp->top__DOT__control__DOT__control_decode_io_branch));
	vcdp->chgBit  (c+3,(((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
			     & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type))));
	vcdp->chgBit  (c+4,(((0x33U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
			     | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type) 
				| ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)) 
				   & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
				      & ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type) 
					 | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type) 
					    | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type) 
					       | (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type))))))))));
	vcdp->chgBus  (c+5,(((0x33U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))
			      ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)
				       ? 4U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)
					        ? 5U
					        : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)
						    ? 2U
						    : 
						   ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type)
						     ? 1U
						     : 
						    ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type)
						       ? 3U
						       : 
						      ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type)
						        ? 6U
						        : 7U))))))))),3);
	vcdp->chgBus  (c+6,(((0x33U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))
			      ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)
				       ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)
					        ? 0U
					        : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type)
						     ? 0U
						     : 
						    ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type)
						      ? 2U
						      : 
						     ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type)
						       ? 2U
						       : 
						      ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type)
						        ? 3U
						        : 0U))))))))),2);
	vcdp->chgBit  (c+7,(((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
			     & ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type) 
				| ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type) 
				   | ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
				      & ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type) 
					 | ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type)) 
					    & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type)) 
					       & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type))))))))));
	vcdp->chgBus  (c+8,(vlTOPp->top__DOT__control__DOT__control_decode_io_extend_select),2);
	vcdp->chgBus  (c+9,(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select),2);
	vcdp->chgBus  (c+10,(vlTOPp->top__DOT__register_file_io_write_data),32);
	vcdp->chgBus  (c+11,(vlTOPp->top__DOT__register_file_io_rs1),32);
	vcdp->chgBus  (c+12,(vlTOPp->top__DOT__register_file_io_rs2),32);
	vcdp->chgBus  (c+13,(vlTOPp->top__DOT__alu_io_operand_a),32);
	vcdp->chgBus  (c+14,(vlTOPp->top__DOT__alu_io_operand_b),32);
	vcdp->chgBus  (c+15,(vlTOPp->top__DOT__alu_control_io_output),5);
	vcdp->chgBus  (c+16,((IData)(vlTOPp->top__DOT__alu__DOT___GEN_21)),32);
	vcdp->chgBus  (c+17,((vlTOPp->top__DOT__immediate_generation__DOT___T_41 
			      + vlTOPp->top__DOT__IF_ID__DOT__pc_register)),32);
	vcdp->chgBus  (c+18,((vlTOPp->top__DOT__immediate_generation__DOT___T_62 
			      + vlTOPp->top__DOT__IF_ID__DOT__pc_register)),32);
	vcdp->chgBus  (c+19,(vlTOPp->top__DOT__immediate_generation__DOT__i_immediate_32),32);
	vcdp->chgBus  (c+20,(vlTOPp->top__DOT__jalr_io_input_a),32);
	vcdp->chgBus  (c+21,((0xfffffffeU & (vlTOPp->top__DOT__jalr_io_input_a 
					     + vlTOPp->top__DOT__immediate_generation__DOT__i_immediate_32))),32);
	vcdp->chgBus  (c+22,(((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
			       ? vlTOPp->top__DOT__IF_ID__DOT__pc4_register
			       : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
				   ? ((IData)(vlTOPp->top__DOT___T_18)
				       ? (vlTOPp->top__DOT__immediate_generation__DOT___T_41 
					  + vlTOPp->top__DOT__IF_ID__DOT__pc_register)
				       : ((IData)(4U) 
					  + vlTOPp->top__DOT__pc__DOT__register))
				   : ((2U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
				       ? (vlTOPp->top__DOT__immediate_generation__DOT___T_62 
					  + vlTOPp->top__DOT__IF_ID__DOT__pc_register)
				       : ((3U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
					   ? (0xfffffffeU 
					      & (vlTOPp->top__DOT__jalr_io_input_a 
						 + vlTOPp->top__DOT__immediate_generation__DOT__i_immediate_32))
					   : ((IData)(4U) 
					      + vlTOPp->top__DOT__pc__DOT__register)))))),32);
	vcdp->chgBus  (c+23,(vlTOPp->top__DOT__instruction_memory__DOT__memory___05FT_11_data),32);
	vcdp->chgBus  (c+24,(vlTOPp->top__DOT__data_memory_io_memory_out),32);
	vcdp->chgBus  (c+25,(((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
			       ? vlTOPp->top__DOT___GEN_1
			       : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
				   ? ((IData)(vlTOPp->top__DOT___T_18)
				       ? 0U : vlTOPp->top__DOT___GEN_1)
				   : ((2U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
				       ? 0U : ((3U 
						== (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
					        ? 0U
					        : vlTOPp->top__DOT___GEN_1))))),32);
	vcdp->chgBus  (c+26,(((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
			       ? ((IData)(4U) + vlTOPp->top__DOT__pc__DOT__register)
			       : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
				   ? ((IData)(vlTOPp->top__DOT___T_18)
				       ? 0U : ((IData)(4U) 
					       + vlTOPp->top__DOT__pc__DOT__register))
				   : ((2U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
				       ? 0U : ((3U 
						== (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
					        ? 0U
					        : ((IData)(4U) 
						   + vlTOPp->top__DOT__pc__DOT__register)))))),32);
	vcdp->chgBus  (c+27,(((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
			       ? vlTOPp->top__DOT___GEN_0
			       : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
				   ? ((IData)(vlTOPp->top__DOT___T_18)
				       ? 0U : vlTOPp->top__DOT___GEN_0)
				   : ((2U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
				       ? 0U : ((3U 
						== (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
					        ? 0U
					        : vlTOPp->top__DOT___GEN_0))))),32);
	vcdp->chgBus  (c+28,(((0U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_extend_select))
			       ? vlTOPp->top__DOT__immediate_generation__DOT__i_immediate_32
			       : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_extend_select))
				   ? ((((0x80000000U 
					 & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
					 ? 0xfffffU
					 : 0U) << 0xcU) 
				      | ((0xfe0U & 
					  (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					   >> 0x14U)) 
					 | (0x1fU & 
					    (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					     >> 7U))))
				   : ((2U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_extend_select))
				       ? (IData)((VL_ULL(0x7fffffffffff) 
						  & ((QData)((IData)(
								     ((((0x80000000U 
									 & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
									 ? 0xfffU
									 : 0U) 
								       << 0x14U) 
								      | (0xfffffU 
									 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									    >> 0xcU))))) 
						     << 0xcU)))
				       : 0U)))),32);
	vcdp->chgBit  (c+29,(((~ (IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)) 
			      & ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
				 & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)) 
				    & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type))))));
	vcdp->chgBit  (c+30,(((~ (IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)) 
			      & ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
				 & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)))));
	vcdp->chgBit  (c+31,(((~ (IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)) 
			      & ((0x33U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
				 | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type) 
				    | ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)) 
				       & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
					  & ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type) 
					     | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type) 
						| ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type) 
						   | (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type)))))))))));
	vcdp->chgBus  (c+32,(((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
			       ? 0U : ((0x33U == (0x7fU 
						  & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))
				        ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)
						 ? 4U
						 : 
						((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)
						  ? 5U
						  : 
						 ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)
						   ? 2U
						   : 
						  ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type)
						    ? 1U
						    : 
						   ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type)
						     ? 3U
						     : 
						    ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type)
						       ? 6U
						       : 7U)))))))))),3);
	vcdp->chgBus  (c+33,(((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
			       ? 0U : ((0x33U == (0x7fU 
						  & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))
				        ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)
						 ? 0U
						 : 
						((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)
						  ? 0U
						  : 
						 ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)
						   ? 0U
						   : 
						  ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type)
						     ? 2U
						     : 
						    ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type)
						      ? 2U
						      : 
						     ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type)
						       ? 3U
						       : 0U)))))))))),2);
	vcdp->chgBit  (c+34,(((~ (IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)) 
			      & ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
				 & ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type) 
				    | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type) 
				       | ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
					  & ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type) 
					     | ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type)) 
						& ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type)) 
						   & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type)))))))))));
	vcdp->chgBus  (c+35,(vlTOPp->top__DOT___GEN_68),32);
	vcdp->chgBus  (c+36,(vlTOPp->top__DOT__forward_unit__DOT___GEN_8),2);
	vcdp->chgBus  (c+37,(vlTOPp->top__DOT__forward_unit__DOT___GEN_9),2);
	vcdp->chgBit  (c+38,(vlTOPp->top__DOT__hazard_detection_io_pc_forward));
	vcdp->chgBus  (c+39,(vlTOPp->top__DOT__branch_logic_io_rs1),32);
	vcdp->chgBus  (c+40,(vlTOPp->top__DOT__branch_logic_io_rs2),32);
	vcdp->chgBit  (c+41,(((0U == (7U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					    >> 0xcU)))
			       ? (vlTOPp->top__DOT__branch_logic_io_rs1 
				  == vlTOPp->top__DOT__branch_logic_io_rs2)
			       : ((1U == (7U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						>> 0xcU)))
				   ? (vlTOPp->top__DOT__branch_logic_io_rs1 
				      != vlTOPp->top__DOT__branch_logic_io_rs2)
				   : ((4U == (7U & 
					      (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					       >> 0xcU)))
				       ? VL_LTS_III(1,32,32, vlTOPp->top__DOT__branch_logic_io_rs1, vlTOPp->top__DOT__branch_logic_io_rs2)
				       : ((5U == (7U 
						  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						     >> 0xcU)))
					   ? VL_GTES_III(1,32,32, vlTOPp->top__DOT__branch_logic_io_rs1, vlTOPp->top__DOT__branch_logic_io_rs2)
					   : ((6U == 
					       (7U 
						& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						   >> 0xcU)))
					       ? (vlTOPp->top__DOT__branch_logic_io_rs1 
						  < vlTOPp->top__DOT__branch_logic_io_rs2)
					       : ((7U 
						   == 
						   (7U 
						    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						       >> 0xcU))) 
						  & (vlTOPp->top__DOT__branch_logic_io_rs1 
						     >= vlTOPp->top__DOT__branch_logic_io_rs2)))))))));
	vcdp->chgBus  (c+42,(vlTOPp->top__DOT__branch_forward_io_forward_rs1),4);
	vcdp->chgBus  (c+43,(vlTOPp->top__DOT__branch_forward__DOT___GEN_34),4);
	vcdp->chgBit  (c+44,(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type));
	vcdp->chgBit  (c+45,(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type));
	vcdp->chgBit  (c+46,(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type));
	vcdp->chgBit  (c+47,(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type));
	vcdp->chgBit  (c+48,(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type));
	vcdp->chgBit  (c+49,(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type));
	vcdp->chgBit  (c+50,(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type));
	vcdp->chgBus  (c+51,(vlTOPp->top__DOT__immediate_generation__DOT__i_immediate_32),32);
	vcdp->chgBus  (c+52,(vlTOPp->top__DOT__immediate_generation__DOT___T_41),32);
	vcdp->chgBus  (c+53,(vlTOPp->top__DOT__immediate_generation__DOT___T_62),32);
	vcdp->chgBus  (c+54,((vlTOPp->top__DOT__jalr_io_input_a 
			      + vlTOPp->top__DOT__immediate_generation__DOT__i_immediate_32)),32);
	vcdp->chgBus  (c+55,(vlTOPp->top__DOT__data_memory__DOT__memory___05FT_23_data),32);
	vcdp->chgBus  (c+56,(vlTOPp->top__DOT__data_memory__DOT__memory___05FT_24_data),32);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+57,((0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)),7);
	vcdp->chgBit  (c+58,(vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite));
	vcdp->chgBus  (c+59,(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select),5);
	vcdp->chgBus  (c+60,((0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+61,((0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
				       >> 0x14U))),5);
	vcdp->chgBus  (c+62,(vlTOPp->top__DOT__ID_EX__DOT__control_aluop_register),3);
	vcdp->chgBit  (c+63,(vlTOPp->top__DOT__ID_EX__DOT__func7_register));
	vcdp->chgBus  (c+64,(vlTOPp->top__DOT__ID_EX__DOT__func3_register),3);
	vcdp->chgBus  (c+65,(vlTOPp->top__DOT__IF_ID__DOT__instruction_register),32);
	vcdp->chgBus  (c+66,(vlTOPp->top__DOT__IF_ID__DOT__pc_register),32);
	vcdp->chgBus  (c+67,(((((0x80000000U & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
				 ? 0xfffffU : 0U) << 0xcU) 
			      | ((0xfe0U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					    >> 0x14U)) 
				 | (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					     >> 7U))))),32);
	vcdp->chgBus  (c+68,((IData)((VL_ULL(0x7fffffffffff) 
				      & ((QData)((IData)(
							 ((((0x80000000U 
							     & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
							     ? 0xfffU
							     : 0U) 
							   << 0x14U) 
							  | (0xfffffU 
							     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								>> 0xcU))))) 
					 << 0xcU)))),32);
	vcdp->chgBus  (c+69,(vlTOPp->top__DOT__pc__DOT__register),32);
	vcdp->chgBus  (c+70,(((IData)(4U) + vlTOPp->top__DOT__pc__DOT__register)),32);
	vcdp->chgBus  (c+71,((0x3ffU & (vlTOPp->top__DOT__pc__DOT__register 
					>> 2U))),10);
	vcdp->chgBit  (c+72,(vlTOPp->top__DOT__EX_MEM__DOT__register_memorywrite));
	vcdp->chgBit  (c+73,(vlTOPp->top__DOT__EX_MEM__DOT__register_memoryread));
	vcdp->chgBus  (c+74,((0x3ffU & (vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out 
					>> 2U))),10);
	vcdp->chgBus  (c+75,(vlTOPp->top__DOT__EX_MEM__DOT__register_rs2),32);
	vcdp->chgBus  (c+76,(vlTOPp->top__DOT__IF_ID__DOT__pc4_register),32);
	vcdp->chgBus  (c+77,((0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
				       >> 7U))),5);
	vcdp->chgBus  (c+78,((7U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
				    >> 0xcU))),3);
	vcdp->chgBit  (c+79,((1U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
				    >> 0x1eU))));
	vcdp->chgBus  (c+80,(vlTOPp->top__DOT__ID_EX__DOT__pc4_register),32);
	vcdp->chgBus  (c+81,(vlTOPp->top__DOT__ID_EX__DOT__rs1_register),32);
	vcdp->chgBus  (c+82,(vlTOPp->top__DOT__ID_EX__DOT__rs2_register),32);
	vcdp->chgBus  (c+83,(vlTOPp->top__DOT__ID_EX__DOT__immediate_register),32);
	vcdp->chgBus  (c+84,(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register),5);
	vcdp->chgBus  (c+85,(vlTOPp->top__DOT__ID_EX__DOT__rs1_select_register),5);
	vcdp->chgBus  (c+86,(vlTOPp->top__DOT__ID_EX__DOT__rs2_select_register),5);
	vcdp->chgBit  (c+87,(vlTOPp->top__DOT__ID_EX__DOT__control_memorywrite_register));
	vcdp->chgBit  (c+88,(vlTOPp->top__DOT__ID_EX__DOT__control_memoryread_register));
	vcdp->chgBit  (c+89,(vlTOPp->top__DOT__ID_EX__DOT__control_registerwrite_register));
	vcdp->chgBit  (c+90,(vlTOPp->top__DOT__ID_EX__DOT__control_memorytoregister_register));
	vcdp->chgBus  (c+91,(vlTOPp->top__DOT__ID_EX__DOT__control_opa_select_register),2);
	vcdp->chgBit  (c+92,(vlTOPp->top__DOT__ID_EX__DOT__control_opb_select_register));
	vcdp->chgBit  (c+93,(vlTOPp->top__DOT__EX_MEM__DOT__register_registerwrite));
	vcdp->chgBit  (c+94,(vlTOPp->top__DOT__EX_MEM__DOT__register_memorytoregister));
	vcdp->chgBus  (c+95,(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select),5);
	vcdp->chgBus  (c+96,(vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out),32);
	vcdp->chgBit  (c+97,(vlTOPp->top__DOT__MEM_WB__DOT__register_memorytoregister));
	vcdp->chgBit  (c+98,(vlTOPp->top__DOT__MEM_WB__DOT__register_memoryread));
	vcdp->chgBus  (c+99,(vlTOPp->top__DOT__MEM_WB__DOT__register_datamemory_data),32);
	vcdp->chgBus  (c+100,(vlTOPp->top__DOT__MEM_WB__DOT__register_alu),32);
	vcdp->chgBit  (c+101,((0x33U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))));
	vcdp->chgBus  (c+102,(vlTOPp->top__DOT__register_file__DOT__registers_0),32);
	vcdp->chgBus  (c+103,(vlTOPp->top__DOT__register_file__DOT__registers_1),32);
	vcdp->chgBus  (c+104,(vlTOPp->top__DOT__register_file__DOT__registers_2),32);
	vcdp->chgBus  (c+105,(vlTOPp->top__DOT__register_file__DOT__registers_3),32);
	vcdp->chgBus  (c+106,(vlTOPp->top__DOT__register_file__DOT__registers_4),32);
	vcdp->chgBus  (c+107,(vlTOPp->top__DOT__register_file__DOT__registers_5),32);
	vcdp->chgBus  (c+108,(vlTOPp->top__DOT__register_file__DOT__registers_6),32);
	vcdp->chgBus  (c+109,(vlTOPp->top__DOT__register_file__DOT__registers_7),32);
	vcdp->chgBus  (c+110,(vlTOPp->top__DOT__register_file__DOT__registers_8),32);
	vcdp->chgBus  (c+111,(vlTOPp->top__DOT__register_file__DOT__registers_9),32);
	vcdp->chgBus  (c+112,(vlTOPp->top__DOT__register_file__DOT__registers_10),32);
	vcdp->chgBus  (c+113,(vlTOPp->top__DOT__register_file__DOT__registers_11),32);
	vcdp->chgBus  (c+114,(vlTOPp->top__DOT__register_file__DOT__registers_12),32);
	vcdp->chgBus  (c+115,(vlTOPp->top__DOT__register_file__DOT__registers_13),32);
	vcdp->chgBus  (c+116,(vlTOPp->top__DOT__register_file__DOT__registers_14),32);
	vcdp->chgBus  (c+117,(vlTOPp->top__DOT__register_file__DOT__registers_15),32);
	vcdp->chgBus  (c+118,(vlTOPp->top__DOT__register_file__DOT__registers_16),32);
	vcdp->chgBus  (c+119,(vlTOPp->top__DOT__register_file__DOT__registers_17),32);
	vcdp->chgBus  (c+120,(vlTOPp->top__DOT__register_file__DOT__registers_18),32);
	vcdp->chgBus  (c+121,(vlTOPp->top__DOT__register_file__DOT__registers_19),32);
	vcdp->chgBus  (c+122,(vlTOPp->top__DOT__register_file__DOT__registers_20),32);
	vcdp->chgBus  (c+123,(vlTOPp->top__DOT__register_file__DOT__registers_21),32);
	vcdp->chgBus  (c+124,(vlTOPp->top__DOT__register_file__DOT__registers_22),32);
	vcdp->chgBus  (c+125,(vlTOPp->top__DOT__register_file__DOT__registers_23),32);
	vcdp->chgBus  (c+126,(vlTOPp->top__DOT__register_file__DOT__registers_24),32);
	vcdp->chgBus  (c+127,(vlTOPp->top__DOT__register_file__DOT__registers_25),32);
	vcdp->chgBus  (c+128,(vlTOPp->top__DOT__register_file__DOT__registers_26),32);
	vcdp->chgBus  (c+129,(vlTOPp->top__DOT__register_file__DOT__registers_27),32);
	vcdp->chgBus  (c+130,(vlTOPp->top__DOT__register_file__DOT__registers_28),32);
	vcdp->chgBus  (c+131,(vlTOPp->top__DOT__register_file__DOT__registers_29),32);
	vcdp->chgBus  (c+132,(vlTOPp->top__DOT__register_file__DOT__registers_30),32);
	vcdp->chgBus  (c+133,(vlTOPp->top__DOT__register_file__DOT__registers_31),32);
	vcdp->chgBus  (c+134,((0xfffU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					 >> 0x14U))),12);
	vcdp->chgBus  (c+135,((0x7fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					>> 0x19U))),7);
	vcdp->chgBus  (c+136,(((0xfe0U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					  >> 0x14U)) 
			       | (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					   >> 7U)))),12);
	vcdp->chgBus  (c+137,((0xfU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
				       >> 8U))),4);
	vcdp->chgBus  (c+138,((0x3fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					>> 0x19U))),6);
	vcdp->chgBit  (c+139,((1U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
				     >> 7U))));
	vcdp->chgBit  (c+140,((1U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
				     >> 0x1fU))));
	vcdp->chgBus  (c+141,(((0x1000U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					   >> 0x13U)) 
			       | ((0x800U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					     << 4U)) 
				  | ((0x7e0U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						>> 0x14U)) 
				     | (0x1eU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						 >> 7U)))))),13);
	vcdp->chgBus  (c+142,((0xfffffU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					   >> 0xcU))),20);
	vcdp->chgBus  (c+143,(((((0x80000000U & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
				  ? 0xfffU : 0U) << 0x14U) 
			       | (0xfffffU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					      >> 0xcU)))),32);
	vcdp->chgQuad (c+144,((VL_ULL(0x7fffffffffff) 
			       & ((QData)((IData)((
						   (((0x80000000U 
						      & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
						      ? 0xfffU
						      : 0U) 
						    << 0x14U) 
						   | (0xfffffU 
						      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							 >> 0xcU))))) 
				  << 0xcU))),47);
	vcdp->chgBus  (c+146,((0x3ffU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					 >> 0x15U))),10);
	vcdp->chgBit  (c+147,((1U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
				     >> 0x14U))));
	vcdp->chgBus  (c+148,((0xffU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					>> 0xcU))),8);
	vcdp->chgBus  (c+149,(((0x100000U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					     >> 0xbU)) 
			       | ((0xff000U & vlTOPp->top__DOT__IF_ID__DOT__instruction_register) 
				  | ((0x800U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						>> 9U)) 
				     | (0x7feU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						  >> 0x14U)))))),21);
	vcdp->chgBit  (c+150,(((IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memorywrite) 
			       & (~ (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memoryread)))));
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+151,(vlTOPp->clock));
	vcdp->chgBit  (c+152,(vlTOPp->reset));
	vcdp->chgBus  (c+153,(vlTOPp->io_reg_out),32);
    }
}
