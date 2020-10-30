// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"              // For This
#include "Vtop__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtop::eval() {
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vtop::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_initial__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,255,0,8);
    // Body
    // INITIAL at /home/talha/riscv/pipeline/test_run_dir/examples/top/top.instruction_memory.memory.v:7
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x2f616263U;
    __Vtemp1[2U] = 0x6b746f70U;
    __Vtemp1[3U] = 0x2f446573U;
    __Vtemp1[4U] = 0x6465656dU;
    __Vtemp1[5U] = 0x61626e61U;
    __Vtemp1[6U] = 0x652f7562U;
    __Vtemp1[7U] = 0x2f686f6dU;
    VL_READMEM_W (true,32,1024, 0,8, __Vtemp1, vlTOPp->top__DOT__instruction_memory__DOT__memory
		  ,0,~0);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__top__DOT__data_memory__DOT__memory__v0,0,0);
    //char	__VpadToAlign61[1];
    VL_SIG16(__Vdlyvdim0__top__DOT__data_memory__DOT__memory__v0,9,0);
    VL_SIG(__Vdlyvval__top__DOT__data_memory__DOT__memory__v0,31,0);
    // Body
    __Vdlyvset__top__DOT__data_memory__DOT__memory__v0 = 0U;
    // ALWAYS at top.v:1889
    vlTOPp->top__DOT__IF_ID__DOT__pc_register = ((IData)(vlTOPp->reset)
						  ? 0U
						  : 
						 ((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
						   ? vlTOPp->top__DOT___GEN_1
						   : 
						  ((1U 
						    == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
						    ? 
						   ((IData)(vlTOPp->top__DOT___T_18)
						     ? 0U
						     : vlTOPp->top__DOT___GEN_1)
						    : 
						   ((2U 
						     == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
						     ? 0U
						     : 
						    ((3U 
						      == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
						      ? 0U
						      : vlTOPp->top__DOT___GEN_1)))));
    // ALWAYS at top.v:2086
    vlTOPp->top__DOT__ID_EX__DOT__rs1_register = ((IData)(vlTOPp->reset)
						   ? 0U
						   : vlTOPp->top__DOT__register_file_io_rs1);
    // ALWAYS at top.v:2081
    vlTOPp->top__DOT__ID_EX__DOT__pc4_register = ((IData)(vlTOPp->reset)
						   ? 0U
						   : vlTOPp->top__DOT__IF_ID__DOT__pc4_register);
    // ALWAYS at top.v:2091
    vlTOPp->top__DOT__ID_EX__DOT__rs2_register = ((IData)(vlTOPp->reset)
						   ? 0U
						   : vlTOPp->top__DOT__register_file_io_rs2);
    // ALWAYS at top.v:2399
    vlTOPp->top__DOT__MEM_WB__DOT__register_datamemory_data 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->top__DOT__data_memory_io_memory_out);
    // ALWAYS at top.v:2404
    vlTOPp->top__DOT__MEM_WB__DOT__register_alu = ((IData)(vlTOPp->reset)
						    ? 0U
						    : vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out);
    // ALWAYS at top.v:2121
    vlTOPp->top__DOT__ID_EX__DOT__func7_register = 
	(1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					     >> 0x1eU)));
    // ALWAYS at top.v:2146
    vlTOPp->top__DOT__ID_EX__DOT__control_aluop_register 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
					   ? 0U : (
						   (0x33U 
						    == 
						    (0x7fU 
						     & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))
						    ? 0U
						    : 
						   ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)
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
							   : 7U))))))))));
    // ALWAYS at top.v:2116
    vlTOPp->top__DOT__ID_EX__DOT__func3_register = 
	(7U & ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					      >> 0xcU)));
    // ALWAYS at top.v:2096
    vlTOPp->top__DOT__ID_EX__DOT__immediate_register 
	= ((IData)(vlTOPp->reset) ? 0U : ((0U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_extend_select))
					   ? vlTOPp->top__DOT__immediate_generation__DOT__i_immediate_32
					   : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_extend_select))
					       ? ((
						   ((0x80000000U 
						     & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
						     ? 0xfffffU
						     : 0U) 
						   << 0xcU) 
						  | ((0xfe0U 
						      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							 >> 0x14U)) 
						     | (0x1fU 
							& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							   >> 7U))))
					       : ((2U 
						   == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_extend_select))
						   ? (IData)(
							     (VL_ULL(0x7fffffffffff) 
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
						   : 0U))));
    // ALWAYS at top.v:2156
    vlTOPp->top__DOT__ID_EX__DOT__control_opb_select_register 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)) 
					 & ((0x33U 
					     != (0x7fU 
						 & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
					    & ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type) 
					       | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type) 
						  | ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
						     & ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type) 
							| ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type)) 
							   & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type)) 
							      & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type))))))))));
    // ALWAYS at top.v:2151
    vlTOPp->top__DOT__ID_EX__DOT__control_opa_select_register 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
					   ? 0U : (
						   (0x33U 
						    == 
						    (0x7fU 
						     & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))
						    ? 0U
						    : 
						   ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)
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
							   : 0U))))))))));
    // ALWAYS at top.v:2389
    vlTOPp->top__DOT__MEM_WB__DOT__register_memoryread 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memoryread));
    // ALWAYS at top.v:2384
    vlTOPp->top__DOT__MEM_WB__DOT__register_memorytoregister 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memorytoregister));
    // ALWAYS at top.v:1824
    if (((IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memorywrite) 
	 & (~ (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memoryread)))) {
	__Vdlyvval__top__DOT__data_memory__DOT__memory__v0 
	    = vlTOPp->top__DOT__EX_MEM__DOT__register_rs2;
	__Vdlyvset__top__DOT__data_memory__DOT__memory__v0 = 1U;
	__Vdlyvdim0__top__DOT__data_memory__DOT__memory__v0 
	    = (0x3ffU & (vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out 
			 >> 2U));
    }
    // ALWAYS at top.v:2106
    vlTOPp->top__DOT__ID_EX__DOT__rs1_select_register 
	= (0x1fU & ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						   >> 0xfU)));
    // ALWAYS at top.v:2111
    vlTOPp->top__DOT__ID_EX__DOT__rs2_select_register 
	= (0x1fU & ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						   >> 0x14U)));
    // ALWAYS at top.v:894
    vlTOPp->top__DOT__register_file__DOT__registers_0 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite)
					   ? ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))
					       ? 0U
					       : ((0U 
						   == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))
						   ? vlTOPp->top__DOT__register_file_io_write_data
						   : 0U))
					   : 0U));
    // ALWAYS at top.v:910
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_1 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((1U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_1 = 0U;
		}
	    } else {
		if ((1U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_1 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:925
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_2 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((2U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_2 = 0U;
		}
	    } else {
		if ((2U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_2 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:940
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_3 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((3U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_3 = 0U;
		}
	    } else {
		if ((3U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_3 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:955
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_4 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((4U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_4 = 0U;
		}
	    } else {
		if ((4U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_4 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:970
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_5 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((5U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_5 = 0U;
		}
	    } else {
		if ((5U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_5 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:985
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_6 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((6U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_6 = 0U;
		}
	    } else {
		if ((6U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_6 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1000
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_7 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((7U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_7 = 0U;
		}
	    } else {
		if ((7U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_7 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1015
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_8 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((8U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_8 = 0U;
		}
	    } else {
		if ((8U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_8 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1030
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_9 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((9U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_9 = 0U;
		}
	    } else {
		if ((9U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_9 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1045
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_10 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0xaU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_10 = 0U;
		}
	    } else {
		if ((0xaU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_10 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1060
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_11 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0xbU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_11 = 0U;
		}
	    } else {
		if ((0xbU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_11 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1075
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_12 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0xcU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_12 = 0U;
		}
	    } else {
		if ((0xcU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_12 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1090
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_13 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0xdU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_13 = 0U;
		}
	    } else {
		if ((0xdU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_13 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1105
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_14 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0xeU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_14 = 0U;
		}
	    } else {
		if ((0xeU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_14 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1120
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_15 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0xfU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_15 = 0U;
		}
	    } else {
		if ((0xfU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_15 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1135
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_16 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x10U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_16 = 0U;
		}
	    } else {
		if ((0x10U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_16 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1150
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_17 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x11U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_17 = 0U;
		}
	    } else {
		if ((0x11U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_17 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1165
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_18 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x12U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_18 = 0U;
		}
	    } else {
		if ((0x12U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_18 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1180
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_19 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x13U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_19 = 0U;
		}
	    } else {
		if ((0x13U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_19 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1195
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_20 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x14U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_20 = 0U;
		}
	    } else {
		if ((0x14U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_20 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1210
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_21 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x15U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_21 = 0U;
		}
	    } else {
		if ((0x15U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_21 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1225
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_22 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x16U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_22 = 0U;
		}
	    } else {
		if ((0x16U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_22 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1240
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_23 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x17U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_23 = 0U;
		}
	    } else {
		if ((0x17U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_23 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1255
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_24 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x18U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_24 = 0U;
		}
	    } else {
		if ((0x18U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_24 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1270
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_25 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x19U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_25 = 0U;
		}
	    } else {
		if ((0x19U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_25 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1285
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_26 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x1aU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_26 = 0U;
		}
	    } else {
		if ((0x1aU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_26 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1300
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_27 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x1bU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_27 = 0U;
		}
	    } else {
		if ((0x1bU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_27 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1315
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_28 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x1cU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_28 = 0U;
		}
	    } else {
		if ((0x1cU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_28 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1330
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_29 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x1dU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_29 = 0U;
		}
	    } else {
		if ((0x1dU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_29 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1345
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_30 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x1eU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_30 = 0U;
		}
	    } else {
		if ((0x1eU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_30 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYS at top.v:1360
    if (vlTOPp->reset) {
	vlTOPp->top__DOT__register_file__DOT__registers_31 = 0U;
    } else {
	if (vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) {
	    if ((0U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		if ((0x1fU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_31 = 0U;
		}
	    } else {
		if ((0x1fU == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) {
		    vlTOPp->top__DOT__register_file__DOT__registers_31 
			= vlTOPp->top__DOT__register_file_io_write_data;
		}
	    }
	}
    }
    // ALWAYSPOST at top.v:1826
    if (__Vdlyvset__top__DOT__data_memory__DOT__memory__v0) {
	vlTOPp->top__DOT__data_memory__DOT__memory[__Vdlyvdim0__top__DOT__data_memory__DOT__memory__v0] 
	    = __Vdlyvval__top__DOT__data_memory__DOT__memory__v0;
    }
    // ALWAYS at top.v:1894
    vlTOPp->top__DOT__IF_ID__DOT__pc4_register = ((IData)(vlTOPp->reset)
						   ? 0U
						   : 
						  ((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
						    ? 
						   ((IData)(4U) 
						    + vlTOPp->top__DOT__pc__DOT__register)
						    : 
						   ((1U 
						     == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
						     ? 
						    ((IData)(vlTOPp->top__DOT___T_18)
						      ? 0U
						      : 
						     ((IData)(4U) 
						      + vlTOPp->top__DOT__pc__DOT__register))
						     : 
						    ((2U 
						      == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
						      ? 0U
						      : 
						     ((3U 
						       == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
						       ? 0U
						       : 
						      ((IData)(4U) 
						       + vlTOPp->top__DOT__pc__DOT__register))))));
    vlTOPp->top__DOT__alu_control__DOT___T_17 = (((IData)(vlTOPp->top__DOT__ID_EX__DOT__func7_register) 
						  << 3U) 
						 | (IData)(vlTOPp->top__DOT__ID_EX__DOT__func3_register));
    vlTOPp->top__DOT__register_file_io_write_data = 
	((IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_memorytoregister)
	  ? vlTOPp->top__DOT__MEM_WB__DOT__register_datamemory_data
	  : vlTOPp->top__DOT__MEM_WB__DOT__register_alu);
    // ALWAYS at top.v:2272
    vlTOPp->top__DOT__EX_MEM__DOT__register_memorytoregister 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_memorytoregister_register));
    // ALWAYS at top.v:2277
    vlTOPp->top__DOT__EX_MEM__DOT__register_rs2 = ((IData)(vlTOPp->reset)
						    ? 0U
						    : vlTOPp->top__DOT___GEN_68);
    // ALWAYS at top.v:2287
    vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->top__DOT__alu__DOT___GEN_21));
    // ALWAYS at top.v:2257
    vlTOPp->top__DOT__EX_MEM__DOT__register_memorywrite 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_memorywrite_register));
    // ALWAYS at top.v:2262
    vlTOPp->top__DOT__EX_MEM__DOT__register_memoryread 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_memoryread_register));
    // ALWAYS at top.v:2379
    vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_registerwrite));
    // ALWAYS at top.v:2394
    vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select));
    // ALWAYS at top.v:1710
    vlTOPp->top__DOT__pc__DOT__register = ((IData)(vlTOPp->reset)
					    ? 0U : vlTOPp->top__DOT__pc_io_in);
    // ALWAYS at top.v:2141
    vlTOPp->top__DOT__ID_EX__DOT__control_memorytoregister_register 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)) 
					 & ((0x33U 
					     != (0x7fU 
						 & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
					    & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type))));
    vlTOPp->top__DOT__data_memory__DOT__memory___05FT_23_data 
	= vlTOPp->top__DOT__data_memory__DOT__memory
	[(0x3ffU & (vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out 
		    >> 2U))];
    vlTOPp->top__DOT__data_memory__DOT__memory___05FT_24_data 
	= vlTOPp->top__DOT__data_memory__DOT__memory
	[(0x3ffU & (vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out 
		    >> 2U))];
    // ALWAYS at top.v:2126
    vlTOPp->top__DOT__ID_EX__DOT__control_memorywrite_register 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)) 
					 & ((0x33U 
					     != (0x7fU 
						 & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
					    & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)) 
					       & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)))));
    // ALWAYS at top.v:2131
    vlTOPp->top__DOT__ID_EX__DOT__control_memoryread_register 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)) 
					 & ((0x33U 
					     != (0x7fU 
						 & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
					    & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type))));
    // ALWAYS at top.v:2267
    vlTOPp->top__DOT__EX_MEM__DOT__register_registerwrite 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_registerwrite_register));
    vlTOPp->top__DOT__branch_forward__DOT___T_226 = 
	((0U != (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select)) 
	 & (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_memoryread));
    vlTOPp->top__DOT__branch_forward__DOT___T_159 = 
	((0U != (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select)) 
	 & (~ (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_memoryread)));
    vlTOPp->top__DOT__forward_unit__DOT___T_66 = ((IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select) 
						  == (IData)(vlTOPp->top__DOT__ID_EX__DOT__rs1_select_register));
    vlTOPp->top__DOT__forward_unit__DOT___T_68 = ((IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select) 
						  == (IData)(vlTOPp->top__DOT__ID_EX__DOT__rs2_select_register));
    vlTOPp->top__DOT__forward_unit__DOT___T_54 = ((IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) 
						  & (0U 
						     != (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select)));
    // ALWAYS at top.v:2282
    vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register));
    vlTOPp->top__DOT__instruction_memory__DOT__memory___05FT_11_data 
	= vlTOPp->top__DOT__instruction_memory__DOT__memory
	[(0x3ffU & (vlTOPp->top__DOT__pc__DOT__register 
		    >> 2U))];
    // ALWAYS at top.v:2136
    vlTOPp->top__DOT__ID_EX__DOT__control_registerwrite_register 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)) 
					 & ((0x33U 
					     == (0x7fU 
						 & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
					    | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type) 
					       | ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)) 
						  & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
						     & ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type) 
							| ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type) 
							   | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type) 
							      | (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type))))))))));
    // ALWAYS at top.v:2101
    vlTOPp->top__DOT__ID_EX__DOT__rd_select_register 
	= (0x1fU & ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						   >> 7U)));
    vlTOPp->top__DOT__branch_forward__DOT___T_109 = 
	((0U != (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select)) 
	 & (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memoryread));
    vlTOPp->top__DOT__branch_forward__DOT___T_62 = 
	((0U != (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select)) 
	 & (~ (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memoryread)));
    vlTOPp->top__DOT__forward_unit__DOT___T_30 = ((IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select) 
						  == (IData)(vlTOPp->top__DOT__ID_EX__DOT__rs2_select_register));
    vlTOPp->top__DOT__forward_unit__DOT___T_27 = ((IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_registerwrite) 
						  & (0U 
						     != (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select)));
    vlTOPp->top__DOT__branch_forward__DOT___T_35 = 
	((0U != (IData)(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register)) 
	 & (~ (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_memoryread_register)));
    // ALWAYS at top.v:1899
    vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
					   ? vlTOPp->top__DOT___GEN_0
					   : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
					       ? ((IData)(vlTOPp->top__DOT___T_18)
						   ? 0U
						   : vlTOPp->top__DOT___GEN_0)
					       : ((2U 
						   == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
						   ? 0U
						   : 
						  ((3U 
						    == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
						    ? 0U
						    : vlTOPp->top__DOT___GEN_0)))));
    vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & ((3U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	      & ((0x23U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		 & ((0x63U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		    & ((0x13U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		       & ((0x67U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
			  & ((0x6fU != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
			     & (0x37U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)))))))));
    vlTOPp->top__DOT__immediate_generation__DOT__i_immediate_32 
	= ((((0x80000000U & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
	      ? 0xfffffU : 0U) << 0xcU) | (0xfffU & 
					   (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					    >> 0x14U)));
    vlTOPp->top__DOT__immediate_generation__DOT___T_41 
	= ((((0x80000000U & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
	      ? 0x7ffffU : 0U) << 0xdU) | ((0x1000U 
					    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					       >> 0x13U)) 
					   | ((0x800U 
					       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						  << 4U)) 
					      | ((0x7e0U 
						  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						     >> 0x14U)) 
						 | (0x1eU 
						    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						       >> 7U))))));
    vlTOPp->top__DOT__immediate_generation__DOT___T_62 
	= ((((0x80000000U & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
	      ? 0x7ffU : 0U) << 0x15U) | ((0x100000U 
					   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					      >> 0xbU)) 
					  | ((0xff000U 
					      & vlTOPp->top__DOT__IF_ID__DOT__instruction_register) 
					     | ((0x800U 
						 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						    >> 9U)) 
						| (0x7feU 
						   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						      >> 0x14U))))));
    vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & ((3U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	      & ((0x23U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		 & ((0x63U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		    & (0x13U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))))));
    vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & ((3U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	      & ((0x23U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		 & ((0x63U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		    & ((0x13U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		       & (0x67U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)))))));
    vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & ((3U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	      & ((0x23U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		 & ((0x63U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		    & ((0x13U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		       & ((0x67U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
			  & (0x6fU == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))))))));
    vlTOPp->top__DOT__hazard_detection__DOT___T_31 
	= (((IData)(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register) 
	    == (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
			 >> 0xfU))) | ((IData)(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register) 
				       == (0x1fU & 
					   (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					    >> 0x14U))));
    vlTOPp->top__DOT__register_file_io_rs2 = ((0x1fU 
					       == (0x1fU 
						   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						      >> 0x14U)))
					       ? vlTOPp->top__DOT__register_file__DOT__registers_31
					       : ((0x1eU 
						   == 
						   (0x1fU 
						    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						       >> 0x14U)))
						   ? vlTOPp->top__DOT__register_file__DOT__registers_30
						   : 
						  ((0x1dU 
						    == 
						    (0x1fU 
						     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							>> 0x14U)))
						    ? vlTOPp->top__DOT__register_file__DOT__registers_29
						    : 
						   ((0x1cU 
						     == 
						     (0x1fU 
						      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							 >> 0x14U)))
						     ? vlTOPp->top__DOT__register_file__DOT__registers_28
						     : 
						    ((0x1bU 
						      == 
						      (0x1fU 
						       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							  >> 0x14U)))
						      ? vlTOPp->top__DOT__register_file__DOT__registers_27
						      : 
						     ((0x1aU 
						       == 
						       (0x1fU 
							& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							   >> 0x14U)))
						       ? vlTOPp->top__DOT__register_file__DOT__registers_26
						       : 
						      ((0x19U 
							== 
							(0x1fU 
							 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							    >> 0x14U)))
						        ? vlTOPp->top__DOT__register_file__DOT__registers_25
						        : 
						       ((0x18U 
							 == 
							 (0x1fU 
							  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							     >> 0x14U)))
							 ? vlTOPp->top__DOT__register_file__DOT__registers_24
							 : 
							((0x17U 
							  == 
							  (0x1fU 
							   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							      >> 0x14U)))
							  ? vlTOPp->top__DOT__register_file__DOT__registers_23
							  : 
							 ((0x16U 
							   == 
							   (0x1fU 
							    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							       >> 0x14U)))
							   ? vlTOPp->top__DOT__register_file__DOT__registers_22
							   : 
							  ((0x15U 
							    == 
							    (0x1fU 
							     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								>> 0x14U)))
							    ? vlTOPp->top__DOT__register_file__DOT__registers_21
							    : 
							   ((0x14U 
							     == 
							     (0x1fU 
							      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								 >> 0x14U)))
							     ? vlTOPp->top__DOT__register_file__DOT__registers_20
							     : 
							    ((0x13U 
							      == 
							      (0x1fU 
							       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								  >> 0x14U)))
							      ? vlTOPp->top__DOT__register_file__DOT__registers_19
							      : 
							     ((0x12U 
							       == 
							       (0x1fU 
								& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								   >> 0x14U)))
							       ? vlTOPp->top__DOT__register_file__DOT__registers_18
							       : 
							      ((0x11U 
								== 
								(0x1fU 
								 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								    >> 0x14U)))
							        ? vlTOPp->top__DOT__register_file__DOT__registers_17
							        : 
							       ((0x10U 
								 == 
								 (0x1fU 
								  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								     >> 0x14U)))
								 ? vlTOPp->top__DOT__register_file__DOT__registers_16
								 : 
								((0xfU 
								  == 
								  (0x1fU 
								   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								      >> 0x14U)))
								  ? vlTOPp->top__DOT__register_file__DOT__registers_15
								  : 
								 ((0xeU 
								   == 
								   (0x1fU 
								    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								       >> 0x14U)))
								   ? vlTOPp->top__DOT__register_file__DOT__registers_14
								   : 
								  ((0xdU 
								    == 
								    (0x1fU 
								     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									>> 0x14U)))
								    ? vlTOPp->top__DOT__register_file__DOT__registers_13
								    : 
								   ((0xcU 
								     == 
								     (0x1fU 
								      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									 >> 0x14U)))
								     ? vlTOPp->top__DOT__register_file__DOT__registers_12
								     : 
								    ((0xbU 
								      == 
								      (0x1fU 
								       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									  >> 0x14U)))
								      ? vlTOPp->top__DOT__register_file__DOT__registers_11
								      : 
								     ((0xaU 
								       == 
								       (0x1fU 
									& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									   >> 0x14U)))
								       ? vlTOPp->top__DOT__register_file__DOT__registers_10
								       : 
								      ((9U 
									== 
									(0x1fU 
									 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									    >> 0x14U)))
								        ? vlTOPp->top__DOT__register_file__DOT__registers_9
								        : 
								       ((8U 
									 == 
									 (0x1fU 
									  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									     >> 0x14U)))
									 ? vlTOPp->top__DOT__register_file__DOT__registers_8
									 : 
									((7U 
									  == 
									  (0x1fU 
									   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									      >> 0x14U)))
									  ? vlTOPp->top__DOT__register_file__DOT__registers_7
									  : 
									 ((6U 
									   == 
									   (0x1fU 
									    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									       >> 0x14U)))
									   ? vlTOPp->top__DOT__register_file__DOT__registers_6
									   : 
									  ((5U 
									    == 
									    (0x1fU 
									     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0x14U)))
									    ? vlTOPp->top__DOT__register_file__DOT__registers_5
									    : 
									   ((4U 
									     == 
									     (0x1fU 
									      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0x14U)))
									     ? vlTOPp->top__DOT__register_file__DOT__registers_4
									     : 
									    ((3U 
									      == 
									      (0x1fU 
									       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0x14U)))
									      ? vlTOPp->top__DOT__register_file__DOT__registers_3
									      : 
									     ((2U 
									       == 
									       (0x1fU 
										& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0x14U)))
									       ? vlTOPp->top__DOT__register_file__DOT__registers_2
									       : 
									      ((1U 
										== 
										(0x1fU 
										& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0x14U)))
									        ? vlTOPp->top__DOT__register_file__DOT__registers_1
									        : vlTOPp->top__DOT__register_file__DOT__registers_0)))))))))))))))))))))))))))))));
    vlTOPp->top__DOT__register_file_io_rs1 = ((0x1fU 
					       == (0x1fU 
						   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						      >> 0xfU)))
					       ? vlTOPp->top__DOT__register_file__DOT__registers_31
					       : ((0x1eU 
						   == 
						   (0x1fU 
						    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						       >> 0xfU)))
						   ? vlTOPp->top__DOT__register_file__DOT__registers_30
						   : 
						  ((0x1dU 
						    == 
						    (0x1fU 
						     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							>> 0xfU)))
						    ? vlTOPp->top__DOT__register_file__DOT__registers_29
						    : 
						   ((0x1cU 
						     == 
						     (0x1fU 
						      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							 >> 0xfU)))
						     ? vlTOPp->top__DOT__register_file__DOT__registers_28
						     : 
						    ((0x1bU 
						      == 
						      (0x1fU 
						       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							  >> 0xfU)))
						      ? vlTOPp->top__DOT__register_file__DOT__registers_27
						      : 
						     ((0x1aU 
						       == 
						       (0x1fU 
							& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							   >> 0xfU)))
						       ? vlTOPp->top__DOT__register_file__DOT__registers_26
						       : 
						      ((0x19U 
							== 
							(0x1fU 
							 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							    >> 0xfU)))
						        ? vlTOPp->top__DOT__register_file__DOT__registers_25
						        : 
						       ((0x18U 
							 == 
							 (0x1fU 
							  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							     >> 0xfU)))
							 ? vlTOPp->top__DOT__register_file__DOT__registers_24
							 : 
							((0x17U 
							  == 
							  (0x1fU 
							   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							      >> 0xfU)))
							  ? vlTOPp->top__DOT__register_file__DOT__registers_23
							  : 
							 ((0x16U 
							   == 
							   (0x1fU 
							    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							       >> 0xfU)))
							   ? vlTOPp->top__DOT__register_file__DOT__registers_22
							   : 
							  ((0x15U 
							    == 
							    (0x1fU 
							     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								>> 0xfU)))
							    ? vlTOPp->top__DOT__register_file__DOT__registers_21
							    : 
							   ((0x14U 
							     == 
							     (0x1fU 
							      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								 >> 0xfU)))
							     ? vlTOPp->top__DOT__register_file__DOT__registers_20
							     : 
							    ((0x13U 
							      == 
							      (0x1fU 
							       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								  >> 0xfU)))
							      ? vlTOPp->top__DOT__register_file__DOT__registers_19
							      : 
							     ((0x12U 
							       == 
							       (0x1fU 
								& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								   >> 0xfU)))
							       ? vlTOPp->top__DOT__register_file__DOT__registers_18
							       : 
							      ((0x11U 
								== 
								(0x1fU 
								 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								    >> 0xfU)))
							        ? vlTOPp->top__DOT__register_file__DOT__registers_17
							        : 
							       ((0x10U 
								 == 
								 (0x1fU 
								  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								     >> 0xfU)))
								 ? vlTOPp->top__DOT__register_file__DOT__registers_16
								 : 
								((0xfU 
								  == 
								  (0x1fU 
								   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								      >> 0xfU)))
								  ? vlTOPp->top__DOT__register_file__DOT__registers_15
								  : 
								 ((0xeU 
								   == 
								   (0x1fU 
								    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								       >> 0xfU)))
								   ? vlTOPp->top__DOT__register_file__DOT__registers_14
								   : 
								  ((0xdU 
								    == 
								    (0x1fU 
								     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									>> 0xfU)))
								    ? vlTOPp->top__DOT__register_file__DOT__registers_13
								    : 
								   ((0xcU 
								     == 
								     (0x1fU 
								      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									 >> 0xfU)))
								     ? vlTOPp->top__DOT__register_file__DOT__registers_12
								     : 
								    ((0xbU 
								      == 
								      (0x1fU 
								       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									  >> 0xfU)))
								      ? vlTOPp->top__DOT__register_file__DOT__registers_11
								      : 
								     ((0xaU 
								       == 
								       (0x1fU 
									& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									   >> 0xfU)))
								       ? vlTOPp->top__DOT__register_file__DOT__registers_10
								       : 
								      ((9U 
									== 
									(0x1fU 
									 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									    >> 0xfU)))
								        ? vlTOPp->top__DOT__register_file__DOT__registers_9
								        : 
								       ((8U 
									 == 
									 (0x1fU 
									  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									     >> 0xfU)))
									 ? vlTOPp->top__DOT__register_file__DOT__registers_8
									 : 
									((7U 
									  == 
									  (0x1fU 
									   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									      >> 0xfU)))
									  ? vlTOPp->top__DOT__register_file__DOT__registers_7
									  : 
									 ((6U 
									   == 
									   (0x1fU 
									    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									       >> 0xfU)))
									   ? vlTOPp->top__DOT__register_file__DOT__registers_6
									   : 
									  ((5U 
									    == 
									    (0x1fU 
									     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0xfU)))
									    ? vlTOPp->top__DOT__register_file__DOT__registers_5
									    : 
									   ((4U 
									     == 
									     (0x1fU 
									      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0xfU)))
									     ? vlTOPp->top__DOT__register_file__DOT__registers_4
									     : 
									    ((3U 
									      == 
									      (0x1fU 
									       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0xfU)))
									      ? vlTOPp->top__DOT__register_file__DOT__registers_3
									      : 
									     ((2U 
									       == 
									       (0x1fU 
										& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0xfU)))
									       ? vlTOPp->top__DOT__register_file__DOT__registers_2
									       : 
									      ((1U 
										== 
										(0x1fU 
										& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0xfU)))
									        ? vlTOPp->top__DOT__register_file__DOT__registers_1
									        : vlTOPp->top__DOT__register_file__DOT__registers_0)))))))))))))))))))))))))))))));
    vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & (3U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)));
    vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & ((3U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	      & (0x23U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))));
    vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & ((3U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	      & ((0x23U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		 & (0x63U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)))));
    vlTOPp->top__DOT__branch_forward__DOT___T_176 = 
	((IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select) 
	 == (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
		      >> 0xfU)));
    vlTOPp->top__DOT__branch_forward__DOT___T_178 = 
	((IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select) 
	 == (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
		      >> 0x14U)));
    vlTOPp->top__DOT__branch_forward__DOT___T_73 = 
	((IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select) 
	 == (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
		      >> 0x14U)));
    vlTOPp->top__DOT__branch_forward__DOT___T_71 = 
	((IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select) 
	 == (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
		      >> 0xfU)));
    vlTOPp->top__DOT__branch_forward__DOT___T_38 = 
	((IData)(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register) 
	 == (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
		      >> 0x14U)));
    vlTOPp->top__DOT__branch_forward__DOT___T_36 = 
	((IData)(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register) 
	 == (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
		      >> 0xfU)));
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__alu_control__DOT___T_17 = (((IData)(vlTOPp->top__DOT__ID_EX__DOT__func7_register) 
						  << 3U) 
						 | (IData)(vlTOPp->top__DOT__ID_EX__DOT__func3_register));
    vlTOPp->top__DOT__register_file_io_write_data = 
	((IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_memorytoregister)
	  ? vlTOPp->top__DOT__MEM_WB__DOT__register_datamemory_data
	  : vlTOPp->top__DOT__MEM_WB__DOT__register_alu);
    vlTOPp->top__DOT__data_memory__DOT__memory___05FT_23_data 
	= vlTOPp->top__DOT__data_memory__DOT__memory
	[(0x3ffU & (vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out 
		    >> 2U))];
    vlTOPp->top__DOT__data_memory__DOT__memory___05FT_24_data 
	= vlTOPp->top__DOT__data_memory__DOT__memory
	[(0x3ffU & (vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out 
		    >> 2U))];
    vlTOPp->top__DOT__branch_forward__DOT___T_226 = 
	((0U != (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select)) 
	 & (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_memoryread));
    vlTOPp->top__DOT__branch_forward__DOT___T_159 = 
	((0U != (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select)) 
	 & (~ (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_memoryread)));
    vlTOPp->top__DOT__forward_unit__DOT___T_66 = ((IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select) 
						  == (IData)(vlTOPp->top__DOT__ID_EX__DOT__rs1_select_register));
    vlTOPp->top__DOT__forward_unit__DOT___T_68 = ((IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select) 
						  == (IData)(vlTOPp->top__DOT__ID_EX__DOT__rs2_select_register));
    vlTOPp->top__DOT__forward_unit__DOT___T_54 = ((IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite) 
						  & (0U 
						     != (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select)));
    vlTOPp->top__DOT__instruction_memory__DOT__memory___05FT_11_data 
	= vlTOPp->top__DOT__instruction_memory__DOT__memory
	[(0x3ffU & (vlTOPp->top__DOT__pc__DOT__register 
		    >> 2U))];
    vlTOPp->top__DOT__branch_forward__DOT___T_109 = 
	((0U != (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select)) 
	 & (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memoryread));
    vlTOPp->top__DOT__branch_forward__DOT___T_62 = 
	((0U != (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select)) 
	 & (~ (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memoryread)));
    vlTOPp->top__DOT__forward_unit__DOT___T_30 = ((IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select) 
						  == (IData)(vlTOPp->top__DOT__ID_EX__DOT__rs2_select_register));
    vlTOPp->top__DOT__forward_unit__DOT___T_27 = ((IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_registerwrite) 
						  & (0U 
						     != (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select)));
    vlTOPp->top__DOT__branch_forward__DOT___T_35 = 
	((0U != (IData)(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register)) 
	 & (~ (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_memoryread_register)));
    vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & ((3U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	      & ((0x23U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		 & ((0x63U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		    & ((0x13U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		       & ((0x67U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
			  & ((0x6fU != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
			     & (0x37U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)))))))));
    vlTOPp->top__DOT__immediate_generation__DOT__i_immediate_32 
	= ((((0x80000000U & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
	      ? 0xfffffU : 0U) << 0xcU) | (0xfffU & 
					   (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					    >> 0x14U)));
    vlTOPp->top__DOT__immediate_generation__DOT___T_41 
	= ((((0x80000000U & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
	      ? 0x7ffffU : 0U) << 0xdU) | ((0x1000U 
					    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					       >> 0x13U)) 
					   | ((0x800U 
					       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						  << 4U)) 
					      | ((0x7e0U 
						  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						     >> 0x14U)) 
						 | (0x1eU 
						    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						       >> 7U))))));
    vlTOPp->top__DOT__immediate_generation__DOT___T_62 
	= ((((0x80000000U & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
	      ? 0x7ffU : 0U) << 0x15U) | ((0x100000U 
					   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					      >> 0xbU)) 
					  | ((0xff000U 
					      & vlTOPp->top__DOT__IF_ID__DOT__instruction_register) 
					     | ((0x800U 
						 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						    >> 9U)) 
						| (0x7feU 
						   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						      >> 0x14U))))));
    vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & ((3U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	      & ((0x23U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		 & ((0x63U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		    & (0x13U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))))));
    vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & ((3U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	      & ((0x23U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		 & ((0x63U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		    & ((0x13U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		       & (0x67U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)))))));
    vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & ((3U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	      & ((0x23U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		 & ((0x63U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		    & ((0x13U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		       & ((0x67U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
			  & (0x6fU == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))))))));
    vlTOPp->top__DOT__hazard_detection__DOT___T_31 
	= (((IData)(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register) 
	    == (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
			 >> 0xfU))) | ((IData)(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register) 
				       == (0x1fU & 
					   (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					    >> 0x14U))));
    vlTOPp->top__DOT__register_file_io_rs2 = ((0x1fU 
					       == (0x1fU 
						   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						      >> 0x14U)))
					       ? vlTOPp->top__DOT__register_file__DOT__registers_31
					       : ((0x1eU 
						   == 
						   (0x1fU 
						    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						       >> 0x14U)))
						   ? vlTOPp->top__DOT__register_file__DOT__registers_30
						   : 
						  ((0x1dU 
						    == 
						    (0x1fU 
						     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							>> 0x14U)))
						    ? vlTOPp->top__DOT__register_file__DOT__registers_29
						    : 
						   ((0x1cU 
						     == 
						     (0x1fU 
						      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							 >> 0x14U)))
						     ? vlTOPp->top__DOT__register_file__DOT__registers_28
						     : 
						    ((0x1bU 
						      == 
						      (0x1fU 
						       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							  >> 0x14U)))
						      ? vlTOPp->top__DOT__register_file__DOT__registers_27
						      : 
						     ((0x1aU 
						       == 
						       (0x1fU 
							& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							   >> 0x14U)))
						       ? vlTOPp->top__DOT__register_file__DOT__registers_26
						       : 
						      ((0x19U 
							== 
							(0x1fU 
							 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							    >> 0x14U)))
						        ? vlTOPp->top__DOT__register_file__DOT__registers_25
						        : 
						       ((0x18U 
							 == 
							 (0x1fU 
							  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							     >> 0x14U)))
							 ? vlTOPp->top__DOT__register_file__DOT__registers_24
							 : 
							((0x17U 
							  == 
							  (0x1fU 
							   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							      >> 0x14U)))
							  ? vlTOPp->top__DOT__register_file__DOT__registers_23
							  : 
							 ((0x16U 
							   == 
							   (0x1fU 
							    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							       >> 0x14U)))
							   ? vlTOPp->top__DOT__register_file__DOT__registers_22
							   : 
							  ((0x15U 
							    == 
							    (0x1fU 
							     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								>> 0x14U)))
							    ? vlTOPp->top__DOT__register_file__DOT__registers_21
							    : 
							   ((0x14U 
							     == 
							     (0x1fU 
							      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								 >> 0x14U)))
							     ? vlTOPp->top__DOT__register_file__DOT__registers_20
							     : 
							    ((0x13U 
							      == 
							      (0x1fU 
							       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								  >> 0x14U)))
							      ? vlTOPp->top__DOT__register_file__DOT__registers_19
							      : 
							     ((0x12U 
							       == 
							       (0x1fU 
								& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								   >> 0x14U)))
							       ? vlTOPp->top__DOT__register_file__DOT__registers_18
							       : 
							      ((0x11U 
								== 
								(0x1fU 
								 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								    >> 0x14U)))
							        ? vlTOPp->top__DOT__register_file__DOT__registers_17
							        : 
							       ((0x10U 
								 == 
								 (0x1fU 
								  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								     >> 0x14U)))
								 ? vlTOPp->top__DOT__register_file__DOT__registers_16
								 : 
								((0xfU 
								  == 
								  (0x1fU 
								   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								      >> 0x14U)))
								  ? vlTOPp->top__DOT__register_file__DOT__registers_15
								  : 
								 ((0xeU 
								   == 
								   (0x1fU 
								    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								       >> 0x14U)))
								   ? vlTOPp->top__DOT__register_file__DOT__registers_14
								   : 
								  ((0xdU 
								    == 
								    (0x1fU 
								     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									>> 0x14U)))
								    ? vlTOPp->top__DOT__register_file__DOT__registers_13
								    : 
								   ((0xcU 
								     == 
								     (0x1fU 
								      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									 >> 0x14U)))
								     ? vlTOPp->top__DOT__register_file__DOT__registers_12
								     : 
								    ((0xbU 
								      == 
								      (0x1fU 
								       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									  >> 0x14U)))
								      ? vlTOPp->top__DOT__register_file__DOT__registers_11
								      : 
								     ((0xaU 
								       == 
								       (0x1fU 
									& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									   >> 0x14U)))
								       ? vlTOPp->top__DOT__register_file__DOT__registers_10
								       : 
								      ((9U 
									== 
									(0x1fU 
									 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									    >> 0x14U)))
								        ? vlTOPp->top__DOT__register_file__DOT__registers_9
								        : 
								       ((8U 
									 == 
									 (0x1fU 
									  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									     >> 0x14U)))
									 ? vlTOPp->top__DOT__register_file__DOT__registers_8
									 : 
									((7U 
									  == 
									  (0x1fU 
									   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									      >> 0x14U)))
									  ? vlTOPp->top__DOT__register_file__DOT__registers_7
									  : 
									 ((6U 
									   == 
									   (0x1fU 
									    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									       >> 0x14U)))
									   ? vlTOPp->top__DOT__register_file__DOT__registers_6
									   : 
									  ((5U 
									    == 
									    (0x1fU 
									     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0x14U)))
									    ? vlTOPp->top__DOT__register_file__DOT__registers_5
									    : 
									   ((4U 
									     == 
									     (0x1fU 
									      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0x14U)))
									     ? vlTOPp->top__DOT__register_file__DOT__registers_4
									     : 
									    ((3U 
									      == 
									      (0x1fU 
									       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0x14U)))
									      ? vlTOPp->top__DOT__register_file__DOT__registers_3
									      : 
									     ((2U 
									       == 
									       (0x1fU 
										& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0x14U)))
									       ? vlTOPp->top__DOT__register_file__DOT__registers_2
									       : 
									      ((1U 
										== 
										(0x1fU 
										& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0x14U)))
									        ? vlTOPp->top__DOT__register_file__DOT__registers_1
									        : vlTOPp->top__DOT__register_file__DOT__registers_0)))))))))))))))))))))))))))))));
    vlTOPp->top__DOT__register_file_io_rs1 = ((0x1fU 
					       == (0x1fU 
						   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						      >> 0xfU)))
					       ? vlTOPp->top__DOT__register_file__DOT__registers_31
					       : ((0x1eU 
						   == 
						   (0x1fU 
						    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						       >> 0xfU)))
						   ? vlTOPp->top__DOT__register_file__DOT__registers_30
						   : 
						  ((0x1dU 
						    == 
						    (0x1fU 
						     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							>> 0xfU)))
						    ? vlTOPp->top__DOT__register_file__DOT__registers_29
						    : 
						   ((0x1cU 
						     == 
						     (0x1fU 
						      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							 >> 0xfU)))
						     ? vlTOPp->top__DOT__register_file__DOT__registers_28
						     : 
						    ((0x1bU 
						      == 
						      (0x1fU 
						       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							  >> 0xfU)))
						      ? vlTOPp->top__DOT__register_file__DOT__registers_27
						      : 
						     ((0x1aU 
						       == 
						       (0x1fU 
							& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							   >> 0xfU)))
						       ? vlTOPp->top__DOT__register_file__DOT__registers_26
						       : 
						      ((0x19U 
							== 
							(0x1fU 
							 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							    >> 0xfU)))
						        ? vlTOPp->top__DOT__register_file__DOT__registers_25
						        : 
						       ((0x18U 
							 == 
							 (0x1fU 
							  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							     >> 0xfU)))
							 ? vlTOPp->top__DOT__register_file__DOT__registers_24
							 : 
							((0x17U 
							  == 
							  (0x1fU 
							   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							      >> 0xfU)))
							  ? vlTOPp->top__DOT__register_file__DOT__registers_23
							  : 
							 ((0x16U 
							   == 
							   (0x1fU 
							    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							       >> 0xfU)))
							   ? vlTOPp->top__DOT__register_file__DOT__registers_22
							   : 
							  ((0x15U 
							    == 
							    (0x1fU 
							     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								>> 0xfU)))
							    ? vlTOPp->top__DOT__register_file__DOT__registers_21
							    : 
							   ((0x14U 
							     == 
							     (0x1fU 
							      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								 >> 0xfU)))
							     ? vlTOPp->top__DOT__register_file__DOT__registers_20
							     : 
							    ((0x13U 
							      == 
							      (0x1fU 
							       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								  >> 0xfU)))
							      ? vlTOPp->top__DOT__register_file__DOT__registers_19
							      : 
							     ((0x12U 
							       == 
							       (0x1fU 
								& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								   >> 0xfU)))
							       ? vlTOPp->top__DOT__register_file__DOT__registers_18
							       : 
							      ((0x11U 
								== 
								(0x1fU 
								 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								    >> 0xfU)))
							        ? vlTOPp->top__DOT__register_file__DOT__registers_17
							        : 
							       ((0x10U 
								 == 
								 (0x1fU 
								  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								     >> 0xfU)))
								 ? vlTOPp->top__DOT__register_file__DOT__registers_16
								 : 
								((0xfU 
								  == 
								  (0x1fU 
								   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								      >> 0xfU)))
								  ? vlTOPp->top__DOT__register_file__DOT__registers_15
								  : 
								 ((0xeU 
								   == 
								   (0x1fU 
								    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
								       >> 0xfU)))
								   ? vlTOPp->top__DOT__register_file__DOT__registers_14
								   : 
								  ((0xdU 
								    == 
								    (0x1fU 
								     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									>> 0xfU)))
								    ? vlTOPp->top__DOT__register_file__DOT__registers_13
								    : 
								   ((0xcU 
								     == 
								     (0x1fU 
								      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									 >> 0xfU)))
								     ? vlTOPp->top__DOT__register_file__DOT__registers_12
								     : 
								    ((0xbU 
								      == 
								      (0x1fU 
								       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									  >> 0xfU)))
								      ? vlTOPp->top__DOT__register_file__DOT__registers_11
								      : 
								     ((0xaU 
								       == 
								       (0x1fU 
									& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									   >> 0xfU)))
								       ? vlTOPp->top__DOT__register_file__DOT__registers_10
								       : 
								      ((9U 
									== 
									(0x1fU 
									 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									    >> 0xfU)))
								        ? vlTOPp->top__DOT__register_file__DOT__registers_9
								        : 
								       ((8U 
									 == 
									 (0x1fU 
									  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									     >> 0xfU)))
									 ? vlTOPp->top__DOT__register_file__DOT__registers_8
									 : 
									((7U 
									  == 
									  (0x1fU 
									   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									      >> 0xfU)))
									  ? vlTOPp->top__DOT__register_file__DOT__registers_7
									  : 
									 ((6U 
									   == 
									   (0x1fU 
									    & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
									       >> 0xfU)))
									   ? vlTOPp->top__DOT__register_file__DOT__registers_6
									   : 
									  ((5U 
									    == 
									    (0x1fU 
									     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0xfU)))
									    ? vlTOPp->top__DOT__register_file__DOT__registers_5
									    : 
									   ((4U 
									     == 
									     (0x1fU 
									      & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0xfU)))
									     ? vlTOPp->top__DOT__register_file__DOT__registers_4
									     : 
									    ((3U 
									      == 
									      (0x1fU 
									       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0xfU)))
									      ? vlTOPp->top__DOT__register_file__DOT__registers_3
									      : 
									     ((2U 
									       == 
									       (0x1fU 
										& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0xfU)))
									       ? vlTOPp->top__DOT__register_file__DOT__registers_2
									       : 
									      ((1U 
										== 
										(0x1fU 
										& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
										>> 0xfU)))
									        ? vlTOPp->top__DOT__register_file__DOT__registers_1
									        : vlTOPp->top__DOT__register_file__DOT__registers_0)))))))))))))))))))))))))))))));
    vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & (3U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)));
    vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & ((3U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	      & (0x23U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))));
    vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & ((3U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	      & ((0x23U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
		 & (0x63U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)))));
    vlTOPp->top__DOT__branch_forward__DOT___T_176 = 
	((IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select) 
	 == (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
		      >> 0xfU)));
    vlTOPp->top__DOT__branch_forward__DOT___T_178 = 
	((IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select) 
	 == (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
		      >> 0x14U)));
    vlTOPp->top__DOT__branch_forward__DOT___T_73 = 
	((IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select) 
	 == (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
		      >> 0x14U)));
    vlTOPp->top__DOT__branch_forward__DOT___T_71 = 
	((IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select) 
	 == (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
		      >> 0xfU)));
    vlTOPp->top__DOT__branch_forward__DOT___T_38 = 
	((IData)(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register) 
	 == (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
		      >> 0x14U)));
    vlTOPp->top__DOT__branch_forward__DOT___T_36 = 
	((IData)(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register) 
	 == (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
		      >> 0xfU)));
    vlTOPp->top__DOT__alu_control_io_output = ((0U 
						== (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_aluop_register))
					        ? (IData)(vlTOPp->top__DOT__alu_control__DOT___T_17)
					        : (
						   (4U 
						    == (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_aluop_register))
						    ? 0U
						    : 
						   ((1U 
						     == (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_aluop_register))
						     ? 
						    ((5U 
						      == (IData)(vlTOPp->top__DOT__ID_EX__DOT__func3_register))
						      ? (IData)(vlTOPp->top__DOT__alu_control__DOT___T_17)
						      : (IData)(vlTOPp->top__DOT__ID_EX__DOT__func3_register))
						     : 
						    ((5U 
						      == (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_aluop_register))
						      ? 0U
						      : 
						     ((2U 
						       == (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_aluop_register))
						       ? 
						      (0x10U 
						       | (IData)(vlTOPp->top__DOT__ID_EX__DOT__func3_register))
						       : 
						      ((3U 
							== (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_aluop_register))
						        ? 0x1fU
						        : 0U))))));
    vlTOPp->io_reg_out = vlTOPp->top__DOT__register_file_io_write_data;
    vlTOPp->top__DOT__data_memory_io_memory_out = (
						   ((IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memorywrite) 
						    & (~ (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memoryread)))
						    ? vlTOPp->top__DOT__data_memory__DOT__memory___05FT_23_data
						    : vlTOPp->top__DOT__data_memory__DOT__memory___05FT_24_data);
    vlTOPp->top__DOT__forward_unit__DOT___T_40 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_27) 
						  & (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_30));
    vlTOPp->top__DOT__forward_unit__DOT___T_29 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_27) 
						  & ((IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select) 
						     == (IData)(vlTOPp->top__DOT__ID_EX__DOT__rs1_select_register)));
    vlTOPp->top__DOT__hazard_detection_io_pc_forward 
	= ((IData)(vlTOPp->top__DOT__ID_EX__DOT__control_memoryread_register) 
	   & (IData)(vlTOPp->top__DOT__hazard_detection__DOT___T_31));
    vlTOPp->top__DOT__control__DOT__control_decode_io_extend_select 
	= ((0x33U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))
	    ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)
		     ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)
			      ? 1U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)
				       ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type)
					        ? 0U
					        : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type)
						     ? 0U
						     : 
						    ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type)
						      ? 2U
						      : 0U))))))));
    vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select 
	= ((0x33U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))
	    ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)
		     ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)
			      ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)
				       ? 1U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type)
					        ? 0U
					        : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type)
						    ? 3U
						    : 
						   ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type)
						     ? 2U
						     : 0U)))))));
    vlTOPp->top__DOT__control__DOT__control_decode_io_branch 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)) 
	      & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)) 
		 & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type))));
    vlTOPp->top__DOT__branch_forward__DOT___T_196 = 
	((0U != (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_73));
    vlTOPp->top__DOT__branch_forward__DOT___T_171 = 
	((0U != (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_71));
    vlTOPp->top__DOT__branch_forward__DOT___T_85 = 
	((0U != (IData)(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_38));
    vlTOPp->top__DOT__branch_forward__DOT___T_37 = 
	((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_35) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_36));
    vlTOPp->top__DOT__branch_forward__DOT___T_66 = 
	((0U != (IData)(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_36));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__alu_control_io_output = ((0U 
						== (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_aluop_register))
					        ? (IData)(vlTOPp->top__DOT__alu_control__DOT___T_17)
					        : (
						   (4U 
						    == (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_aluop_register))
						    ? 0U
						    : 
						   ((1U 
						     == (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_aluop_register))
						     ? 
						    ((5U 
						      == (IData)(vlTOPp->top__DOT__ID_EX__DOT__func3_register))
						      ? (IData)(vlTOPp->top__DOT__alu_control__DOT___T_17)
						      : (IData)(vlTOPp->top__DOT__ID_EX__DOT__func3_register))
						     : 
						    ((5U 
						      == (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_aluop_register))
						      ? 0U
						      : 
						     ((2U 
						       == (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_aluop_register))
						       ? 
						      (0x10U 
						       | (IData)(vlTOPp->top__DOT__ID_EX__DOT__func3_register))
						       : 
						      ((3U 
							== (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_aluop_register))
						        ? 0x1fU
						        : 0U))))));
    vlTOPp->io_reg_out = vlTOPp->top__DOT__register_file_io_write_data;
    vlTOPp->top__DOT__data_memory_io_memory_out = (
						   ((IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memorywrite) 
						    & (~ (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memoryread)))
						    ? vlTOPp->top__DOT__data_memory__DOT__memory___05FT_23_data
						    : vlTOPp->top__DOT__data_memory__DOT__memory___05FT_24_data);
    vlTOPp->top__DOT__forward_unit__DOT___T_40 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_27) 
						  & (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_30));
    vlTOPp->top__DOT__forward_unit__DOT___T_29 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_27) 
						  & ((IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select) 
						     == (IData)(vlTOPp->top__DOT__ID_EX__DOT__rs1_select_register)));
    vlTOPp->top__DOT__hazard_detection_io_pc_forward 
	= ((IData)(vlTOPp->top__DOT__ID_EX__DOT__control_memoryread_register) 
	   & (IData)(vlTOPp->top__DOT__hazard_detection__DOT___T_31));
    vlTOPp->top__DOT__control__DOT__control_decode_io_extend_select 
	= ((0x33U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))
	    ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)
		     ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)
			      ? 1U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)
				       ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type)
					        ? 0U
					        : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type)
						     ? 0U
						     : 
						    ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type)
						      ? 2U
						      : 0U))))))));
    vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select 
	= ((0x33U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))
	    ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)
		     ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)
			      ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)
				       ? 1U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type)
					        ? 0U
					        : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type)
						    ? 3U
						    : 
						   ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type)
						     ? 2U
						     : 0U)))))));
    vlTOPp->top__DOT__control__DOT__control_decode_io_branch 
	= ((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
	   & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)) 
	      & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)) 
		 & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type))));
    vlTOPp->top__DOT__branch_forward__DOT___T_196 = 
	((0U != (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_73));
    vlTOPp->top__DOT__branch_forward__DOT___T_171 = 
	((0U != (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_71));
    vlTOPp->top__DOT__branch_forward__DOT___T_85 = 
	((0U != (IData)(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_38));
    vlTOPp->top__DOT__branch_forward__DOT___T_37 = 
	((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_35) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_36));
    vlTOPp->top__DOT__branch_forward__DOT___T_66 = 
	((0U != (IData)(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_36));
    vlTOPp->top__DOT__forward_unit__DOT___T_85 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_54) 
						  & (~ (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_40)));
    vlTOPp->top__DOT__forward_unit__DOT___T_31 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_29) 
						  & (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_30));
    vlTOPp->top__DOT___GEN_0 = ((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
				 ? vlTOPp->top__DOT__IF_ID__DOT__instruction_register
				 : vlTOPp->top__DOT__instruction_memory__DOT__memory___05FT_11_data);
    vlTOPp->top__DOT___GEN_1 = ((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
				 ? vlTOPp->top__DOT__IF_ID__DOT__pc_register
				 : vlTOPp->top__DOT__pc__DOT__register);
    vlTOPp->top__DOT__branch_forward__DOT___T_173 = 
	((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_171) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_73));
    vlTOPp->top__DOT__branch_forward__DOT___T_200 = 
	((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_159) 
	   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_85))) 
	  & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_196))) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_178));
    vlTOPp->top__DOT__branch_forward__DOT___T_267 = 
	((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_226) 
	   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_85))) 
	  & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_196))) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_178));
    vlTOPp->top__DOT__branch_forward__DOT___T_89 = 
	(((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_62) 
	  & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_85))) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_73));
    vlTOPp->top__DOT__branch_forward__DOT___T_136 = 
	(((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_109) 
	  & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_85))) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_73));
    vlTOPp->top__DOT__branch_forward__DOT___T_39 = 
	((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_37) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_38));
    vlTOPp->top__DOT__branch_forward__DOT___T_220 = 
	((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_159) 
	   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_66))) 
	  & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_171))) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_176));
    vlTOPp->top__DOT__branch_forward__DOT___T_103 = 
	(((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_62) 
	  & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_66))) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_71));
    vlTOPp->top__DOT__branch_forward__DOT___T_68 = 
	((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_66) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_38));
}

void Vtop::_settle__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__forward_unit__DOT___T_85 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_54) 
						  & (~ (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_40)));
    vlTOPp->top__DOT__forward_unit__DOT___T_31 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_29) 
						  & (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_30));
    vlTOPp->top__DOT___GEN_0 = ((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
				 ? vlTOPp->top__DOT__IF_ID__DOT__instruction_register
				 : vlTOPp->top__DOT__instruction_memory__DOT__memory___05FT_11_data);
    vlTOPp->top__DOT___GEN_1 = ((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
				 ? vlTOPp->top__DOT__IF_ID__DOT__pc_register
				 : vlTOPp->top__DOT__pc__DOT__register);
    vlTOPp->top__DOT__branch_forward__DOT___T_173 = 
	((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_171) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_73));
    vlTOPp->top__DOT__branch_forward__DOT___T_200 = 
	((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_159) 
	   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_85))) 
	  & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_196))) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_178));
    vlTOPp->top__DOT__branch_forward__DOT___T_267 = 
	((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_226) 
	   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_85))) 
	  & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_196))) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_178));
    vlTOPp->top__DOT__branch_forward__DOT___T_89 = 
	(((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_62) 
	  & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_85))) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_73));
    vlTOPp->top__DOT__branch_forward__DOT___T_136 = 
	(((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_109) 
	  & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_85))) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_73));
    vlTOPp->top__DOT__branch_forward__DOT___T_39 = 
	((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_37) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_38));
    vlTOPp->top__DOT__branch_forward__DOT___T_220 = 
	((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_159) 
	   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_66))) 
	  & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_171))) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_176));
    vlTOPp->top__DOT__branch_forward__DOT___T_103 = 
	(((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_62) 
	  & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_66))) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_71));
    vlTOPp->top__DOT__branch_forward__DOT___T_68 = 
	((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_66) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_38));
    vlTOPp->top__DOT__forward_unit__DOT___T_87 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_85) 
						  & (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_68));
    vlTOPp->top__DOT__forward_unit__DOT___GEN_3 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_31) 
						   | ((~ (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_40)) 
						      & (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_29)));
    vlTOPp->top__DOT__forward_unit__DOT___T_69 = ((
						   ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_54) 
						    & (~ (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_31))) 
						   & (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_66)) 
						  & (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_68));
    vlTOPp->top__DOT__branch_forward__DOT___GEN_4 = 
	((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_39) 
	 | ((~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_37)) 
	    & ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_35) 
	       & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_38))));
    vlTOPp->top__DOT__branch_forward__DOT___GEN_3 = 
	((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_39) 
	 | (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_37));
    vlTOPp->top__DOT__branch_forward__DOT___T_179 = 
	(((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_159) 
	    & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_68))) 
	   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_173))) 
	  & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_176)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_178));
    vlTOPp->top__DOT__branch_forward__DOT___T_246 = 
	(((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_226) 
	    & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_68))) 
	   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_173))) 
	  & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_176)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_178));
    vlTOPp->top__DOT__branch_forward__DOT___T_74 = 
	((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_62) 
	   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_68))) 
	  & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_71)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_73));
    vlTOPp->top__DOT__branch_forward__DOT___T_121 = 
	((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_109) 
	   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_68))) 
	  & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_71)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_73));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__forward_unit__DOT___T_87 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_85) 
						  & (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_68));
    vlTOPp->top__DOT__forward_unit__DOT___GEN_3 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_31) 
						   | ((~ (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_40)) 
						      & (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_29)));
    vlTOPp->top__DOT__forward_unit__DOT___T_69 = ((
						   ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_54) 
						    & (~ (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_31))) 
						   & (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_66)) 
						  & (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_68));
    vlTOPp->top__DOT__branch_forward__DOT___GEN_4 = 
	((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_39) 
	 | ((~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_37)) 
	    & ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_35) 
	       & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_38))));
    vlTOPp->top__DOT__branch_forward__DOT___GEN_3 = 
	((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_39) 
	 | (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_37));
    vlTOPp->top__DOT__branch_forward__DOT___T_179 = 
	(((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_159) 
	    & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_68))) 
	   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_173))) 
	  & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_176)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_178));
    vlTOPp->top__DOT__branch_forward__DOT___T_246 = 
	(((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_226) 
	    & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_68))) 
	   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_173))) 
	  & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_176)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_178));
    vlTOPp->top__DOT__branch_forward__DOT___T_74 = 
	((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_62) 
	   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_68))) 
	  & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_71)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_73));
    vlTOPp->top__DOT__branch_forward__DOT___T_121 = 
	((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_109) 
	   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_68))) 
	  & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_71)) 
	 & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_73));
    vlTOPp->top__DOT__forward_unit__DOT___GEN_8 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_69) 
						   | ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_87)
						       ? (IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_3)
						       : 
						      (((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_85) 
							& (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_66)) 
						       | (IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_3))));
    vlTOPp->top__DOT__forward_unit__DOT___GEN_9 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_69) 
						   | ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_87) 
						      | ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_31) 
							 | (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_40))));
    vlTOPp->top__DOT__branch_forward__DOT___GEN_15 
	= ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_74)
	    ? 2U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_89)
		     ? 2U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_103)
			      ? (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_4)
			      : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_121)
				  ? 4U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_136)
					   ? 4U : (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_4))))));
    vlTOPp->top__DOT__branch_forward__DOT___GEN_14 
	= ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_74)
	    ? 2U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_89)
		     ? (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_3)
		     : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_103)
			 ? 2U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_121)
				  ? 4U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_136)
					   ? (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_3)
					   : ((((((IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_branch) 
						  & (0U 
						     != (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select))) 
						 & (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memoryread)) 
						& (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_66))) 
					       & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_71))
					       ? 4U
					       : (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_3)))))));
}

void Vtop::_settle__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__forward_unit__DOT___GEN_8 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_69) 
						   | ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_87)
						       ? (IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_3)
						       : 
						      (((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_85) 
							& (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_66)) 
						       | (IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_3))));
    vlTOPp->top__DOT__forward_unit__DOT___GEN_9 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_69) 
						   | ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_87) 
						      | ((IData)(vlTOPp->top__DOT__forward_unit__DOT___T_31) 
							 | (IData)(vlTOPp->top__DOT__forward_unit__DOT___T_40))));
    vlTOPp->top__DOT__branch_forward__DOT___GEN_15 
	= ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_74)
	    ? 2U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_89)
		     ? 2U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_103)
			      ? (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_4)
			      : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_121)
				  ? 4U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_136)
					   ? 4U : (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_4))))));
    vlTOPp->top__DOT__branch_forward__DOT___GEN_14 
	= ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_74)
	    ? 2U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_89)
		     ? (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_3)
		     : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_103)
			 ? 2U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_121)
				  ? 4U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_136)
					   ? (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_3)
					   : ((((((IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_branch) 
						  & (0U 
						     != (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select))) 
						 & (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memoryread)) 
						& (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_66))) 
					       & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_71))
					       ? 4U
					       : (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_3)))))));
    vlTOPp->top__DOT__alu_io_operand_a = ((2U == (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_opa_select_register))
					   ? vlTOPp->top__DOT__ID_EX__DOT__pc4_register
					   : ((IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_8)
					       ? ((IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_8)
						   ? vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out
						   : 
						  ((2U 
						    == (IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_8))
						    ? vlTOPp->top__DOT__register_file_io_write_data
						    : vlTOPp->top__DOT__ID_EX__DOT__rs1_register))
					       : vlTOPp->top__DOT__ID_EX__DOT__rs1_register));
    vlTOPp->top__DOT___GEN_68 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_9)
				  ? ((IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_9)
				      ? vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out
				      : ((2U == (IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_9))
					  ? vlTOPp->top__DOT__register_file_io_write_data
					  : vlTOPp->top__DOT__ID_EX__DOT__rs2_register))
				  : vlTOPp->top__DOT__ID_EX__DOT__rs2_register);
    vlTOPp->top__DOT__branch_forward__DOT___GEN_34 
	= ((IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_branch)
	    ? ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_179)
	        ? 3U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_200)
			 ? 3U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_220)
				  ? (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_15)
				  : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_246)
				      ? 5U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_267)
					       ? 5U
					       : (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_15))))))
	    : 0U);
    vlTOPp->top__DOT__branch_forward_io_forward_rs1 
	= ((IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_branch)
	    ? ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_179)
	        ? 3U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_200)
			 ? (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_14)
			 : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_220)
			     ? 3U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_246)
				      ? 5U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_267)
					       ? (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_14)
					       : ((
						   (((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_226) 
						     & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_66))) 
						    & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_171))) 
						   & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_176))
						   ? 5U
						   : (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_14)))))))
	    : ((IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_branch)
	        ? 0U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_220)
			 ? 8U : ((((((0U != (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select)) 
				     & (1U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) 
				    & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_66))) 
				   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_171))) 
				  & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_176))
				  ? 0xaU : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_103)
					     ? 7U : 
					    ((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_109) 
					       & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_66))) 
					      & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_71))
					      ? 9U : 
					     ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_37)
					       ? 6U
					       : 0U)))))));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__alu_io_operand_a = ((2U == (IData)(vlTOPp->top__DOT__ID_EX__DOT__control_opa_select_register))
					   ? vlTOPp->top__DOT__ID_EX__DOT__pc4_register
					   : ((IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_8)
					       ? ((IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_8)
						   ? vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out
						   : 
						  ((2U 
						    == (IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_8))
						    ? vlTOPp->top__DOT__register_file_io_write_data
						    : vlTOPp->top__DOT__ID_EX__DOT__rs1_register))
					       : vlTOPp->top__DOT__ID_EX__DOT__rs1_register));
    vlTOPp->top__DOT___GEN_68 = ((IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_9)
				  ? ((IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_9)
				      ? vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out
				      : ((2U == (IData)(vlTOPp->top__DOT__forward_unit__DOT___GEN_9))
					  ? vlTOPp->top__DOT__register_file_io_write_data
					  : vlTOPp->top__DOT__ID_EX__DOT__rs2_register))
				  : vlTOPp->top__DOT__ID_EX__DOT__rs2_register);
    vlTOPp->top__DOT__branch_forward__DOT___GEN_34 
	= ((IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_branch)
	    ? ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_179)
	        ? 3U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_200)
			 ? 3U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_220)
				  ? (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_15)
				  : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_246)
				      ? 5U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_267)
					       ? 5U
					       : (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_15))))))
	    : 0U);
    vlTOPp->top__DOT__branch_forward_io_forward_rs1 
	= ((IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_branch)
	    ? ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_179)
	        ? 3U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_200)
			 ? (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_14)
			 : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_220)
			     ? 3U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_246)
				      ? 5U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_267)
					       ? (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_14)
					       : ((
						   (((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_226) 
						     & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_66))) 
						    & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_171))) 
						   & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_176))
						   ? 5U
						   : (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_14)))))))
	    : ((IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_branch)
	        ? 0U : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_220)
			 ? 8U : ((((((0U != (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select)) 
				     & (1U == (IData)(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select))) 
				    & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_66))) 
				   & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_171))) 
				  & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_176))
				  ? 0xaU : ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_103)
					     ? 7U : 
					    ((((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_109) 
					       & (~ (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_66))) 
					      & (IData)(vlTOPp->top__DOT__branch_forward__DOT___T_71))
					      ? 9U : 
					     ((IData)(vlTOPp->top__DOT__branch_forward__DOT___T_37)
					       ? 6U
					       : 0U)))))));
    vlTOPp->top__DOT__alu_io_operand_b = ((IData)(vlTOPp->top__DOT__ID_EX__DOT__control_opb_select_register)
					   ? vlTOPp->top__DOT__ID_EX__DOT__immediate_register
					   : vlTOPp->top__DOT___GEN_68);
}

void Vtop::_settle__TOP__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__9\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__alu_io_operand_b = ((IData)(vlTOPp->top__DOT__ID_EX__DOT__control_opb_select_register)
					   ? vlTOPp->top__DOT__ID_EX__DOT__immediate_register
					   : vlTOPp->top__DOT___GEN_68);
    vlTOPp->top__DOT__alu__DOT___T_26 = VL_LTS_III(1,32,32, vlTOPp->top__DOT__alu_io_operand_a, vlTOPp->top__DOT__alu_io_operand_b);
    vlTOPp->top__DOT__alu__DOT___T_65 = (vlTOPp->top__DOT__alu_io_operand_a 
					 == vlTOPp->top__DOT__alu_io_operand_b);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__10\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__alu__DOT___T_26 = VL_LTS_III(1,32,32, vlTOPp->top__DOT__alu_io_operand_a, vlTOPp->top__DOT__alu_io_operand_b);
    vlTOPp->top__DOT__alu__DOT___T_65 = (vlTOPp->top__DOT__alu_io_operand_a 
					 == vlTOPp->top__DOT__alu_io_operand_b);
    vlTOPp->top__DOT__alu__DOT___GEN_19 = ((2U == (IData)(vlTOPp->top__DOT__alu_control_io_output))
					    ? ((0xfffffffcU 
						& (VL_NEGATE_I((IData)(
								       (1U 
									& (((IData)(vlTOPp->top__DOT__alu__DOT___T_26)
									     ? 1U
									     : 0U) 
									   >> 1U)))) 
						   << 2U)) 
					       | ((IData)(vlTOPp->top__DOT__alu__DOT___T_26)
						   ? 1U
						   : 0U))
					    : (((3U 
						 == (IData)(vlTOPp->top__DOT__alu_control_io_output)) 
						| (0x16U 
						   == (IData)(vlTOPp->top__DOT__alu_control_io_output)))
					        ? (
						   (0xfffffffcU 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (((vlTOPp->top__DOT__alu_io_operand_a 
										< vlTOPp->top__DOT__alu_io_operand_b)
										 ? 1U
										 : 0U) 
									       >> 1U)))) 
						       << 2U)) 
						   | ((vlTOPp->top__DOT__alu_io_operand_a 
						       < vlTOPp->top__DOT__alu_io_operand_b)
						       ? 1U
						       : 0U))
					        : (
						   (4U 
						    == (IData)(vlTOPp->top__DOT__alu_control_io_output))
						    ? 
						   (vlTOPp->top__DOT__alu_io_operand_a 
						    ^ vlTOPp->top__DOT__alu_io_operand_b)
						    : 
						   (((5U 
						      == (IData)(vlTOPp->top__DOT__alu_control_io_output)) 
						     | (0xdU 
							== (IData)(vlTOPp->top__DOT__alu_control_io_output)))
						     ? 
						    VL_SHIFTRS_III(32,32,5, vlTOPp->top__DOT__alu_io_operand_a, 
								   (0x1fU 
								    & vlTOPp->top__DOT__alu_io_operand_b))
						     : 
						    ((6U 
						      == (IData)(vlTOPp->top__DOT__alu_control_io_output))
						      ? 
						     (vlTOPp->top__DOT__alu_io_operand_a 
						      | vlTOPp->top__DOT__alu_io_operand_b)
						      : 
						     ((7U 
						       == (IData)(vlTOPp->top__DOT__alu_control_io_output))
						       ? 
						      (vlTOPp->top__DOT__alu_io_operand_a 
						       & vlTOPp->top__DOT__alu_io_operand_b)
						       : 
						      ((8U 
							== (IData)(vlTOPp->top__DOT__alu_control_io_output))
						        ? 
						       (vlTOPp->top__DOT__alu_io_operand_a 
							- vlTOPp->top__DOT__alu_io_operand_b)
						        : 
						       ((0x10U 
							 == (IData)(vlTOPp->top__DOT__alu_control_io_output))
							 ? 
							((0xfffffffcU 
							  & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->top__DOT__alu__DOT___T_65)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							     << 2U)) 
							 | ((IData)(vlTOPp->top__DOT__alu__DOT___T_65)
							     ? 1U
							     : 0U))
							 : 
							((0x11U 
							  == (IData)(vlTOPp->top__DOT__alu_control_io_output))
							  ? 
							 ((0xfffffffcU 
							   & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->top__DOT__alu__DOT___T_65)
										 ? 0U
										 : 1U) 
										>> 1U)))) 
							      << 2U)) 
							  | ((IData)(vlTOPp->top__DOT__alu__DOT___T_65)
							      ? 0U
							      : 1U))
							  : 
							 ((0x14U 
							   == (IData)(vlTOPp->top__DOT__alu_control_io_output))
							   ? 
							  ((0xfffffffcU 
							    & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->top__DOT__alu__DOT___T_26)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							       << 2U)) 
							   | ((IData)(vlTOPp->top__DOT__alu__DOT___T_26)
							       ? 1U
							       : 0U))
							   : 
							  ((0x15U 
							    == (IData)(vlTOPp->top__DOT__alu_control_io_output))
							    ? 
							   ((0xfffffffcU 
							     & (VL_NEGATE_I((IData)(
										(1U 
										& ((VL_GTES_III(1,32,32, vlTOPp->top__DOT__alu_io_operand_a, vlTOPp->top__DOT__alu_io_operand_b)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								<< 2U)) 
							    | (VL_GTES_III(1,32,32, vlTOPp->top__DOT__alu_io_operand_a, vlTOPp->top__DOT__alu_io_operand_b)
							        ? 1U
							        : 0U))
							    : 
							   ((0x17U 
							     == (IData)(vlTOPp->top__DOT__alu_control_io_output))
							     ? 
							    ((0xfffffffcU 
							      & (VL_NEGATE_I((IData)(
										(1U 
										& (((vlTOPp->top__DOT__alu_io_operand_a 
										>= vlTOPp->top__DOT__alu_io_operand_b)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								 << 2U)) 
							     | ((vlTOPp->top__DOT__alu_io_operand_a 
								 >= vlTOPp->top__DOT__alu_io_operand_b)
								 ? 1U
								 : 0U))
							     : vlTOPp->top__DOT__alu_io_operand_a))))))))))));
}

void Vtop::_settle__TOP__11(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__11\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__alu__DOT___GEN_19 = ((2U == (IData)(vlTOPp->top__DOT__alu_control_io_output))
					    ? ((0xfffffffcU 
						& (VL_NEGATE_I((IData)(
								       (1U 
									& (((IData)(vlTOPp->top__DOT__alu__DOT___T_26)
									     ? 1U
									     : 0U) 
									   >> 1U)))) 
						   << 2U)) 
					       | ((IData)(vlTOPp->top__DOT__alu__DOT___T_26)
						   ? 1U
						   : 0U))
					    : (((3U 
						 == (IData)(vlTOPp->top__DOT__alu_control_io_output)) 
						| (0x16U 
						   == (IData)(vlTOPp->top__DOT__alu_control_io_output)))
					        ? (
						   (0xfffffffcU 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (((vlTOPp->top__DOT__alu_io_operand_a 
										< vlTOPp->top__DOT__alu_io_operand_b)
										 ? 1U
										 : 0U) 
									       >> 1U)))) 
						       << 2U)) 
						   | ((vlTOPp->top__DOT__alu_io_operand_a 
						       < vlTOPp->top__DOT__alu_io_operand_b)
						       ? 1U
						       : 0U))
					        : (
						   (4U 
						    == (IData)(vlTOPp->top__DOT__alu_control_io_output))
						    ? 
						   (vlTOPp->top__DOT__alu_io_operand_a 
						    ^ vlTOPp->top__DOT__alu_io_operand_b)
						    : 
						   (((5U 
						      == (IData)(vlTOPp->top__DOT__alu_control_io_output)) 
						     | (0xdU 
							== (IData)(vlTOPp->top__DOT__alu_control_io_output)))
						     ? 
						    VL_SHIFTRS_III(32,32,5, vlTOPp->top__DOT__alu_io_operand_a, 
								   (0x1fU 
								    & vlTOPp->top__DOT__alu_io_operand_b))
						     : 
						    ((6U 
						      == (IData)(vlTOPp->top__DOT__alu_control_io_output))
						      ? 
						     (vlTOPp->top__DOT__alu_io_operand_a 
						      | vlTOPp->top__DOT__alu_io_operand_b)
						      : 
						     ((7U 
						       == (IData)(vlTOPp->top__DOT__alu_control_io_output))
						       ? 
						      (vlTOPp->top__DOT__alu_io_operand_a 
						       & vlTOPp->top__DOT__alu_io_operand_b)
						       : 
						      ((8U 
							== (IData)(vlTOPp->top__DOT__alu_control_io_output))
						        ? 
						       (vlTOPp->top__DOT__alu_io_operand_a 
							- vlTOPp->top__DOT__alu_io_operand_b)
						        : 
						       ((0x10U 
							 == (IData)(vlTOPp->top__DOT__alu_control_io_output))
							 ? 
							((0xfffffffcU 
							  & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->top__DOT__alu__DOT___T_65)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							     << 2U)) 
							 | ((IData)(vlTOPp->top__DOT__alu__DOT___T_65)
							     ? 1U
							     : 0U))
							 : 
							((0x11U 
							  == (IData)(vlTOPp->top__DOT__alu_control_io_output))
							  ? 
							 ((0xfffffffcU 
							   & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->top__DOT__alu__DOT___T_65)
										 ? 0U
										 : 1U) 
										>> 1U)))) 
							      << 2U)) 
							  | ((IData)(vlTOPp->top__DOT__alu__DOT___T_65)
							      ? 0U
							      : 1U))
							  : 
							 ((0x14U 
							   == (IData)(vlTOPp->top__DOT__alu_control_io_output))
							   ? 
							  ((0xfffffffcU 
							    & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->top__DOT__alu__DOT___T_26)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							       << 2U)) 
							   | ((IData)(vlTOPp->top__DOT__alu__DOT___T_26)
							       ? 1U
							       : 0U))
							   : 
							  ((0x15U 
							    == (IData)(vlTOPp->top__DOT__alu_control_io_output))
							    ? 
							   ((0xfffffffcU 
							     & (VL_NEGATE_I((IData)(
										(1U 
										& ((VL_GTES_III(1,32,32, vlTOPp->top__DOT__alu_io_operand_a, vlTOPp->top__DOT__alu_io_operand_b)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								<< 2U)) 
							    | (VL_GTES_III(1,32,32, vlTOPp->top__DOT__alu_io_operand_a, vlTOPp->top__DOT__alu_io_operand_b)
							        ? 1U
							        : 0U))
							    : 
							   ((0x17U 
							     == (IData)(vlTOPp->top__DOT__alu_control_io_output))
							     ? 
							    ((0xfffffffcU 
							      & (VL_NEGATE_I((IData)(
										(1U 
										& (((vlTOPp->top__DOT__alu_io_operand_a 
										>= vlTOPp->top__DOT__alu_io_operand_b)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								 << 2U)) 
							     | ((vlTOPp->top__DOT__alu_io_operand_a 
								 >= vlTOPp->top__DOT__alu_io_operand_b)
								 ? 1U
								 : 0U))
							     : vlTOPp->top__DOT__alu_io_operand_a))))))))))));
    vlTOPp->top__DOT__alu__DOT___GEN_21 = (VL_ULL(0x7fffffffffffffff) 
					   & ((0U == (IData)(vlTOPp->top__DOT__alu_control_io_output))
					       ? (((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& ((vlTOPp->top__DOT__alu_io_operand_a 
										+ vlTOPp->top__DOT__alu_io_operand_b) 
										>> 0x1fU))))))) 
						   << 0x20U) 
						  | (QData)((IData)(
								    (vlTOPp->top__DOT__alu_io_operand_a 
								     + vlTOPp->top__DOT__alu_io_operand_b))))
					       : ((1U 
						   == (IData)(vlTOPp->top__DOT__alu_control_io_output))
						   ? 
						  ((((QData)((IData)(
								     (0x7fffffffU 
								      & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top__DOT__alu_io_operand_a 
										>> 0x1fU))))))) 
						     << 0x20U) 
						    | (QData)((IData)(vlTOPp->top__DOT__alu_io_operand_a))) 
						   << 
						   (0x1fU 
						    & vlTOPp->top__DOT__alu_io_operand_b))
						   : 
						  (((QData)((IData)(
								    (0x7fffffffU 
								     & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top__DOT__alu__DOT___GEN_19 
										>> 0x1fU))))))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->top__DOT__alu__DOT___GEN_19))))));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__12(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__12\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__alu__DOT___GEN_21 = (VL_ULL(0x7fffffffffffffff) 
					   & ((0U == (IData)(vlTOPp->top__DOT__alu_control_io_output))
					       ? (((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& ((vlTOPp->top__DOT__alu_io_operand_a 
										+ vlTOPp->top__DOT__alu_io_operand_b) 
										>> 0x1fU))))))) 
						   << 0x20U) 
						  | (QData)((IData)(
								    (vlTOPp->top__DOT__alu_io_operand_a 
								     + vlTOPp->top__DOT__alu_io_operand_b))))
					       : ((1U 
						   == (IData)(vlTOPp->top__DOT__alu_control_io_output))
						   ? 
						  ((((QData)((IData)(
								     (0x7fffffffU 
								      & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top__DOT__alu_io_operand_a 
										>> 0x1fU))))))) 
						     << 0x20U) 
						    | (QData)((IData)(vlTOPp->top__DOT__alu_io_operand_a))) 
						   << 
						   (0x1fU 
						    & vlTOPp->top__DOT__alu_io_operand_b))
						   : 
						  (((QData)((IData)(
								    (0x7fffffffU 
								     & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->top__DOT__alu__DOT___GEN_19 
										>> 0x1fU))))))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->top__DOT__alu__DOT___GEN_19))))));
    vlTOPp->top__DOT__jalr_io_input_a = ((0U == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
					  ? vlTOPp->top__DOT__register_file_io_rs1
					  : ((1U == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
					      ? vlTOPp->top__DOT__register_file_io_rs1
					      : ((2U 
						  == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						  ? vlTOPp->top__DOT__register_file_io_rs1
						  : 
						 ((3U 
						   == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						   ? vlTOPp->top__DOT__register_file_io_rs1
						   : 
						  ((4U 
						    == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						    ? vlTOPp->top__DOT__register_file_io_rs1
						    : 
						   ((5U 
						     == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						     ? vlTOPp->top__DOT__register_file_io_rs1
						     : 
						    ((6U 
						      == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						      ? (IData)(vlTOPp->top__DOT__alu__DOT___GEN_21)
						      : 
						     ((7U 
						       == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						       ? (IData)(vlTOPp->top__DOT__alu__DOT___GEN_21)
						       : 
						      ((8U 
							== (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						        ? vlTOPp->top__DOT__register_file_io_write_data
						        : 
						       ((9U 
							 == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
							 ? vlTOPp->top__DOT__data_memory_io_memory_out
							 : 
							((0xaU 
							  == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
							  ? vlTOPp->top__DOT__register_file_io_write_data
							  : vlTOPp->top__DOT__register_file_io_rs1)))))))))));
    vlTOPp->top__DOT__branch_logic_io_rs1 = ((0U == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
					      ? vlTOPp->top__DOT__register_file_io_rs1
					      : ((1U 
						  == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						  ? (IData)(vlTOPp->top__DOT__alu__DOT___GEN_21)
						  : 
						 ((2U 
						   == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						   ? vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out
						   : 
						  ((3U 
						    == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						    ? vlTOPp->top__DOT__register_file_io_write_data
						    : 
						   ((4U 
						     == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						     ? vlTOPp->top__DOT__data_memory_io_memory_out
						     : 
						    ((5U 
						      == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						      ? vlTOPp->top__DOT__register_file_io_write_data
						      : vlTOPp->top__DOT__register_file_io_rs1))))));
    vlTOPp->top__DOT__branch_logic_io_rs2 = ((0U == (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_34))
					      ? vlTOPp->top__DOT__register_file_io_rs2
					      : ((1U 
						  == (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_34))
						  ? (IData)(vlTOPp->top__DOT__alu__DOT___GEN_21)
						  : 
						 ((2U 
						   == (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_34))
						   ? vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out
						   : 
						  ((3U 
						    == (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_34))
						    ? vlTOPp->top__DOT__register_file_io_write_data
						    : 
						   ((4U 
						     == (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_34))
						     ? vlTOPp->top__DOT__data_memory_io_memory_out
						     : 
						    ((5U 
						      == (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_34))
						      ? vlTOPp->top__DOT__register_file_io_write_data
						      : vlTOPp->top__DOT__register_file_io_rs2))))));
}

void Vtop::_settle__TOP__13(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__13\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__jalr_io_input_a = ((0U == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
					  ? vlTOPp->top__DOT__register_file_io_rs1
					  : ((1U == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
					      ? vlTOPp->top__DOT__register_file_io_rs1
					      : ((2U 
						  == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						  ? vlTOPp->top__DOT__register_file_io_rs1
						  : 
						 ((3U 
						   == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						   ? vlTOPp->top__DOT__register_file_io_rs1
						   : 
						  ((4U 
						    == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						    ? vlTOPp->top__DOT__register_file_io_rs1
						    : 
						   ((5U 
						     == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						     ? vlTOPp->top__DOT__register_file_io_rs1
						     : 
						    ((6U 
						      == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						      ? (IData)(vlTOPp->top__DOT__alu__DOT___GEN_21)
						      : 
						     ((7U 
						       == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						       ? (IData)(vlTOPp->top__DOT__alu__DOT___GEN_21)
						       : 
						      ((8U 
							== (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						        ? vlTOPp->top__DOT__register_file_io_write_data
						        : 
						       ((9U 
							 == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
							 ? vlTOPp->top__DOT__data_memory_io_memory_out
							 : 
							((0xaU 
							  == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
							  ? vlTOPp->top__DOT__register_file_io_write_data
							  : vlTOPp->top__DOT__register_file_io_rs1)))))))))));
    vlTOPp->top__DOT__branch_logic_io_rs1 = ((0U == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
					      ? vlTOPp->top__DOT__register_file_io_rs1
					      : ((1U 
						  == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						  ? (IData)(vlTOPp->top__DOT__alu__DOT___GEN_21)
						  : 
						 ((2U 
						   == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						   ? vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out
						   : 
						  ((3U 
						    == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						    ? vlTOPp->top__DOT__register_file_io_write_data
						    : 
						   ((4U 
						     == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						     ? vlTOPp->top__DOT__data_memory_io_memory_out
						     : 
						    ((5U 
						      == (IData)(vlTOPp->top__DOT__branch_forward_io_forward_rs1))
						      ? vlTOPp->top__DOT__register_file_io_write_data
						      : vlTOPp->top__DOT__register_file_io_rs1))))));
    vlTOPp->top__DOT__branch_logic_io_rs2 = ((0U == (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_34))
					      ? vlTOPp->top__DOT__register_file_io_rs2
					      : ((1U 
						  == (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_34))
						  ? (IData)(vlTOPp->top__DOT__alu__DOT___GEN_21)
						  : 
						 ((2U 
						   == (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_34))
						   ? vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out
						   : 
						  ((3U 
						    == (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_34))
						    ? vlTOPp->top__DOT__register_file_io_write_data
						    : 
						   ((4U 
						     == (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_34))
						     ? vlTOPp->top__DOT__data_memory_io_memory_out
						     : 
						    ((5U 
						      == (IData)(vlTOPp->top__DOT__branch_forward__DOT___GEN_34))
						      ? vlTOPp->top__DOT__register_file_io_write_data
						      : vlTOPp->top__DOT__register_file_io_rs2))))));
    vlTOPp->top__DOT___T_18 = (((0U == (7U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					      >> 0xcU)))
				 ? (vlTOPp->top__DOT__branch_logic_io_rs1 
				    == vlTOPp->top__DOT__branch_logic_io_rs2)
				 : ((1U == (7U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						  >> 0xcU)))
				     ? (vlTOPp->top__DOT__branch_logic_io_rs1 
					!= vlTOPp->top__DOT__branch_logic_io_rs2)
				     : ((4U == (7U 
						& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						   >> 0xcU)))
					 ? VL_LTS_III(1,32,32, vlTOPp->top__DOT__branch_logic_io_rs1, vlTOPp->top__DOT__branch_logic_io_rs2)
					 : ((5U == 
					     (7U & 
					      (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					       >> 0xcU)))
					     ? VL_GTES_III(1,32,32, vlTOPp->top__DOT__branch_logic_io_rs1, vlTOPp->top__DOT__branch_logic_io_rs2)
					     : ((6U 
						 == 
						 (7U 
						  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						     >> 0xcU)))
						 ? 
						(vlTOPp->top__DOT__branch_logic_io_rs1 
						 < vlTOPp->top__DOT__branch_logic_io_rs2)
						 : 
						((7U 
						  == 
						  (7U 
						   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						      >> 0xcU))) 
						 & (vlTOPp->top__DOT__branch_logic_io_rs1 
						    >= vlTOPp->top__DOT__branch_logic_io_rs2))))))) 
			       & (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_branch));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__14(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__14\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT___T_18 = (((0U == (7U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					      >> 0xcU)))
				 ? (vlTOPp->top__DOT__branch_logic_io_rs1 
				    == vlTOPp->top__DOT__branch_logic_io_rs2)
				 : ((1U == (7U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						  >> 0xcU)))
				     ? (vlTOPp->top__DOT__branch_logic_io_rs1 
					!= vlTOPp->top__DOT__branch_logic_io_rs2)
				     : ((4U == (7U 
						& (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						   >> 0xcU)))
					 ? VL_LTS_III(1,32,32, vlTOPp->top__DOT__branch_logic_io_rs1, vlTOPp->top__DOT__branch_logic_io_rs2)
					 : ((5U == 
					     (7U & 
					      (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					       >> 0xcU)))
					     ? VL_GTES_III(1,32,32, vlTOPp->top__DOT__branch_logic_io_rs1, vlTOPp->top__DOT__branch_logic_io_rs2)
					     : ((6U 
						 == 
						 (7U 
						  & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						     >> 0xcU)))
						 ? 
						(vlTOPp->top__DOT__branch_logic_io_rs1 
						 < vlTOPp->top__DOT__branch_logic_io_rs2)
						 : 
						((7U 
						  == 
						  (7U 
						   & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						      >> 0xcU))) 
						 & (vlTOPp->top__DOT__branch_logic_io_rs1 
						    >= vlTOPp->top__DOT__branch_logic_io_rs2))))))) 
			       & (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_branch));
    vlTOPp->top__DOT__pc_io_in = ((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
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
						  + vlTOPp->top__DOT__pc__DOT__register)))));
}

void Vtop::_settle__TOP__15(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__15\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__pc_io_in = ((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
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
						  + vlTOPp->top__DOT__pc__DOT__register)))));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->_sequent__TOP__10(vlSymsp);
	vlTOPp->_sequent__TOP__12(vlSymsp);
	vlTOPp->_sequent__TOP__14(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void Vtop::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlTOPp->_settle__TOP__13(vlSymsp);
    vlTOPp->_settle__TOP__15(vlSymsp);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_reg_out = VL_RAND_RESET_I(32);
    top__DOT__register_file_io_write_data = VL_RAND_RESET_I(32);
    top__DOT__register_file_io_rs1 = VL_RAND_RESET_I(32);
    top__DOT__register_file_io_rs2 = VL_RAND_RESET_I(32);
    top__DOT__alu_io_operand_a = VL_RAND_RESET_I(32);
    top__DOT__alu_io_operand_b = VL_RAND_RESET_I(32);
    top__DOT__alu_control_io_output = VL_RAND_RESET_I(5);
    top__DOT__jalr_io_input_a = VL_RAND_RESET_I(32);
    top__DOT__pc_io_in = VL_RAND_RESET_I(32);
    top__DOT__data_memory_io_memory_out = VL_RAND_RESET_I(32);
    top__DOT__hazard_detection_io_pc_forward = VL_RAND_RESET_I(1);
    top__DOT__branch_logic_io_rs1 = VL_RAND_RESET_I(32);
    top__DOT__branch_logic_io_rs2 = VL_RAND_RESET_I(32);
    top__DOT__branch_forward_io_forward_rs1 = VL_RAND_RESET_I(4);
    top__DOT___GEN_0 = VL_RAND_RESET_I(32);
    top__DOT___GEN_1 = VL_RAND_RESET_I(32);
    top__DOT___T_18 = VL_RAND_RESET_I(1);
    top__DOT___GEN_68 = VL_RAND_RESET_I(32);
    top__DOT__control__DOT__instruction_type_decode_io_load_type = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__instruction_type_decode_io_s_type = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__instruction_type_decode_io_sb_type = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__instruction_type_decode_io_i_type = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__instruction_type_decode_io_jalr_type = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__instruction_type_decode_io_jal_type = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__instruction_type_decode_io_lui_type = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__control_decode_io_branch = VL_RAND_RESET_I(1);
    top__DOT__control__DOT__control_decode_io_extend_select = VL_RAND_RESET_I(2);
    top__DOT__control__DOT__control_decode_io_next_pc_select = VL_RAND_RESET_I(2);
    top__DOT__register_file__DOT__registers_0 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_1 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_2 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_3 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_4 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_5 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_6 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_7 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_8 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_9 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_10 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_11 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_12 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_13 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_14 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_15 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_16 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_17 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_18 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_19 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_20 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_21 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_22 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_23 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_24 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_25 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_26 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_27 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_28 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_29 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_30 = VL_RAND_RESET_I(32);
    top__DOT__register_file__DOT__registers_31 = VL_RAND_RESET_I(32);
    top__DOT__alu__DOT___T_26 = VL_RAND_RESET_I(1);
    top__DOT__alu__DOT___T_65 = VL_RAND_RESET_I(1);
    top__DOT__alu__DOT___GEN_19 = VL_RAND_RESET_I(32);
    top__DOT__alu__DOT___GEN_21 = VL_RAND_RESET_Q(63);
    top__DOT__alu_control__DOT___T_17 = VL_RAND_RESET_I(5);
    top__DOT__immediate_generation__DOT__i_immediate_32 = VL_RAND_RESET_I(32);
    top__DOT__immediate_generation__DOT___T_41 = VL_RAND_RESET_I(32);
    top__DOT__immediate_generation__DOT___T_62 = VL_RAND_RESET_I(32);
    top__DOT__pc__DOT__register = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    top__DOT__instruction_memory__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__instruction_memory__DOT__memory___05FT_11_data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    top__DOT__data_memory__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__data_memory__DOT__memory___05FT_23_data = VL_RAND_RESET_I(32);
    top__DOT__data_memory__DOT__memory___05FT_24_data = VL_RAND_RESET_I(32);
    top__DOT__IF_ID__DOT__pc_register = VL_RAND_RESET_I(32);
    top__DOT__IF_ID__DOT__pc4_register = VL_RAND_RESET_I(32);
    top__DOT__IF_ID__DOT__instruction_register = VL_RAND_RESET_I(32);
    top__DOT__ID_EX__DOT__pc4_register = VL_RAND_RESET_I(32);
    top__DOT__ID_EX__DOT__rs1_register = VL_RAND_RESET_I(32);
    top__DOT__ID_EX__DOT__rs2_register = VL_RAND_RESET_I(32);
    top__DOT__ID_EX__DOT__immediate_register = VL_RAND_RESET_I(32);
    top__DOT__ID_EX__DOT__rd_select_register = VL_RAND_RESET_I(5);
    top__DOT__ID_EX__DOT__rs1_select_register = VL_RAND_RESET_I(5);
    top__DOT__ID_EX__DOT__rs2_select_register = VL_RAND_RESET_I(5);
    top__DOT__ID_EX__DOT__func3_register = VL_RAND_RESET_I(3);
    top__DOT__ID_EX__DOT__func7_register = VL_RAND_RESET_I(1);
    top__DOT__ID_EX__DOT__control_memorywrite_register = VL_RAND_RESET_I(1);
    top__DOT__ID_EX__DOT__control_memoryread_register = VL_RAND_RESET_I(1);
    top__DOT__ID_EX__DOT__control_registerwrite_register = VL_RAND_RESET_I(1);
    top__DOT__ID_EX__DOT__control_memorytoregister_register = VL_RAND_RESET_I(1);
    top__DOT__ID_EX__DOT__control_aluop_register = VL_RAND_RESET_I(3);
    top__DOT__ID_EX__DOT__control_opa_select_register = VL_RAND_RESET_I(2);
    top__DOT__ID_EX__DOT__control_opb_select_register = VL_RAND_RESET_I(1);
    top__DOT__EX_MEM__DOT__register_memorywrite = VL_RAND_RESET_I(1);
    top__DOT__EX_MEM__DOT__register_memoryread = VL_RAND_RESET_I(1);
    top__DOT__EX_MEM__DOT__register_registerwrite = VL_RAND_RESET_I(1);
    top__DOT__EX_MEM__DOT__register_memorytoregister = VL_RAND_RESET_I(1);
    top__DOT__EX_MEM__DOT__register_rs2 = VL_RAND_RESET_I(32);
    top__DOT__EX_MEM__DOT__register_rd_select = VL_RAND_RESET_I(5);
    top__DOT__EX_MEM__DOT__register_alu_out = VL_RAND_RESET_I(32);
    top__DOT__MEM_WB__DOT__register_registerwrite = VL_RAND_RESET_I(1);
    top__DOT__MEM_WB__DOT__register_memorytoregister = VL_RAND_RESET_I(1);
    top__DOT__MEM_WB__DOT__register_memoryread = VL_RAND_RESET_I(1);
    top__DOT__MEM_WB__DOT__register_rd_select = VL_RAND_RESET_I(5);
    top__DOT__MEM_WB__DOT__register_datamemory_data = VL_RAND_RESET_I(32);
    top__DOT__MEM_WB__DOT__register_alu = VL_RAND_RESET_I(32);
    top__DOT__forward_unit__DOT___T_27 = VL_RAND_RESET_I(1);
    top__DOT__forward_unit__DOT___T_29 = VL_RAND_RESET_I(1);
    top__DOT__forward_unit__DOT___T_30 = VL_RAND_RESET_I(1);
    top__DOT__forward_unit__DOT___T_31 = VL_RAND_RESET_I(1);
    top__DOT__forward_unit__DOT___T_40 = VL_RAND_RESET_I(1);
    top__DOT__forward_unit__DOT___GEN_3 = VL_RAND_RESET_I(1);
    top__DOT__forward_unit__DOT___T_54 = VL_RAND_RESET_I(1);
    top__DOT__forward_unit__DOT___T_66 = VL_RAND_RESET_I(1);
    top__DOT__forward_unit__DOT___T_68 = VL_RAND_RESET_I(1);
    top__DOT__forward_unit__DOT___T_69 = VL_RAND_RESET_I(1);
    top__DOT__forward_unit__DOT___T_85 = VL_RAND_RESET_I(1);
    top__DOT__forward_unit__DOT___T_87 = VL_RAND_RESET_I(1);
    top__DOT__forward_unit__DOT___GEN_8 = VL_RAND_RESET_I(1);
    top__DOT__forward_unit__DOT___GEN_9 = VL_RAND_RESET_I(1);
    top__DOT__hazard_detection__DOT___T_31 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_35 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_36 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_37 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_38 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_39 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___GEN_3 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___GEN_4 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_62 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_66 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_68 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_71 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_73 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_74 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_85 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_89 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_103 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_109 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_121 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_136 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___GEN_14 = VL_RAND_RESET_I(3);
    top__DOT__branch_forward__DOT___GEN_15 = VL_RAND_RESET_I(3);
    top__DOT__branch_forward__DOT___T_159 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_171 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_173 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_176 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_178 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_179 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_196 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_200 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_220 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_226 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_246 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___T_267 = VL_RAND_RESET_I(1);
    top__DOT__branch_forward__DOT___GEN_34 = VL_RAND_RESET_I(3);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Vtop::_configure_coverage(Vtop__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
