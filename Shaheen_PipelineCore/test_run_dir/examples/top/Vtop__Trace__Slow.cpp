// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vtop::traceInit, &Vtop::traceFull, &Vtop::traceChg, this);
}
void Vtop::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vtop::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vtop::traceInitThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vtop::traceFullThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceInitThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+151,"clock",-1);
	vcdp->declBit  (c+152,"reset",-1);
	vcdp->declBus  (c+153,"io_reg_out",-1,31,0);
	vcdp->declBit  (c+151,"top clock",-1);
	vcdp->declBit  (c+152,"top reset",-1);
	vcdp->declBus  (c+153,"top io_reg_out",-1,31,0);
	vcdp->declBus  (c+57,"top control_io_opcode",-1,6,0);
	vcdp->declBit  (c+1,"top control_io_memory_write",-1);
	vcdp->declBit  (c+2,"top control_io_branch",-1);
	vcdp->declBit  (c+3,"top control_io_memory_read",-1);
	vcdp->declBit  (c+4,"top control_io_register_write",-1);
	vcdp->declBit  (c+3,"top control_io_memory_to_register",-1);
	vcdp->declBus  (c+5,"top control_io_alu_op",-1,2,0);
	vcdp->declBus  (c+6,"top control_io_operand_a_select",-1,1,0);
	vcdp->declBit  (c+7,"top control_io_operand_b_select",-1);
	vcdp->declBus  (c+8,"top control_io_extend_select",-1,1,0);
	vcdp->declBus  (c+9,"top control_io_next_pc_select",-1,1,0);
	vcdp->declBit  (c+151,"top register_file_clock",-1);
	vcdp->declBit  (c+152,"top register_file_reset",-1);
	vcdp->declBit  (c+58,"top register_file_io_register_write",-1);
	vcdp->declBus  (c+59,"top register_file_io_rd_select",-1,4,0);
	vcdp->declBus  (c+60,"top register_file_io_rs1_select",-1,4,0);
	vcdp->declBus  (c+61,"top register_file_io_rs2_select",-1,4,0);
	vcdp->declBus  (c+10,"top register_file_io_write_data",-1,31,0);
	vcdp->declBus  (c+11,"top register_file_io_rs1",-1,31,0);
	vcdp->declBus  (c+12,"top register_file_io_rs2",-1,31,0);
	vcdp->declBus  (c+13,"top alu_io_operand_a",-1,31,0);
	vcdp->declBus  (c+14,"top alu_io_operand_b",-1,31,0);
	vcdp->declBus  (c+15,"top alu_io_alu_control",-1,4,0);
	vcdp->declBus  (c+16,"top alu_io_output",-1,31,0);
	vcdp->declBus  (c+62,"top alu_control_io_alu_op",-1,2,0);
	vcdp->declBit  (c+63,"top alu_control_io_func7",-1);
	vcdp->declBus  (c+64,"top alu_control_io_func3",-1,2,0);
	vcdp->declBus  (c+15,"top alu_control_io_output",-1,4,0);
	vcdp->declBus  (c+65,"top immediate_generation_io_instruction",-1,31,0);
	vcdp->declBus  (c+66,"top immediate_generation_io_pc",-1,31,0);
	vcdp->declBus  (c+67,"top immediate_generation_io_s_immediate",-1,31,0);
	vcdp->declBus  (c+17,"top immediate_generation_io_sb_immediate",-1,31,0);
	vcdp->declBus  (c+68,"top immediate_generation_io_u_immediate",-1,31,0);
	vcdp->declBus  (c+18,"top immediate_generation_io_uj_immediate",-1,31,0);
	vcdp->declBus  (c+19,"top immediate_generation_io_i_immediate",-1,31,0);
	vcdp->declBus  (c+20,"top jalr_io_input_a",-1,31,0);
	vcdp->declBus  (c+19,"top jalr_io_input_b",-1,31,0);
	vcdp->declBus  (c+21,"top jalr_io_output",-1,31,0);
	vcdp->declBit  (c+151,"top pc_clock",-1);
	vcdp->declBit  (c+152,"top pc_reset",-1);
	vcdp->declBus  (c+22,"top pc_io_in",-1,31,0);
	vcdp->declBus  (c+69,"top pc_io_out",-1,31,0);
	vcdp->declBus  (c+70,"top pc_io_pc4",-1,31,0);
	vcdp->declBit  (c+151,"top instruction_memory_clock",-1);
	vcdp->declBus  (c+71,"top instruction_memory_io_write_address",-1,9,0);
	vcdp->declBus  (c+23,"top instruction_memory_io_read_data",-1,31,0);
	vcdp->declBit  (c+151,"top data_memory_clock",-1);
	vcdp->declBit  (c+72,"top data_memory_io_memory_write",-1);
	vcdp->declBit  (c+73,"top data_memory_io_memory_read",-1);
	vcdp->declBus  (c+74,"top data_memory_io_memory_address",-1,9,0);
	vcdp->declBus  (c+75,"top data_memory_io_memory_data",-1,31,0);
	vcdp->declBus  (c+24,"top data_memory_io_memory_out",-1,31,0);
	vcdp->declBit  (c+151,"top IF_ID_clock",-1);
	vcdp->declBit  (c+152,"top IF_ID_reset",-1);
	vcdp->declBus  (c+25,"top IF_ID_io_pc_in",-1,31,0);
	vcdp->declBus  (c+26,"top IF_ID_io_pc4_in",-1,31,0);
	vcdp->declBus  (c+27,"top IF_ID_io_instruction_in",-1,31,0);
	vcdp->declBus  (c+66,"top IF_ID_io_pc_out",-1,31,0);
	vcdp->declBus  (c+76,"top IF_ID_io_pc4_out",-1,31,0);
	vcdp->declBus  (c+65,"top IF_ID_io_instruction_out",-1,31,0);
	vcdp->declBit  (c+151,"top ID_EX_clock",-1);
	vcdp->declBit  (c+152,"top ID_EX_reset",-1);
	vcdp->declBus  (c+76,"top ID_EX_io_pc4_in",-1,31,0);
	vcdp->declBus  (c+60,"top ID_EX_io_rs1_select_in",-1,4,0);
	vcdp->declBus  (c+61,"top ID_EX_io_rs2_select_in",-1,4,0);
	vcdp->declBus  (c+11,"top ID_EX_io_rs1_in",-1,31,0);
	vcdp->declBus  (c+12,"top ID_EX_io_rs2_in",-1,31,0);
	vcdp->declBus  (c+28,"top ID_EX_io_immediate_in",-1,31,0);
	vcdp->declBus  (c+77,"top ID_EX_io_rd_select_in",-1,4,0);
	vcdp->declBus  (c+78,"top ID_EX_io_func3_in",-1,2,0);
	vcdp->declBit  (c+79,"top ID_EX_io_func7_in",-1);
	vcdp->declBit  (c+29,"top ID_EX_io_control_memorywrite_in",-1);
	vcdp->declBit  (c+30,"top ID_EX_io_control_memoryread_in",-1);
	vcdp->declBit  (c+31,"top ID_EX_io_control_registerwrite_in",-1);
	vcdp->declBit  (c+30,"top ID_EX_io_control_memorytoregister_in",-1);
	vcdp->declBus  (c+32,"top ID_EX_io_control_aluop_in",-1,2,0);
	vcdp->declBus  (c+33,"top ID_EX_io_control_opa_select_in",-1,1,0);
	vcdp->declBit  (c+34,"top ID_EX_io_control_opb_select_in",-1);
	vcdp->declBus  (c+80,"top ID_EX_io_pc4_out",-1,31,0);
	vcdp->declBus  (c+81,"top ID_EX_io_rs1_out",-1,31,0);
	vcdp->declBus  (c+82,"top ID_EX_io_rs2_out",-1,31,0);
	vcdp->declBus  (c+83,"top ID_EX_io_immediate_out",-1,31,0);
	vcdp->declBus  (c+64,"top ID_EX_io_func3_out",-1,2,0);
	vcdp->declBit  (c+63,"top ID_EX_io_func7_out",-1);
	vcdp->declBus  (c+84,"top ID_EX_io_rd_select_out",-1,4,0);
	vcdp->declBus  (c+85,"top ID_EX_io_rs1_select_out",-1,4,0);
	vcdp->declBus  (c+86,"top ID_EX_io_rs2_select_out",-1,4,0);
	vcdp->declBit  (c+87,"top ID_EX_io_control_memorywrite_out",-1);
	vcdp->declBit  (c+88,"top ID_EX_io_control_memoryread_out",-1);
	vcdp->declBit  (c+89,"top ID_EX_io_control_registerwrite_out",-1);
	vcdp->declBit  (c+90,"top ID_EX_io_control_memorytoregister_out",-1);
	vcdp->declBus  (c+62,"top ID_EX_io_control_aluop_out",-1,2,0);
	vcdp->declBus  (c+91,"top ID_EX_io_control_opa_select_out",-1,1,0);
	vcdp->declBit  (c+92,"top ID_EX_io_control_opb_select_out",-1);
	vcdp->declBit  (c+151,"top EX_MEM_clock",-1);
	vcdp->declBit  (c+152,"top EX_MEM_reset",-1);
	vcdp->declBit  (c+87,"top EX_MEM_io_memorywrite",-1);
	vcdp->declBit  (c+88,"top EX_MEM_io_memoryread",-1);
	vcdp->declBit  (c+89,"top EX_MEM_io_registerwrite",-1);
	vcdp->declBit  (c+90,"top EX_MEM_io_memorytoregister",-1);
	vcdp->declBus  (c+35,"top EX_MEM_io_rs2_in",-1,31,0);
	vcdp->declBus  (c+84,"top EX_MEM_io_rd_select",-1,4,0);
	vcdp->declBus  (c+16,"top EX_MEM_io_alu_out_in",-1,31,0);
	vcdp->declBit  (c+72,"top EX_MEM_io_memorywrite_out",-1);
	vcdp->declBit  (c+73,"top EX_MEM_io_memoryread_out",-1);
	vcdp->declBit  (c+93,"top EX_MEM_io_registerwrite_out",-1);
	vcdp->declBit  (c+94,"top EX_MEM_io_memorytoregister_out",-1);
	vcdp->declBus  (c+75,"top EX_MEM_io_rs2_out",-1,31,0);
	vcdp->declBus  (c+95,"top EX_MEM_io_rd_select_out",-1,4,0);
	vcdp->declBus  (c+96,"top EX_MEM_io_alu_out",-1,31,0);
	vcdp->declBit  (c+151,"top MEM_WB_clock",-1);
	vcdp->declBit  (c+152,"top MEM_WB_reset",-1);
	vcdp->declBit  (c+93,"top MEM_WB_io_registerwrite",-1);
	vcdp->declBit  (c+94,"top MEM_WB_io_memorytoregister",-1);
	vcdp->declBus  (c+95,"top MEM_WB_io_rd_select",-1,4,0);
	vcdp->declBit  (c+73,"top MEM_WB_io_memoryread",-1);
	vcdp->declBus  (c+24,"top MEM_WB_io_datamemory_data_in",-1,31,0);
	vcdp->declBus  (c+96,"top MEM_WB_io_alu_out_in",-1,31,0);
	vcdp->declBit  (c+58,"top MEM_WB_io_registerwrite_out",-1);
	vcdp->declBit  (c+97,"top MEM_WB_io_memorytoregister_out",-1);
	vcdp->declBit  (c+98,"top MEM_WB_io_memoryread_out",-1);
	vcdp->declBus  (c+59,"top MEM_WB_io_rd_select_out",-1,4,0);
	vcdp->declBus  (c+99,"top MEM_WB_io_datamemory_data_out",-1,31,0);
	vcdp->declBus  (c+100,"top MEM_WB_io_alu_out",-1,31,0);
	vcdp->declBus  (c+95,"top forward_unit_io_EX_MEM_registerrd",-1,4,0);
	vcdp->declBus  (c+59,"top forward_unit_io_MEM_WB_registerrd",-1,4,0);
	vcdp->declBus  (c+85,"top forward_unit_io_ID_EX_registerrs1",-1,4,0);
	vcdp->declBus  (c+86,"top forward_unit_io_ID_EX_registerrs2",-1,4,0);
	vcdp->declBit  (c+93,"top forward_unit_io_EX_MEM_registerwrite",-1);
	vcdp->declBit  (c+58,"top forward_unit_io_MEM_WB_registerwrite",-1);
	vcdp->declBus  (c+36,"top forward_unit_io_forward_a",-1,1,0);
	vcdp->declBus  (c+37,"top forward_unit_io_forward_b",-1,1,0);
	vcdp->declBus  (c+76,"top hazard_detection_io_pc_in",-1,31,0);
	vcdp->declBus  (c+66,"top hazard_detection_io_current_pc",-1,31,0);
	vcdp->declBit  (c+88,"top hazard_detection_io_ID_EX_memoryread",-1);
	vcdp->declBus  (c+65,"top hazard_detection_io_IF_ID_instruction",-1,31,0);
	vcdp->declBus  (c+84,"top hazard_detection_io_ID_EX_registerrd",-1,4,0);
	vcdp->declBit  (c+38,"top hazard_detection_io_instruction_forward",-1);
	vcdp->declBit  (c+38,"top hazard_detection_io_pc_forward",-1);
	vcdp->declBit  (c+38,"top hazard_detection_io_control_forward",-1);
	vcdp->declBus  (c+65,"top hazard_detection_io_instruction_out",-1,31,0);
	vcdp->declBus  (c+76,"top hazard_detection_io_pc_out",-1,31,0);
	vcdp->declBus  (c+66,"top hazard_detection_io_current_pc_out",-1,31,0);
	vcdp->declBus  (c+39,"top branch_logic_io_rs1",-1,31,0);
	vcdp->declBus  (c+40,"top branch_logic_io_rs2",-1,31,0);
	vcdp->declBus  (c+78,"top branch_logic_io_func3",-1,2,0);
	vcdp->declBit  (c+41,"top branch_logic_io_output",-1);
	vcdp->declBus  (c+84,"top branch_forward_io_ID_EX_registerrd",-1,4,0);
	vcdp->declBit  (c+88,"top branch_forward_io_ID_EX_memoryread",-1);
	vcdp->declBus  (c+95,"top branch_forward_io_EX_MEM_registerrd",-1,4,0);
	vcdp->declBit  (c+73,"top branch_forward_io_EX_MEM_memoryread",-1);
	vcdp->declBus  (c+59,"top branch_forward_io_MEM_WB_registerrd",-1,4,0);
	vcdp->declBit  (c+98,"top branch_forward_io_MEM_WB_memoryread",-1);
	vcdp->declBus  (c+60,"top branch_forward_io_rs1_select",-1,4,0);
	vcdp->declBus  (c+61,"top branch_forward_io_rs2_select",-1,4,0);
	vcdp->declBit  (c+2,"top branch_forward_io_control_branch",-1);
	vcdp->declBus  (c+42,"top branch_forward_io_forward_rs1",-1,3,0);
	vcdp->declBus  (c+43,"top branch_forward_io_forward_rs2",-1,3,0);
	// Tracing: top _T_9 // Ignored: Inlined leading underscore at top.v:2948
	// Tracing: top _GEN_0 // Ignored: Inlined leading underscore at top.v:2949
	// Tracing: top _GEN_1 // Ignored: Inlined leading underscore at top.v:2950
	// Tracing: top _T_11 // Ignored: Inlined leading underscore at top.v:2951
	// Tracing: top _T_13 // Ignored: Inlined leading underscore at top.v:2952
	// Tracing: top _T_15 // Ignored: Inlined leading underscore at top.v:2953
	// Tracing: top _T_17 // Ignored: Inlined leading underscore at top.v:2954
	// Tracing: top _T_18 // Ignored: Inlined leading underscore at top.v:2955
	// Tracing: top _GEN_2 // Ignored: Inlined leading underscore at top.v:2956
	// Tracing: top _GEN_3 // Ignored: Inlined leading underscore at top.v:2957
	// Tracing: top _GEN_4 // Ignored: Inlined leading underscore at top.v:2958
	// Tracing: top _GEN_5 // Ignored: Inlined leading underscore at top.v:2959
	// Tracing: top _T_23 // Ignored: Inlined leading underscore at top.v:2960
	// Tracing: top _T_28 // Ignored: Inlined leading underscore at top.v:2961
	// Tracing: top _GEN_6 // Ignored: Inlined leading underscore at top.v:2962
	// Tracing: top _GEN_7 // Ignored: Inlined leading underscore at top.v:2963
	// Tracing: top _GEN_8 // Ignored: Inlined leading underscore at top.v:2964
	// Tracing: top _GEN_9 // Ignored: Inlined leading underscore at top.v:2965
	// Tracing: top _GEN_10 // Ignored: Inlined leading underscore at top.v:2966
	// Tracing: top _GEN_11 // Ignored: Inlined leading underscore at top.v:2967
	// Tracing: top _GEN_12 // Ignored: Inlined leading underscore at top.v:2968
	// Tracing: top _GEN_13 // Ignored: Inlined leading underscore at top.v:2969
	// Tracing: top _GEN_14 // Ignored: Inlined leading underscore at top.v:2970
	// Tracing: top _GEN_15 // Ignored: Inlined leading underscore at top.v:2971
	// Tracing: top _GEN_16 // Ignored: Inlined leading underscore at top.v:2972
	// Tracing: top _GEN_17 // Ignored: Inlined leading underscore at top.v:2973
	// Tracing: top _T_38 // Ignored: Inlined leading underscore at top.v:2974
	// Tracing: top _T_40 // Ignored: Inlined leading underscore at top.v:2975
	// Tracing: top _T_42 // Ignored: Inlined leading underscore at top.v:2976
	// Tracing: top _GEN_22 // Ignored: Inlined leading underscore at top.v:2977
	// Tracing: top _GEN_23 // Ignored: Inlined leading underscore at top.v:2978
	// Tracing: top _T_51 // Ignored: Inlined leading underscore at top.v:2979
	// Tracing: top _T_53 // Ignored: Inlined leading underscore at top.v:2980
	// Tracing: top _T_55 // Ignored: Inlined leading underscore at top.v:2981
	// Tracing: top _T_57 // Ignored: Inlined leading underscore at top.v:2982
	// Tracing: top _T_59 // Ignored: Inlined leading underscore at top.v:2983
	// Tracing: top _T_61 // Ignored: Inlined leading underscore at top.v:2984
	// Tracing: top _T_63 // Ignored: Inlined leading underscore at top.v:2985
	// Tracing: top _T_65 // Ignored: Inlined leading underscore at top.v:2986
	// Tracing: top _T_67 // Ignored: Inlined leading underscore at top.v:2987
	// Tracing: top _T_69 // Ignored: Inlined leading underscore at top.v:2988
	// Tracing: top _T_71 // Ignored: Inlined leading underscore at top.v:2989
	// Tracing: top _GEN_25 // Ignored: Inlined leading underscore at top.v:2990
	// Tracing: top _GEN_26 // Ignored: Inlined leading underscore at top.v:2991
	// Tracing: top _GEN_27 // Ignored: Inlined leading underscore at top.v:2992
	// Tracing: top _GEN_28 // Ignored: Inlined leading underscore at top.v:2993
	// Tracing: top _GEN_29 // Ignored: Inlined leading underscore at top.v:2994
	// Tracing: top _GEN_30 // Ignored: Inlined leading underscore at top.v:2995
	// Tracing: top _GEN_31 // Ignored: Inlined leading underscore at top.v:2996
	// Tracing: top _GEN_32 // Ignored: Inlined leading underscore at top.v:2997
	// Tracing: top _GEN_33 // Ignored: Inlined leading underscore at top.v:2998
	// Tracing: top _GEN_34 // Ignored: Inlined leading underscore at top.v:2999
	// Tracing: top _GEN_35 // Ignored: Inlined leading underscore at top.v:3000
	// Tracing: top _GEN_36 // Ignored: Inlined leading underscore at top.v:3001
	// Tracing: top _GEN_37 // Ignored: Inlined leading underscore at top.v:3002
	// Tracing: top _GEN_38 // Ignored: Inlined leading underscore at top.v:3003
	// Tracing: top _GEN_39 // Ignored: Inlined leading underscore at top.v:3004
	// Tracing: top _GEN_40 // Ignored: Inlined leading underscore at top.v:3005
	// Tracing: top _GEN_41 // Ignored: Inlined leading underscore at top.v:3006
	// Tracing: top _GEN_42 // Ignored: Inlined leading underscore at top.v:3007
	// Tracing: top _GEN_43 // Ignored: Inlined leading underscore at top.v:3008
	// Tracing: top _GEN_44 // Ignored: Inlined leading underscore at top.v:3009
	// Tracing: top _T_73 // Ignored: Inlined leading underscore at top.v:3010
	// Tracing: top _T_75 // Ignored: Inlined leading underscore at top.v:3011
	// Tracing: top _T_77 // Ignored: Inlined leading underscore at top.v:3012
	// Tracing: top _T_79 // Ignored: Inlined leading underscore at top.v:3013
	// Tracing: top _T_81 // Ignored: Inlined leading underscore at top.v:3014
	// Tracing: top _T_83 // Ignored: Inlined leading underscore at top.v:3015
	// Tracing: top _GEN_47 // Ignored: Inlined leading underscore at top.v:3016
	// Tracing: top _GEN_48 // Ignored: Inlined leading underscore at top.v:3017
	// Tracing: top _GEN_49 // Ignored: Inlined leading underscore at top.v:3018
	// Tracing: top _GEN_50 // Ignored: Inlined leading underscore at top.v:3019
	// Tracing: top _GEN_51 // Ignored: Inlined leading underscore at top.v:3020
	// Tracing: top _T_85 // Ignored: Inlined leading underscore at top.v:3021
	// Tracing: top _T_96 // Ignored: Inlined leading underscore at top.v:3022
	// Tracing: top _T_98 // Ignored: Inlined leading underscore at top.v:3023
	// Tracing: top _T_100 // Ignored: Inlined leading underscore at top.v:3024
	// Tracing: top _T_102 // Ignored: Inlined leading underscore at top.v:3025
	// Tracing: top _GEN_62 // Ignored: Inlined leading underscore at top.v:3026
	// Tracing: top _GEN_63 // Ignored: Inlined leading underscore at top.v:3027
	// Tracing: top _GEN_64 // Ignored: Inlined leading underscore at top.v:3028
	// Tracing: top _T_104 // Ignored: Inlined leading underscore at top.v:3029
	// Tracing: top _T_106 // Ignored: Inlined leading underscore at top.v:3030
	// Tracing: top _T_108 // Ignored: Inlined leading underscore at top.v:3031
	// Tracing: top _T_110 // Ignored: Inlined leading underscore at top.v:3032
	// Tracing: top _GEN_66 // Ignored: Inlined leading underscore at top.v:3033
	// Tracing: top _GEN_67 // Ignored: Inlined leading underscore at top.v:3034
	// Tracing: top _GEN_68 // Ignored: Inlined leading underscore at top.v:3035
	// Tracing: top _T_119 // Ignored: Inlined leading underscore at top.v:3036
	vcdp->declBus  (c+57,"top control io_opcode",-1,6,0);
	vcdp->declBit  (c+1,"top control io_memory_write",-1);
	vcdp->declBit  (c+2,"top control io_branch",-1);
	vcdp->declBit  (c+3,"top control io_memory_read",-1);
	vcdp->declBit  (c+4,"top control io_register_write",-1);
	vcdp->declBit  (c+3,"top control io_memory_to_register",-1);
	vcdp->declBus  (c+5,"top control io_alu_op",-1,2,0);
	vcdp->declBus  (c+6,"top control io_operand_a_select",-1,1,0);
	vcdp->declBit  (c+7,"top control io_operand_b_select",-1);
	vcdp->declBus  (c+8,"top control io_extend_select",-1,1,0);
	vcdp->declBus  (c+9,"top control io_next_pc_select",-1,1,0);
	vcdp->declBus  (c+57,"top control instruction_type_decode_io_opcode",-1,6,0);
	vcdp->declBit  (c+101,"top control instruction_type_decode_io_r_type",-1);
	vcdp->declBit  (c+44,"top control instruction_type_decode_io_load_type",-1);
	vcdp->declBit  (c+45,"top control instruction_type_decode_io_s_type",-1);
	vcdp->declBit  (c+46,"top control instruction_type_decode_io_sb_type",-1);
	vcdp->declBit  (c+47,"top control instruction_type_decode_io_i_type",-1);
	vcdp->declBit  (c+48,"top control instruction_type_decode_io_jalr_type",-1);
	vcdp->declBit  (c+49,"top control instruction_type_decode_io_jal_type",-1);
	vcdp->declBit  (c+50,"top control instruction_type_decode_io_lui_type",-1);
	vcdp->declBit  (c+101,"top control control_decode_io_r_type",-1);
	vcdp->declBit  (c+44,"top control control_decode_io_load_type",-1);
	vcdp->declBit  (c+45,"top control control_decode_io_s_type",-1);
	vcdp->declBit  (c+46,"top control control_decode_io_sb_type",-1);
	vcdp->declBit  (c+47,"top control control_decode_io_i_type",-1);
	vcdp->declBit  (c+48,"top control control_decode_io_jalr_type",-1);
	vcdp->declBit  (c+49,"top control control_decode_io_jal_type",-1);
	vcdp->declBit  (c+50,"top control control_decode_io_lui_type",-1);
	vcdp->declBit  (c+1,"top control control_decode_io_memory_write",-1);
	vcdp->declBit  (c+2,"top control control_decode_io_branch",-1);
	vcdp->declBit  (c+3,"top control control_decode_io_memory_read",-1);
	vcdp->declBit  (c+4,"top control control_decode_io_register_write",-1);
	vcdp->declBit  (c+3,"top control control_decode_io_memory_to_register",-1);
	vcdp->declBus  (c+5,"top control control_decode_io_alu_op",-1,2,0);
	vcdp->declBus  (c+6,"top control control_decode_io_operand_a_select",-1,1,0);
	vcdp->declBit  (c+7,"top control control_decode_io_operand_b_select",-1);
	vcdp->declBus  (c+8,"top control control_decode_io_extend_select",-1,1,0);
	vcdp->declBus  (c+9,"top control control_decode_io_next_pc_select",-1,1,0);
	vcdp->declBus  (c+57,"top control instruction_type_decode io_opcode",-1,6,0);
	vcdp->declBit  (c+101,"top control instruction_type_decode io_r_type",-1);
	vcdp->declBit  (c+44,"top control instruction_type_decode io_load_type",-1);
	vcdp->declBit  (c+45,"top control instruction_type_decode io_s_type",-1);
	vcdp->declBit  (c+46,"top control instruction_type_decode io_sb_type",-1);
	vcdp->declBit  (c+47,"top control instruction_type_decode io_i_type",-1);
	vcdp->declBit  (c+48,"top control instruction_type_decode io_jalr_type",-1);
	vcdp->declBit  (c+49,"top control instruction_type_decode io_jal_type",-1);
	vcdp->declBit  (c+50,"top control instruction_type_decode io_lui_type",-1);
	// Tracing: top control instruction_type_decode _T_32 // Ignored: Inlined leading underscore at top.v:12
	// Tracing: top control instruction_type_decode _T_35 // Ignored: Inlined leading underscore at top.v:13
	// Tracing: top control instruction_type_decode _T_38 // Ignored: Inlined leading underscore at top.v:14
	// Tracing: top control instruction_type_decode _T_41 // Ignored: Inlined leading underscore at top.v:15
	// Tracing: top control instruction_type_decode _T_44 // Ignored: Inlined leading underscore at top.v:16
	// Tracing: top control instruction_type_decode _T_47 // Ignored: Inlined leading underscore at top.v:17
	// Tracing: top control instruction_type_decode _T_50 // Ignored: Inlined leading underscore at top.v:18
	// Tracing: top control instruction_type_decode _T_53 // Ignored: Inlined leading underscore at top.v:19
	// Tracing: top control instruction_type_decode _GEN_3 // Ignored: Inlined leading underscore at top.v:20
	// Tracing: top control instruction_type_decode _GEN_6 // Ignored: Inlined leading underscore at top.v:21
	// Tracing: top control instruction_type_decode _GEN_7 // Ignored: Inlined leading underscore at top.v:22
	// Tracing: top control instruction_type_decode _GEN_10 // Ignored: Inlined leading underscore at top.v:23
	// Tracing: top control instruction_type_decode _GEN_11 // Ignored: Inlined leading underscore at top.v:24
	// Tracing: top control instruction_type_decode _GEN_12 // Ignored: Inlined leading underscore at top.v:25
	// Tracing: top control instruction_type_decode _GEN_15 // Ignored: Inlined leading underscore at top.v:26
	// Tracing: top control instruction_type_decode _GEN_16 // Ignored: Inlined leading underscore at top.v:27
	// Tracing: top control instruction_type_decode _GEN_17 // Ignored: Inlined leading underscore at top.v:28
	// Tracing: top control instruction_type_decode _GEN_18 // Ignored: Inlined leading underscore at top.v:29
	// Tracing: top control instruction_type_decode _GEN_21 // Ignored: Inlined leading underscore at top.v:30
	// Tracing: top control instruction_type_decode _GEN_22 // Ignored: Inlined leading underscore at top.v:31
	// Tracing: top control instruction_type_decode _GEN_23 // Ignored: Inlined leading underscore at top.v:32
	// Tracing: top control instruction_type_decode _GEN_24 // Ignored: Inlined leading underscore at top.v:33
	// Tracing: top control instruction_type_decode _GEN_25 // Ignored: Inlined leading underscore at top.v:34
	// Tracing: top control instruction_type_decode _GEN_28 // Ignored: Inlined leading underscore at top.v:35
	// Tracing: top control instruction_type_decode _GEN_29 // Ignored: Inlined leading underscore at top.v:36
	// Tracing: top control instruction_type_decode _GEN_30 // Ignored: Inlined leading underscore at top.v:37
	// Tracing: top control instruction_type_decode _GEN_31 // Ignored: Inlined leading underscore at top.v:38
	// Tracing: top control instruction_type_decode _GEN_32 // Ignored: Inlined leading underscore at top.v:39
	// Tracing: top control instruction_type_decode _GEN_33 // Ignored: Inlined leading underscore at top.v:40
	vcdp->declBit  (c+101,"top control control_decode io_r_type",-1);
	vcdp->declBit  (c+44,"top control control_decode io_load_type",-1);
	vcdp->declBit  (c+45,"top control control_decode io_s_type",-1);
	vcdp->declBit  (c+46,"top control control_decode io_sb_type",-1);
	vcdp->declBit  (c+47,"top control control_decode io_i_type",-1);
	vcdp->declBit  (c+48,"top control control_decode io_jalr_type",-1);
	vcdp->declBit  (c+49,"top control control_decode io_jal_type",-1);
	vcdp->declBit  (c+50,"top control control_decode io_lui_type",-1);
	vcdp->declBit  (c+1,"top control control_decode io_memory_write",-1);
	vcdp->declBit  (c+2,"top control control_decode io_branch",-1);
	vcdp->declBit  (c+3,"top control control_decode io_memory_read",-1);
	vcdp->declBit  (c+4,"top control control_decode io_register_write",-1);
	vcdp->declBit  (c+3,"top control control_decode io_memory_to_register",-1);
	vcdp->declBus  (c+5,"top control control_decode io_alu_op",-1,2,0);
	vcdp->declBus  (c+6,"top control control_decode io_operand_a_select",-1,1,0);
	vcdp->declBit  (c+7,"top control control_decode io_operand_b_select",-1);
	vcdp->declBus  (c+8,"top control control_decode io_extend_select",-1,1,0);
	vcdp->declBus  (c+9,"top control control_decode io_next_pc_select",-1,1,0);
	// Tracing: top control control_decode _GEN_2 // Ignored: Inlined leading underscore at top.v:99
	// Tracing: top control control_decode _GEN_3 // Ignored: Inlined leading underscore at top.v:100
	// Tracing: top control control_decode _GEN_4 // Ignored: Inlined leading underscore at top.v:101
	// Tracing: top control control_decode _GEN_6 // Ignored: Inlined leading underscore at top.v:102
	// Tracing: top control control_decode _GEN_7 // Ignored: Inlined leading underscore at top.v:103
	// Tracing: top control control_decode _GEN_8 // Ignored: Inlined leading underscore at top.v:104
	// Tracing: top control control_decode _GEN_9 // Ignored: Inlined leading underscore at top.v:105
	// Tracing: top control control_decode _GEN_10 // Ignored: Inlined leading underscore at top.v:106
	// Tracing: top control control_decode _GEN_11 // Ignored: Inlined leading underscore at top.v:107
	// Tracing: top control control_decode _GEN_13 // Ignored: Inlined leading underscore at top.v:108
	// Tracing: top control control_decode _GEN_14 // Ignored: Inlined leading underscore at top.v:109
	// Tracing: top control control_decode _GEN_15 // Ignored: Inlined leading underscore at top.v:110
	// Tracing: top control control_decode _GEN_16 // Ignored: Inlined leading underscore at top.v:111
	// Tracing: top control control_decode _GEN_17 // Ignored: Inlined leading underscore at top.v:112
	// Tracing: top control control_decode _GEN_18 // Ignored: Inlined leading underscore at top.v:113
	// Tracing: top control control_decode _GEN_20 // Ignored: Inlined leading underscore at top.v:114
	// Tracing: top control control_decode _GEN_21 // Ignored: Inlined leading underscore at top.v:115
	// Tracing: top control control_decode _GEN_22 // Ignored: Inlined leading underscore at top.v:116
	// Tracing: top control control_decode _GEN_23 // Ignored: Inlined leading underscore at top.v:117
	// Tracing: top control control_decode _GEN_24 // Ignored: Inlined leading underscore at top.v:118
	// Tracing: top control control_decode _GEN_25 // Ignored: Inlined leading underscore at top.v:119
	// Tracing: top control control_decode _GEN_28 // Ignored: Inlined leading underscore at top.v:120
	// Tracing: top control control_decode _GEN_29 // Ignored: Inlined leading underscore at top.v:121
	// Tracing: top control control_decode _GEN_30 // Ignored: Inlined leading underscore at top.v:122
	// Tracing: top control control_decode _GEN_31 // Ignored: Inlined leading underscore at top.v:123
	// Tracing: top control control_decode _GEN_32 // Ignored: Inlined leading underscore at top.v:124
	// Tracing: top control control_decode _GEN_33 // Ignored: Inlined leading underscore at top.v:125
	// Tracing: top control control_decode _GEN_35 // Ignored: Inlined leading underscore at top.v:126
	// Tracing: top control control_decode _GEN_37 // Ignored: Inlined leading underscore at top.v:127
	// Tracing: top control control_decode _GEN_38 // Ignored: Inlined leading underscore at top.v:128
	// Tracing: top control control_decode _GEN_39 // Ignored: Inlined leading underscore at top.v:129
	// Tracing: top control control_decode _GEN_40 // Ignored: Inlined leading underscore at top.v:130
	// Tracing: top control control_decode _GEN_41 // Ignored: Inlined leading underscore at top.v:131
	// Tracing: top control control_decode _GEN_42 // Ignored: Inlined leading underscore at top.v:132
	// Tracing: top control control_decode _GEN_43 // Ignored: Inlined leading underscore at top.v:133
	// Tracing: top control control_decode _GEN_44 // Ignored: Inlined leading underscore at top.v:134
	// Tracing: top control control_decode _GEN_46 // Ignored: Inlined leading underscore at top.v:135
	// Tracing: top control control_decode _GEN_47 // Ignored: Inlined leading underscore at top.v:136
	// Tracing: top control control_decode _GEN_48 // Ignored: Inlined leading underscore at top.v:137
	// Tracing: top control control_decode _GEN_49 // Ignored: Inlined leading underscore at top.v:138
	// Tracing: top control control_decode _GEN_50 // Ignored: Inlined leading underscore at top.v:139
	// Tracing: top control control_decode _GEN_51 // Ignored: Inlined leading underscore at top.v:140
	vcdp->declBit  (c+151,"top register_file clock",-1);
	vcdp->declBit  (c+152,"top register_file reset",-1);
	vcdp->declBit  (c+58,"top register_file io_register_write",-1);
	vcdp->declBus  (c+59,"top register_file io_rd_select",-1,4,0);
	vcdp->declBus  (c+60,"top register_file io_rs1_select",-1,4,0);
	vcdp->declBus  (c+61,"top register_file io_rs2_select",-1,4,0);
	vcdp->declBus  (c+10,"top register_file io_write_data",-1,31,0);
	vcdp->declBus  (c+11,"top register_file io_rs1",-1,31,0);
	vcdp->declBus  (c+12,"top register_file io_rs2",-1,31,0);
	vcdp->declBus  (c+102,"top register_file registers_0",-1,31,0);
	// Tracing: top register_file _RAND_0 // Ignored: Inlined leading underscore at top.v:297
	vcdp->declBus  (c+103,"top register_file registers_1",-1,31,0);
	// Tracing: top register_file _RAND_1 // Ignored: Inlined leading underscore at top.v:299
	vcdp->declBus  (c+104,"top register_file registers_2",-1,31,0);
	// Tracing: top register_file _RAND_2 // Ignored: Inlined leading underscore at top.v:301
	vcdp->declBus  (c+105,"top register_file registers_3",-1,31,0);
	// Tracing: top register_file _RAND_3 // Ignored: Inlined leading underscore at top.v:303
	vcdp->declBus  (c+106,"top register_file registers_4",-1,31,0);
	// Tracing: top register_file _RAND_4 // Ignored: Inlined leading underscore at top.v:305
	vcdp->declBus  (c+107,"top register_file registers_5",-1,31,0);
	// Tracing: top register_file _RAND_5 // Ignored: Inlined leading underscore at top.v:307
	vcdp->declBus  (c+108,"top register_file registers_6",-1,31,0);
	// Tracing: top register_file _RAND_6 // Ignored: Inlined leading underscore at top.v:309
	vcdp->declBus  (c+109,"top register_file registers_7",-1,31,0);
	// Tracing: top register_file _RAND_7 // Ignored: Inlined leading underscore at top.v:311
	vcdp->declBus  (c+110,"top register_file registers_8",-1,31,0);
	// Tracing: top register_file _RAND_8 // Ignored: Inlined leading underscore at top.v:313
	vcdp->declBus  (c+111,"top register_file registers_9",-1,31,0);
	// Tracing: top register_file _RAND_9 // Ignored: Inlined leading underscore at top.v:315
	vcdp->declBus  (c+112,"top register_file registers_10",-1,31,0);
	// Tracing: top register_file _RAND_10 // Ignored: Inlined leading underscore at top.v:317
	vcdp->declBus  (c+113,"top register_file registers_11",-1,31,0);
	// Tracing: top register_file _RAND_11 // Ignored: Inlined leading underscore at top.v:319
	vcdp->declBus  (c+114,"top register_file registers_12",-1,31,0);
	// Tracing: top register_file _RAND_12 // Ignored: Inlined leading underscore at top.v:321
	vcdp->declBus  (c+115,"top register_file registers_13",-1,31,0);
	// Tracing: top register_file _RAND_13 // Ignored: Inlined leading underscore at top.v:323
	vcdp->declBus  (c+116,"top register_file registers_14",-1,31,0);
	// Tracing: top register_file _RAND_14 // Ignored: Inlined leading underscore at top.v:325
	vcdp->declBus  (c+117,"top register_file registers_15",-1,31,0);
	// Tracing: top register_file _RAND_15 // Ignored: Inlined leading underscore at top.v:327
	vcdp->declBus  (c+118,"top register_file registers_16",-1,31,0);
	// Tracing: top register_file _RAND_16 // Ignored: Inlined leading underscore at top.v:329
	vcdp->declBus  (c+119,"top register_file registers_17",-1,31,0);
	// Tracing: top register_file _RAND_17 // Ignored: Inlined leading underscore at top.v:331
	vcdp->declBus  (c+120,"top register_file registers_18",-1,31,0);
	// Tracing: top register_file _RAND_18 // Ignored: Inlined leading underscore at top.v:333
	vcdp->declBus  (c+121,"top register_file registers_19",-1,31,0);
	// Tracing: top register_file _RAND_19 // Ignored: Inlined leading underscore at top.v:335
	vcdp->declBus  (c+122,"top register_file registers_20",-1,31,0);
	// Tracing: top register_file _RAND_20 // Ignored: Inlined leading underscore at top.v:337
	vcdp->declBus  (c+123,"top register_file registers_21",-1,31,0);
	// Tracing: top register_file _RAND_21 // Ignored: Inlined leading underscore at top.v:339
	vcdp->declBus  (c+124,"top register_file registers_22",-1,31,0);
	// Tracing: top register_file _RAND_22 // Ignored: Inlined leading underscore at top.v:341
	vcdp->declBus  (c+125,"top register_file registers_23",-1,31,0);
	// Tracing: top register_file _RAND_23 // Ignored: Inlined leading underscore at top.v:343
	vcdp->declBus  (c+126,"top register_file registers_24",-1,31,0);
	// Tracing: top register_file _RAND_24 // Ignored: Inlined leading underscore at top.v:345
	vcdp->declBus  (c+127,"top register_file registers_25",-1,31,0);
	// Tracing: top register_file _RAND_25 // Ignored: Inlined leading underscore at top.v:347
	vcdp->declBus  (c+128,"top register_file registers_26",-1,31,0);
	// Tracing: top register_file _RAND_26 // Ignored: Inlined leading underscore at top.v:349
	vcdp->declBus  (c+129,"top register_file registers_27",-1,31,0);
	// Tracing: top register_file _RAND_27 // Ignored: Inlined leading underscore at top.v:351
	vcdp->declBus  (c+130,"top register_file registers_28",-1,31,0);
	// Tracing: top register_file _RAND_28 // Ignored: Inlined leading underscore at top.v:353
	vcdp->declBus  (c+131,"top register_file registers_29",-1,31,0);
	// Tracing: top register_file _RAND_29 // Ignored: Inlined leading underscore at top.v:355
	vcdp->declBus  (c+132,"top register_file registers_30",-1,31,0);
	// Tracing: top register_file _RAND_30 // Ignored: Inlined leading underscore at top.v:357
	vcdp->declBus  (c+133,"top register_file registers_31",-1,31,0);
	// Tracing: top register_file _RAND_31 // Ignored: Inlined leading underscore at top.v:359
	// Tracing: top register_file _GEN_1 // Ignored: Inlined leading underscore at top.v:360
	// Tracing: top register_file _GEN_2 // Ignored: Inlined leading underscore at top.v:361
	// Tracing: top register_file _GEN_3 // Ignored: Inlined leading underscore at top.v:362
	// Tracing: top register_file _GEN_4 // Ignored: Inlined leading underscore at top.v:363
	// Tracing: top register_file _GEN_5 // Ignored: Inlined leading underscore at top.v:364
	// Tracing: top register_file _GEN_6 // Ignored: Inlined leading underscore at top.v:365
	// Tracing: top register_file _GEN_7 // Ignored: Inlined leading underscore at top.v:366
	// Tracing: top register_file _GEN_8 // Ignored: Inlined leading underscore at top.v:367
	// Tracing: top register_file _GEN_9 // Ignored: Inlined leading underscore at top.v:368
	// Tracing: top register_file _GEN_10 // Ignored: Inlined leading underscore at top.v:369
	// Tracing: top register_file _GEN_11 // Ignored: Inlined leading underscore at top.v:370
	// Tracing: top register_file _GEN_12 // Ignored: Inlined leading underscore at top.v:371
	// Tracing: top register_file _GEN_13 // Ignored: Inlined leading underscore at top.v:372
	// Tracing: top register_file _GEN_14 // Ignored: Inlined leading underscore at top.v:373
	// Tracing: top register_file _GEN_15 // Ignored: Inlined leading underscore at top.v:374
	// Tracing: top register_file _GEN_16 // Ignored: Inlined leading underscore at top.v:375
	// Tracing: top register_file _GEN_17 // Ignored: Inlined leading underscore at top.v:376
	// Tracing: top register_file _GEN_18 // Ignored: Inlined leading underscore at top.v:377
	// Tracing: top register_file _GEN_19 // Ignored: Inlined leading underscore at top.v:378
	// Tracing: top register_file _GEN_20 // Ignored: Inlined leading underscore at top.v:379
	// Tracing: top register_file _GEN_21 // Ignored: Inlined leading underscore at top.v:380
	// Tracing: top register_file _GEN_22 // Ignored: Inlined leading underscore at top.v:381
	// Tracing: top register_file _GEN_23 // Ignored: Inlined leading underscore at top.v:382
	// Tracing: top register_file _GEN_24 // Ignored: Inlined leading underscore at top.v:383
	// Tracing: top register_file _GEN_25 // Ignored: Inlined leading underscore at top.v:384
	// Tracing: top register_file _GEN_26 // Ignored: Inlined leading underscore at top.v:385
	// Tracing: top register_file _GEN_27 // Ignored: Inlined leading underscore at top.v:386
	// Tracing: top register_file _GEN_28 // Ignored: Inlined leading underscore at top.v:387
	// Tracing: top register_file _GEN_29 // Ignored: Inlined leading underscore at top.v:388
	// Tracing: top register_file _GEN_30 // Ignored: Inlined leading underscore at top.v:389
	// Tracing: top register_file _GEN_33 // Ignored: Inlined leading underscore at top.v:390
	// Tracing: top register_file _GEN_34 // Ignored: Inlined leading underscore at top.v:391
	// Tracing: top register_file _GEN_35 // Ignored: Inlined leading underscore at top.v:392
	// Tracing: top register_file _GEN_36 // Ignored: Inlined leading underscore at top.v:393
	// Tracing: top register_file _GEN_37 // Ignored: Inlined leading underscore at top.v:394
	// Tracing: top register_file _GEN_38 // Ignored: Inlined leading underscore at top.v:395
	// Tracing: top register_file _GEN_39 // Ignored: Inlined leading underscore at top.v:396
	// Tracing: top register_file _GEN_40 // Ignored: Inlined leading underscore at top.v:397
	// Tracing: top register_file _GEN_41 // Ignored: Inlined leading underscore at top.v:398
	// Tracing: top register_file _GEN_42 // Ignored: Inlined leading underscore at top.v:399
	// Tracing: top register_file _GEN_43 // Ignored: Inlined leading underscore at top.v:400
	// Tracing: top register_file _GEN_44 // Ignored: Inlined leading underscore at top.v:401
	// Tracing: top register_file _GEN_45 // Ignored: Inlined leading underscore at top.v:402
	// Tracing: top register_file _GEN_46 // Ignored: Inlined leading underscore at top.v:403
	// Tracing: top register_file _GEN_47 // Ignored: Inlined leading underscore at top.v:404
	// Tracing: top register_file _GEN_48 // Ignored: Inlined leading underscore at top.v:405
	// Tracing: top register_file _GEN_49 // Ignored: Inlined leading underscore at top.v:406
	// Tracing: top register_file _GEN_50 // Ignored: Inlined leading underscore at top.v:407
	// Tracing: top register_file _GEN_51 // Ignored: Inlined leading underscore at top.v:408
	// Tracing: top register_file _GEN_52 // Ignored: Inlined leading underscore at top.v:409
	// Tracing: top register_file _GEN_53 // Ignored: Inlined leading underscore at top.v:410
	// Tracing: top register_file _GEN_54 // Ignored: Inlined leading underscore at top.v:411
	// Tracing: top register_file _GEN_55 // Ignored: Inlined leading underscore at top.v:412
	// Tracing: top register_file _GEN_56 // Ignored: Inlined leading underscore at top.v:413
	// Tracing: top register_file _GEN_57 // Ignored: Inlined leading underscore at top.v:414
	// Tracing: top register_file _GEN_58 // Ignored: Inlined leading underscore at top.v:415
	// Tracing: top register_file _GEN_59 // Ignored: Inlined leading underscore at top.v:416
	// Tracing: top register_file _GEN_60 // Ignored: Inlined leading underscore at top.v:417
	// Tracing: top register_file _GEN_61 // Ignored: Inlined leading underscore at top.v:418
	// Tracing: top register_file _GEN_62 // Ignored: Inlined leading underscore at top.v:419
	// Tracing: top register_file _T_267 // Ignored: Inlined leading underscore at top.v:420
	// Tracing: top register_file _GEN_65 // Ignored: Inlined leading underscore at top.v:421
	// Tracing: top register_file _GEN_66 // Ignored: Inlined leading underscore at top.v:422
	// Tracing: top register_file _GEN_67 // Ignored: Inlined leading underscore at top.v:423
	// Tracing: top register_file _GEN_68 // Ignored: Inlined leading underscore at top.v:424
	// Tracing: top register_file _GEN_69 // Ignored: Inlined leading underscore at top.v:425
	// Tracing: top register_file _GEN_70 // Ignored: Inlined leading underscore at top.v:426
	// Tracing: top register_file _GEN_71 // Ignored: Inlined leading underscore at top.v:427
	// Tracing: top register_file _GEN_72 // Ignored: Inlined leading underscore at top.v:428
	// Tracing: top register_file _GEN_73 // Ignored: Inlined leading underscore at top.v:429
	// Tracing: top register_file _GEN_74 // Ignored: Inlined leading underscore at top.v:430
	// Tracing: top register_file _GEN_75 // Ignored: Inlined leading underscore at top.v:431
	// Tracing: top register_file _GEN_76 // Ignored: Inlined leading underscore at top.v:432
	// Tracing: top register_file _GEN_77 // Ignored: Inlined leading underscore at top.v:433
	// Tracing: top register_file _GEN_78 // Ignored: Inlined leading underscore at top.v:434
	// Tracing: top register_file _GEN_79 // Ignored: Inlined leading underscore at top.v:435
	// Tracing: top register_file _GEN_80 // Ignored: Inlined leading underscore at top.v:436
	// Tracing: top register_file _GEN_81 // Ignored: Inlined leading underscore at top.v:437
	// Tracing: top register_file _GEN_82 // Ignored: Inlined leading underscore at top.v:438
	// Tracing: top register_file _GEN_83 // Ignored: Inlined leading underscore at top.v:439
	// Tracing: top register_file _GEN_84 // Ignored: Inlined leading underscore at top.v:440
	// Tracing: top register_file _GEN_85 // Ignored: Inlined leading underscore at top.v:441
	// Tracing: top register_file _GEN_86 // Ignored: Inlined leading underscore at top.v:442
	// Tracing: top register_file _GEN_87 // Ignored: Inlined leading underscore at top.v:443
	// Tracing: top register_file _GEN_88 // Ignored: Inlined leading underscore at top.v:444
	// Tracing: top register_file _GEN_89 // Ignored: Inlined leading underscore at top.v:445
	// Tracing: top register_file _GEN_90 // Ignored: Inlined leading underscore at top.v:446
	// Tracing: top register_file _GEN_91 // Ignored: Inlined leading underscore at top.v:447
	// Tracing: top register_file _GEN_92 // Ignored: Inlined leading underscore at top.v:448
	// Tracing: top register_file _GEN_93 // Ignored: Inlined leading underscore at top.v:449
	// Tracing: top register_file _GEN_94 // Ignored: Inlined leading underscore at top.v:450
	// Tracing: top register_file _GEN_95 // Ignored: Inlined leading underscore at top.v:451
	// Tracing: top register_file _GEN_96 // Ignored: Inlined leading underscore at top.v:452
	// Tracing: top register_file _GEN_97 // Ignored: Inlined leading underscore at top.v:453
	// Tracing: top register_file _GEN_98 // Ignored: Inlined leading underscore at top.v:454
	// Tracing: top register_file _GEN_99 // Ignored: Inlined leading underscore at top.v:455
	// Tracing: top register_file _GEN_100 // Ignored: Inlined leading underscore at top.v:456
	// Tracing: top register_file _GEN_101 // Ignored: Inlined leading underscore at top.v:457
	// Tracing: top register_file _GEN_102 // Ignored: Inlined leading underscore at top.v:458
	// Tracing: top register_file _GEN_103 // Ignored: Inlined leading underscore at top.v:459
	// Tracing: top register_file _GEN_104 // Ignored: Inlined leading underscore at top.v:460
	// Tracing: top register_file _GEN_105 // Ignored: Inlined leading underscore at top.v:461
	// Tracing: top register_file _GEN_106 // Ignored: Inlined leading underscore at top.v:462
	// Tracing: top register_file _GEN_107 // Ignored: Inlined leading underscore at top.v:463
	// Tracing: top register_file _GEN_108 // Ignored: Inlined leading underscore at top.v:464
	// Tracing: top register_file _GEN_109 // Ignored: Inlined leading underscore at top.v:465
	// Tracing: top register_file _GEN_110 // Ignored: Inlined leading underscore at top.v:466
	// Tracing: top register_file _GEN_111 // Ignored: Inlined leading underscore at top.v:467
	// Tracing: top register_file _GEN_112 // Ignored: Inlined leading underscore at top.v:468
	// Tracing: top register_file _GEN_113 // Ignored: Inlined leading underscore at top.v:469
	// Tracing: top register_file _GEN_114 // Ignored: Inlined leading underscore at top.v:470
	// Tracing: top register_file _GEN_115 // Ignored: Inlined leading underscore at top.v:471
	// Tracing: top register_file _GEN_116 // Ignored: Inlined leading underscore at top.v:472
	// Tracing: top register_file _GEN_117 // Ignored: Inlined leading underscore at top.v:473
	// Tracing: top register_file _GEN_118 // Ignored: Inlined leading underscore at top.v:474
	// Tracing: top register_file _GEN_119 // Ignored: Inlined leading underscore at top.v:475
	// Tracing: top register_file _GEN_120 // Ignored: Inlined leading underscore at top.v:476
	// Tracing: top register_file _GEN_121 // Ignored: Inlined leading underscore at top.v:477
	// Tracing: top register_file _GEN_122 // Ignored: Inlined leading underscore at top.v:478
	// Tracing: top register_file _GEN_123 // Ignored: Inlined leading underscore at top.v:479
	// Tracing: top register_file _GEN_124 // Ignored: Inlined leading underscore at top.v:480
	// Tracing: top register_file _GEN_125 // Ignored: Inlined leading underscore at top.v:481
	// Tracing: top register_file _GEN_126 // Ignored: Inlined leading underscore at top.v:482
	// Tracing: top register_file _GEN_127 // Ignored: Inlined leading underscore at top.v:483
	// Tracing: top register_file _GEN_129 // Ignored: Inlined leading underscore at top.v:484
	// Tracing: top register_file _GEN_130 // Ignored: Inlined leading underscore at top.v:485
	// Tracing: top register_file _GEN_131 // Ignored: Inlined leading underscore at top.v:486
	// Tracing: top register_file _GEN_132 // Ignored: Inlined leading underscore at top.v:487
	// Tracing: top register_file _GEN_133 // Ignored: Inlined leading underscore at top.v:488
	// Tracing: top register_file _GEN_134 // Ignored: Inlined leading underscore at top.v:489
	// Tracing: top register_file _GEN_135 // Ignored: Inlined leading underscore at top.v:490
	// Tracing: top register_file _GEN_136 // Ignored: Inlined leading underscore at top.v:491
	// Tracing: top register_file _GEN_137 // Ignored: Inlined leading underscore at top.v:492
	// Tracing: top register_file _GEN_138 // Ignored: Inlined leading underscore at top.v:493
	// Tracing: top register_file _GEN_139 // Ignored: Inlined leading underscore at top.v:494
	// Tracing: top register_file _GEN_140 // Ignored: Inlined leading underscore at top.v:495
	// Tracing: top register_file _GEN_141 // Ignored: Inlined leading underscore at top.v:496
	// Tracing: top register_file _GEN_142 // Ignored: Inlined leading underscore at top.v:497
	// Tracing: top register_file _GEN_143 // Ignored: Inlined leading underscore at top.v:498
	// Tracing: top register_file _GEN_144 // Ignored: Inlined leading underscore at top.v:499
	// Tracing: top register_file _GEN_145 // Ignored: Inlined leading underscore at top.v:500
	// Tracing: top register_file _GEN_146 // Ignored: Inlined leading underscore at top.v:501
	// Tracing: top register_file _GEN_147 // Ignored: Inlined leading underscore at top.v:502
	// Tracing: top register_file _GEN_148 // Ignored: Inlined leading underscore at top.v:503
	// Tracing: top register_file _GEN_149 // Ignored: Inlined leading underscore at top.v:504
	// Tracing: top register_file _GEN_150 // Ignored: Inlined leading underscore at top.v:505
	// Tracing: top register_file _GEN_151 // Ignored: Inlined leading underscore at top.v:506
	// Tracing: top register_file _GEN_152 // Ignored: Inlined leading underscore at top.v:507
	// Tracing: top register_file _GEN_153 // Ignored: Inlined leading underscore at top.v:508
	// Tracing: top register_file _GEN_154 // Ignored: Inlined leading underscore at top.v:509
	// Tracing: top register_file _GEN_155 // Ignored: Inlined leading underscore at top.v:510
	// Tracing: top register_file _GEN_156 // Ignored: Inlined leading underscore at top.v:511
	// Tracing: top register_file _GEN_157 // Ignored: Inlined leading underscore at top.v:512
	// Tracing: top register_file _GEN_158 // Ignored: Inlined leading underscore at top.v:513
	// Tracing: top register_file _GEN_159 // Ignored: Inlined leading underscore at top.v:514
	// Tracing: top register_file _GEN_160 // Ignored: Inlined leading underscore at top.v:515
	// Tracing: top register_file _GEN_161 // Ignored: Inlined leading underscore at top.v:516
	// Tracing: top register_file _GEN_162 // Ignored: Inlined leading underscore at top.v:517
	// Tracing: top register_file _GEN_163 // Ignored: Inlined leading underscore at top.v:518
	// Tracing: top register_file _GEN_164 // Ignored: Inlined leading underscore at top.v:519
	// Tracing: top register_file _GEN_165 // Ignored: Inlined leading underscore at top.v:520
	// Tracing: top register_file _GEN_166 // Ignored: Inlined leading underscore at top.v:521
	// Tracing: top register_file _GEN_167 // Ignored: Inlined leading underscore at top.v:522
	// Tracing: top register_file _GEN_168 // Ignored: Inlined leading underscore at top.v:523
	// Tracing: top register_file _GEN_169 // Ignored: Inlined leading underscore at top.v:524
	// Tracing: top register_file _GEN_170 // Ignored: Inlined leading underscore at top.v:525
	// Tracing: top register_file _GEN_171 // Ignored: Inlined leading underscore at top.v:526
	// Tracing: top register_file _GEN_172 // Ignored: Inlined leading underscore at top.v:527
	// Tracing: top register_file _GEN_173 // Ignored: Inlined leading underscore at top.v:528
	// Tracing: top register_file _GEN_174 // Ignored: Inlined leading underscore at top.v:529
	// Tracing: top register_file _GEN_175 // Ignored: Inlined leading underscore at top.v:530
	// Tracing: top register_file _GEN_176 // Ignored: Inlined leading underscore at top.v:531
	// Tracing: top register_file _GEN_177 // Ignored: Inlined leading underscore at top.v:532
	// Tracing: top register_file _GEN_178 // Ignored: Inlined leading underscore at top.v:533
	// Tracing: top register_file _GEN_179 // Ignored: Inlined leading underscore at top.v:534
	// Tracing: top register_file _GEN_180 // Ignored: Inlined leading underscore at top.v:535
	// Tracing: top register_file _GEN_181 // Ignored: Inlined leading underscore at top.v:536
	// Tracing: top register_file _GEN_182 // Ignored: Inlined leading underscore at top.v:537
	// Tracing: top register_file _GEN_183 // Ignored: Inlined leading underscore at top.v:538
	// Tracing: top register_file _GEN_184 // Ignored: Inlined leading underscore at top.v:539
	// Tracing: top register_file _GEN_185 // Ignored: Inlined leading underscore at top.v:540
	// Tracing: top register_file _GEN_186 // Ignored: Inlined leading underscore at top.v:541
	// Tracing: top register_file _GEN_187 // Ignored: Inlined leading underscore at top.v:542
	// Tracing: top register_file _GEN_188 // Ignored: Inlined leading underscore at top.v:543
	// Tracing: top register_file _GEN_189 // Ignored: Inlined leading underscore at top.v:544
	// Tracing: top register_file _GEN_190 // Ignored: Inlined leading underscore at top.v:545
	// Tracing: top register_file _GEN_191 // Ignored: Inlined leading underscore at top.v:546
	// Tracing: top register_file _GEN_192 // Ignored: Inlined leading underscore at top.v:547
	vcdp->declBus  (c+13,"top alu io_operand_a",-1,31,0);
	vcdp->declBus  (c+14,"top alu io_operand_b",-1,31,0);
	vcdp->declBus  (c+15,"top alu io_alu_control",-1,4,0);
	vcdp->declBus  (c+16,"top alu io_output",-1,31,0);
	// Tracing: top alu _T_16 // Ignored: Inlined leading underscore at top.v:1383
	// Tracing: top alu _T_17 // Ignored: Inlined leading underscore at top.v:1384
	// Tracing: top alu _T_18 // Ignored: Inlined leading underscore at top.v:1385
	// Tracing: top alu _T_19 // Ignored: Inlined leading underscore at top.v:1386
	// Tracing: top alu _T_21 // Ignored: Inlined leading underscore at top.v:1387
	// Tracing: top alu _T_22 // Ignored: Inlined leading underscore at top.v:1388
	// Tracing: top alu _GEN_23 // Ignored: Inlined leading underscore at top.v:1389
	// Tracing: top alu _T_23 // Ignored: Inlined leading underscore at top.v:1390
	// Tracing: top alu _T_25 // Ignored: Inlined leading underscore at top.v:1391
	// Tracing: top alu _T_26 // Ignored: Inlined leading underscore at top.v:1392
	// Tracing: top alu _GEN_0 // Ignored: Inlined leading underscore at top.v:1393
	// Tracing: top alu _T_30 // Ignored: Inlined leading underscore at top.v:1394
	// Tracing: top alu _T_32 // Ignored: Inlined leading underscore at top.v:1395
	// Tracing: top alu _T_33 // Ignored: Inlined leading underscore at top.v:1396
	// Tracing: top alu _T_34 // Ignored: Inlined leading underscore at top.v:1397
	// Tracing: top alu _T_35 // Ignored: Inlined leading underscore at top.v:1398
	// Tracing: top alu _T_36 // Ignored: Inlined leading underscore at top.v:1399
	// Tracing: top alu _GEN_1 // Ignored: Inlined leading underscore at top.v:1400
	// Tracing: top alu _T_40 // Ignored: Inlined leading underscore at top.v:1401
	// Tracing: top alu _T_41 // Ignored: Inlined leading underscore at top.v:1402
	// Tracing: top alu _T_42 // Ignored: Inlined leading underscore at top.v:1403
	// Tracing: top alu _T_44 // Ignored: Inlined leading underscore at top.v:1404
	// Tracing: top alu _T_46 // Ignored: Inlined leading underscore at top.v:1405
	// Tracing: top alu _T_47 // Ignored: Inlined leading underscore at top.v:1406
	// Tracing: top alu _T_49 // Ignored: Inlined leading underscore at top.v:1407
	// Tracing: top alu _T_51 // Ignored: Inlined leading underscore at top.v:1408
	// Tracing: top alu _T_52 // Ignored: Inlined leading underscore at top.v:1409
	// Tracing: top alu _T_53 // Ignored: Inlined leading underscore at top.v:1410
	// Tracing: top alu _T_55 // Ignored: Inlined leading underscore at top.v:1411
	// Tracing: top alu _T_56 // Ignored: Inlined leading underscore at top.v:1412
	// Tracing: top alu _T_57 // Ignored: Inlined leading underscore at top.v:1413
	// Tracing: top alu _T_59 // Ignored: Inlined leading underscore at top.v:1414
	// Tracing: top alu _T_60 // Ignored: Inlined leading underscore at top.v:1415
	// Tracing: top alu _T_61 // Ignored: Inlined leading underscore at top.v:1416
	// Tracing: top alu _T_62 // Ignored: Inlined leading underscore at top.v:1417
	// Tracing: top alu _T_64 // Ignored: Inlined leading underscore at top.v:1418
	// Tracing: top alu _T_65 // Ignored: Inlined leading underscore at top.v:1419
	// Tracing: top alu _GEN_2 // Ignored: Inlined leading underscore at top.v:1420
	// Tracing: top alu _T_69 // Ignored: Inlined leading underscore at top.v:1421
	// Tracing: top alu _T_71 // Ignored: Inlined leading underscore at top.v:1422
	// Tracing: top alu _GEN_3 // Ignored: Inlined leading underscore at top.v:1423
	// Tracing: top alu _T_75 // Ignored: Inlined leading underscore at top.v:1424
	// Tracing: top alu _T_80 // Ignored: Inlined leading underscore at top.v:1425
	// Tracing: top alu _T_81 // Ignored: Inlined leading underscore at top.v:1426
	// Tracing: top alu _GEN_5 // Ignored: Inlined leading underscore at top.v:1427
	// Tracing: top alu _T_85 // Ignored: Inlined leading underscore at top.v:1428
	// Tracing: top alu _T_88 // Ignored: Inlined leading underscore at top.v:1429
	// Tracing: top alu _GEN_6 // Ignored: Inlined leading underscore at top.v:1430
	// Tracing: top alu _GEN_8 // Ignored: Inlined leading underscore at top.v:1431
	// Tracing: top alu _GEN_9 // Ignored: Inlined leading underscore at top.v:1432
	// Tracing: top alu _GEN_10 // Ignored: Inlined leading underscore at top.v:1433
	// Tracing: top alu _GEN_11 // Ignored: Inlined leading underscore at top.v:1434
	// Tracing: top alu _GEN_12 // Ignored: Inlined leading underscore at top.v:1435
	// Tracing: top alu _GEN_13 // Ignored: Inlined leading underscore at top.v:1436
	// Tracing: top alu _GEN_14 // Ignored: Inlined leading underscore at top.v:1437
	// Tracing: top alu _GEN_15 // Ignored: Inlined leading underscore at top.v:1438
	// Tracing: top alu _GEN_16 // Ignored: Inlined leading underscore at top.v:1439
	// Tracing: top alu _GEN_17 // Ignored: Inlined leading underscore at top.v:1440
	// Tracing: top alu _GEN_18 // Ignored: Inlined leading underscore at top.v:1441
	// Tracing: top alu _GEN_19 // Ignored: Inlined leading underscore at top.v:1442
	// Tracing: top alu _GEN_20 // Ignored: Inlined leading underscore at top.v:1443
	// Tracing: top alu _GEN_21 // Ignored: Inlined leading underscore at top.v:1444
	// Tracing: top alu _GEN_24 // Ignored: Inlined leading underscore at top.v:1445
	vcdp->declBus  (c+62,"top alu_control io_alu_op",-1,2,0);
	vcdp->declBit  (c+63,"top alu_control io_func7",-1);
	vcdp->declBus  (c+64,"top alu_control io_func3",-1,2,0);
	vcdp->declBus  (c+15,"top alu_control io_output",-1,4,0);
	// Tracing: top alu_control _T_14 // Ignored: Inlined leading underscore at top.v:1517
	// Tracing: top alu_control _T_17 // Ignored: Inlined leading underscore at top.v:1518
	// Tracing: top alu_control _T_19 // Ignored: Inlined leading underscore at top.v:1519
	// Tracing: top alu_control _T_22 // Ignored: Inlined leading underscore at top.v:1520
	// Tracing: top alu_control _T_24 // Ignored: Inlined leading underscore at top.v:1521
	// Tracing: top alu_control _T_31 // Ignored: Inlined leading underscore at top.v:1522
	// Tracing: top alu_control _GEN_0 // Ignored: Inlined leading underscore at top.v:1523
	// Tracing: top alu_control _T_33 // Ignored: Inlined leading underscore at top.v:1524
	// Tracing: top alu_control _T_36 // Ignored: Inlined leading underscore at top.v:1525
	// Tracing: top alu_control _T_38 // Ignored: Inlined leading underscore at top.v:1526
	// Tracing: top alu_control _T_40 // Ignored: Inlined leading underscore at top.v:1527
	// Tracing: top alu_control _GEN_2 // Ignored: Inlined leading underscore at top.v:1528
	// Tracing: top alu_control _GEN_3 // Ignored: Inlined leading underscore at top.v:1529
	// Tracing: top alu_control _GEN_4 // Ignored: Inlined leading underscore at top.v:1530
	// Tracing: top alu_control _GEN_5 // Ignored: Inlined leading underscore at top.v:1531
	// Tracing: top alu_control _GEN_6 // Ignored: Inlined leading underscore at top.v:1532
	vcdp->declBus  (c+65,"top immediate_generation io_instruction",-1,31,0);
	vcdp->declBus  (c+66,"top immediate_generation io_pc",-1,31,0);
	vcdp->declBus  (c+67,"top immediate_generation io_s_immediate",-1,31,0);
	vcdp->declBus  (c+17,"top immediate_generation io_sb_immediate",-1,31,0);
	vcdp->declBus  (c+68,"top immediate_generation io_u_immediate",-1,31,0);
	vcdp->declBus  (c+18,"top immediate_generation io_uj_immediate",-1,31,0);
	vcdp->declBus  (c+19,"top immediate_generation io_i_immediate",-1,31,0);
	vcdp->declBus  (c+134,"top immediate_generation i_immediate_12",-1,11,0);
	// Tracing: top immediate_generation _T_19 // Ignored: Inlined leading underscore at top.v:1561
	// Tracing: top immediate_generation _T_23 // Ignored: Inlined leading underscore at top.v:1562
	vcdp->declBus  (c+51,"top immediate_generation i_immediate_32",-1,31,0);
	vcdp->declBus  (c+77,"top immediate_generation s_lower_half",-1,4,0);
	vcdp->declBus  (c+135,"top immediate_generation s_upper_half",-1,6,0);
	vcdp->declBus  (c+136,"top immediate_generation s_immediate_12",-1,11,0);
	// Tracing: top immediate_generation _T_25 // Ignored: Inlined leading underscore at top.v:1567
	// Tracing: top immediate_generation _T_29 // Ignored: Inlined leading underscore at top.v:1568
	vcdp->declBus  (c+67,"top immediate_generation s_immediate_32",-1,31,0);
	vcdp->declBus  (c+137,"top immediate_generation sb_lower_half",-1,3,0);
	vcdp->declBus  (c+138,"top immediate_generation sb_upper_half",-1,5,0);
	vcdp->declBit  (c+139,"top immediate_generation sb_11thbit",-1);
	vcdp->declBit  (c+140,"top immediate_generation sb_12thbit",-1);
	vcdp->declBus  (c+141,"top immediate_generation sb_immediate_13",-1,12,0);
	// Tracing: top immediate_generation _T_36 // Ignored: Inlined leading underscore at top.v:1575
	// Tracing: top immediate_generation _T_40 // Ignored: Inlined leading underscore at top.v:1576
	// Tracing: top immediate_generation _T_41 // Ignored: Inlined leading underscore at top.v:1577
	vcdp->declBus  (c+52,"top immediate_generation sb_immediate_32",-1,31,0);
	// Tracing: top immediate_generation _T_42 // Ignored: Inlined leading underscore at top.v:1579
	// Tracing: top immediate_generation _T_43 // Ignored: Inlined leading underscore at top.v:1580
	vcdp->declBus  (c+142,"top immediate_generation u_immediate_20",-1,19,0);
	// Tracing: top immediate_generation _T_45 // Ignored: Inlined leading underscore at top.v:1582
	// Tracing: top immediate_generation _T_49 // Ignored: Inlined leading underscore at top.v:1583
	vcdp->declBus  (c+143,"top immediate_generation u_immediate_32",-1,31,0);
	// Tracing: top immediate_generation _GEN_0 // Ignored: Inlined leading underscore at top.v:1585
	vcdp->declQuad (c+144,"top immediate_generation u_immediate_32_shifted",-1,46,0);
	// Tracing: top immediate_generation _T_51 // Ignored: Inlined leading underscore at top.v:1587
	vcdp->declBus  (c+146,"top immediate_generation uj_lower_half",-1,9,0);
	vcdp->declBit  (c+147,"top immediate_generation uj_11thbit",-1);
	vcdp->declBus  (c+148,"top immediate_generation uj_upper_half",-1,7,0);
	vcdp->declBus  (c+149,"top immediate_generation uj_immediate_21",-1,20,0);
	// Tracing: top immediate_generation _T_57 // Ignored: Inlined leading underscore at top.v:1592
	// Tracing: top immediate_generation _T_61 // Ignored: Inlined leading underscore at top.v:1593
	// Tracing: top immediate_generation _T_62 // Ignored: Inlined leading underscore at top.v:1594
	vcdp->declBus  (c+53,"top immediate_generation uj_immediate_32",-1,31,0);
	// Tracing: top immediate_generation _T_63 // Ignored: Inlined leading underscore at top.v:1596
	// Tracing: top immediate_generation _T_64 // Ignored: Inlined leading underscore at top.v:1597
	// Tracing: top immediate_generation _GEN_1 // Ignored: Inlined leading underscore at top.v:1598
	vcdp->declBus  (c+20,"top jalr io_input_a",-1,31,0);
	vcdp->declBus  (c+19,"top jalr io_input_b",-1,31,0);
	vcdp->declBus  (c+21,"top jalr io_output",-1,31,0);
	// Tracing: top jalr _T_11 // Ignored: Inlined leading underscore at top.v:1649
	// Tracing: top jalr _T_12 // Ignored: Inlined leading underscore at top.v:1650
	vcdp->declBus  (c+54,"top jalr sum",-1,31,0);
	// Tracing: top jalr _GEN_0 // Ignored: Inlined leading underscore at top.v:1652
	// Tracing: top jalr _T_14 // Ignored: Inlined leading underscore at top.v:1653
	// Tracing: top jalr _T_15 // Ignored: Inlined leading underscore at top.v:1654
	// Tracing: top jalr _GEN_1 // Ignored: Inlined leading underscore at top.v:1655
	vcdp->declBit  (c+151,"top pc clock",-1);
	vcdp->declBit  (c+152,"top pc reset",-1);
	vcdp->declBus  (c+22,"top pc io_in",-1,31,0);
	vcdp->declBus  (c+69,"top pc io_out",-1,31,0);
	vcdp->declBus  (c+70,"top pc io_pc4",-1,31,0);
	vcdp->declBus  (c+69,"top pc register",-1,31,0);
	// Tracing: top pc _RAND_0 // Ignored: Inlined leading underscore at top.v:1673
	// Tracing: top pc _T_14 // Ignored: Inlined leading underscore at top.v:1674
	// Tracing: top pc _T_15 // Ignored: Inlined leading underscore at top.v:1675
	vcdp->declBit  (c+151,"top instruction_memory clock",-1);
	vcdp->declBus  (c+71,"top instruction_memory io_write_address",-1,9,0);
	vcdp->declBus  (c+23,"top instruction_memory io_read_data",-1,31,0);
	// Tracing: top instruction_memory memory // Ignored: Wide memory > --trace-max-array ents at top.v:1723
	// Tracing: top instruction_memory _RAND_0 // Ignored: Inlined leading underscore at top.v:1724
	vcdp->declBus  (c+23,"top instruction_memory memory__T_11_data",-1,31,0);
	vcdp->declBus  (c+71,"top instruction_memory memory__T_11_addr",-1,9,0);
	vcdp->declBit  (c+151,"top instruction_memory BindsTo_0_instruction_memory_Inst clock",-1);
	vcdp->declBus  (c+71,"top instruction_memory BindsTo_0_instruction_memory_Inst io_write_address",-1,9,0);
	vcdp->declBus  (c+23,"top instruction_memory BindsTo_0_instruction_memory_Inst io_read_data",-1,31,0);
	vcdp->declBit  (c+151,"top data_memory clock",-1);
	vcdp->declBit  (c+72,"top data_memory io_memory_write",-1);
	vcdp->declBit  (c+73,"top data_memory io_memory_read",-1);
	vcdp->declBus  (c+74,"top data_memory io_memory_address",-1,9,0);
	vcdp->declBus  (c+75,"top data_memory io_memory_data",-1,31,0);
	vcdp->declBus  (c+24,"top data_memory io_memory_out",-1,31,0);
	// Tracing: top data_memory memory // Ignored: Wide memory > --trace-max-array ents at top.v:1770
	// Tracing: top data_memory _RAND_0 // Ignored: Inlined leading underscore at top.v:1771
	vcdp->declBus  (c+55,"top data_memory memory__T_23_data",-1,31,0);
	vcdp->declBus  (c+74,"top data_memory memory__T_23_addr",-1,9,0);
	vcdp->declBus  (c+56,"top data_memory memory__T_24_data",-1,31,0);
	vcdp->declBus  (c+74,"top data_memory memory__T_24_addr",-1,9,0);
	vcdp->declBus  (c+75,"top data_memory memory__T_22_data",-1,31,0);
	vcdp->declBus  (c+74,"top data_memory memory__T_22_addr",-1,9,0);
	vcdp->declBit  (c+154,"top data_memory memory__T_22_mask",-1);
	vcdp->declBit  (c+150,"top data_memory memory__T_22_en",-1);
	// Tracing: top data_memory _T_20 // Ignored: Inlined leading underscore at top.v:1780
	// Tracing: top data_memory _T_21 // Ignored: Inlined leading underscore at top.v:1781
	vcdp->declBit  (c+151,"top IF_ID clock",-1);
	vcdp->declBit  (c+152,"top IF_ID reset",-1);
	vcdp->declBus  (c+25,"top IF_ID io_pc_in",-1,31,0);
	vcdp->declBus  (c+26,"top IF_ID io_pc4_in",-1,31,0);
	vcdp->declBus  (c+27,"top IF_ID io_instruction_in",-1,31,0);
	vcdp->declBus  (c+66,"top IF_ID io_pc_out",-1,31,0);
	vcdp->declBus  (c+76,"top IF_ID io_pc4_out",-1,31,0);
	vcdp->declBus  (c+65,"top IF_ID io_instruction_out",-1,31,0);
	vcdp->declBus  (c+66,"top IF_ID pc_register",-1,31,0);
	// Tracing: top IF_ID _RAND_0 // Ignored: Inlined leading underscore at top.v:1841
	vcdp->declBus  (c+76,"top IF_ID pc4_register",-1,31,0);
	// Tracing: top IF_ID _RAND_1 // Ignored: Inlined leading underscore at top.v:1843
	vcdp->declBus  (c+65,"top IF_ID instruction_register",-1,31,0);
	// Tracing: top IF_ID _RAND_2 // Ignored: Inlined leading underscore at top.v:1845
	vcdp->declBit  (c+151,"top ID_EX clock",-1);
	vcdp->declBit  (c+152,"top ID_EX reset",-1);
	vcdp->declBus  (c+76,"top ID_EX io_pc4_in",-1,31,0);
	vcdp->declBus  (c+60,"top ID_EX io_rs1_select_in",-1,4,0);
	vcdp->declBus  (c+61,"top ID_EX io_rs2_select_in",-1,4,0);
	vcdp->declBus  (c+11,"top ID_EX io_rs1_in",-1,31,0);
	vcdp->declBus  (c+12,"top ID_EX io_rs2_in",-1,31,0);
	vcdp->declBus  (c+28,"top ID_EX io_immediate_in",-1,31,0);
	vcdp->declBus  (c+77,"top ID_EX io_rd_select_in",-1,4,0);
	vcdp->declBus  (c+78,"top ID_EX io_func3_in",-1,2,0);
	vcdp->declBit  (c+79,"top ID_EX io_func7_in",-1);
	vcdp->declBit  (c+29,"top ID_EX io_control_memorywrite_in",-1);
	vcdp->declBit  (c+30,"top ID_EX io_control_memoryread_in",-1);
	vcdp->declBit  (c+31,"top ID_EX io_control_registerwrite_in",-1);
	vcdp->declBit  (c+30,"top ID_EX io_control_memorytoregister_in",-1);
	vcdp->declBus  (c+32,"top ID_EX io_control_aluop_in",-1,2,0);
	vcdp->declBus  (c+33,"top ID_EX io_control_opa_select_in",-1,1,0);
	vcdp->declBit  (c+34,"top ID_EX io_control_opb_select_in",-1);
	vcdp->declBus  (c+80,"top ID_EX io_pc4_out",-1,31,0);
	vcdp->declBus  (c+81,"top ID_EX io_rs1_out",-1,31,0);
	vcdp->declBus  (c+82,"top ID_EX io_rs2_out",-1,31,0);
	vcdp->declBus  (c+83,"top ID_EX io_immediate_out",-1,31,0);
	vcdp->declBus  (c+64,"top ID_EX io_func3_out",-1,2,0);
	vcdp->declBit  (c+63,"top ID_EX io_func7_out",-1);
	vcdp->declBus  (c+84,"top ID_EX io_rd_select_out",-1,4,0);
	vcdp->declBus  (c+85,"top ID_EX io_rs1_select_out",-1,4,0);
	vcdp->declBus  (c+86,"top ID_EX io_rs2_select_out",-1,4,0);
	vcdp->declBit  (c+87,"top ID_EX io_control_memorywrite_out",-1);
	vcdp->declBit  (c+88,"top ID_EX io_control_memoryread_out",-1);
	vcdp->declBit  (c+89,"top ID_EX io_control_registerwrite_out",-1);
	vcdp->declBit  (c+90,"top ID_EX io_control_memorytoregister_out",-1);
	vcdp->declBus  (c+62,"top ID_EX io_control_aluop_out",-1,2,0);
	vcdp->declBus  (c+91,"top ID_EX io_control_opa_select_out",-1,1,0);
	vcdp->declBit  (c+92,"top ID_EX io_control_opb_select_out",-1);
	vcdp->declBus  (c+80,"top ID_EX pc4_register",-1,31,0);
	// Tracing: top ID_EX _RAND_0 // Ignored: Inlined leading underscore at top.v:1942
	vcdp->declBus  (c+81,"top ID_EX rs1_register",-1,31,0);
	// Tracing: top ID_EX _RAND_1 // Ignored: Inlined leading underscore at top.v:1944
	vcdp->declBus  (c+82,"top ID_EX rs2_register",-1,31,0);
	// Tracing: top ID_EX _RAND_2 // Ignored: Inlined leading underscore at top.v:1946
	vcdp->declBus  (c+83,"top ID_EX immediate_register",-1,31,0);
	// Tracing: top ID_EX _RAND_3 // Ignored: Inlined leading underscore at top.v:1948
	vcdp->declBus  (c+84,"top ID_EX rd_select_register",-1,4,0);
	// Tracing: top ID_EX _RAND_4 // Ignored: Inlined leading underscore at top.v:1950
	vcdp->declBus  (c+85,"top ID_EX rs1_select_register",-1,4,0);
	// Tracing: top ID_EX _RAND_5 // Ignored: Inlined leading underscore at top.v:1952
	vcdp->declBus  (c+86,"top ID_EX rs2_select_register",-1,4,0);
	// Tracing: top ID_EX _RAND_6 // Ignored: Inlined leading underscore at top.v:1954
	vcdp->declBus  (c+64,"top ID_EX func3_register",-1,2,0);
	// Tracing: top ID_EX _RAND_7 // Ignored: Inlined leading underscore at top.v:1956
	vcdp->declBit  (c+63,"top ID_EX func7_register",-1);
	// Tracing: top ID_EX _RAND_8 // Ignored: Inlined leading underscore at top.v:1958
	vcdp->declBit  (c+87,"top ID_EX control_memorywrite_register",-1);
	// Tracing: top ID_EX _RAND_9 // Ignored: Inlined leading underscore at top.v:1960
	vcdp->declBit  (c+88,"top ID_EX control_memoryread_register",-1);
	// Tracing: top ID_EX _RAND_10 // Ignored: Inlined leading underscore at top.v:1962
	vcdp->declBit  (c+89,"top ID_EX control_registerwrite_register",-1);
	// Tracing: top ID_EX _RAND_11 // Ignored: Inlined leading underscore at top.v:1964
	vcdp->declBit  (c+90,"top ID_EX control_memorytoregister_register",-1);
	// Tracing: top ID_EX _RAND_12 // Ignored: Inlined leading underscore at top.v:1966
	vcdp->declBus  (c+62,"top ID_EX control_aluop_register",-1,2,0);
	// Tracing: top ID_EX _RAND_13 // Ignored: Inlined leading underscore at top.v:1968
	vcdp->declBus  (c+91,"top ID_EX control_opa_select_register",-1,1,0);
	// Tracing: top ID_EX _RAND_14 // Ignored: Inlined leading underscore at top.v:1970
	vcdp->declBit  (c+92,"top ID_EX control_opb_select_register",-1);
	// Tracing: top ID_EX _RAND_15 // Ignored: Inlined leading underscore at top.v:1972
	vcdp->declBit  (c+151,"top EX_MEM clock",-1);
	vcdp->declBit  (c+152,"top EX_MEM reset",-1);
	vcdp->declBit  (c+87,"top EX_MEM io_memorywrite",-1);
	vcdp->declBit  (c+88,"top EX_MEM io_memoryread",-1);
	vcdp->declBit  (c+89,"top EX_MEM io_registerwrite",-1);
	vcdp->declBit  (c+90,"top EX_MEM io_memorytoregister",-1);
	vcdp->declBus  (c+35,"top EX_MEM io_rs2_in",-1,31,0);
	vcdp->declBus  (c+84,"top EX_MEM io_rd_select",-1,4,0);
	vcdp->declBus  (c+16,"top EX_MEM io_alu_out_in",-1,31,0);
	vcdp->declBit  (c+72,"top EX_MEM io_memorywrite_out",-1);
	vcdp->declBit  (c+73,"top EX_MEM io_memoryread_out",-1);
	vcdp->declBit  (c+93,"top EX_MEM io_registerwrite_out",-1);
	vcdp->declBit  (c+94,"top EX_MEM io_memorytoregister_out",-1);
	vcdp->declBus  (c+75,"top EX_MEM io_rs2_out",-1,31,0);
	vcdp->declBus  (c+95,"top EX_MEM io_rd_select_out",-1,4,0);
	vcdp->declBus  (c+96,"top EX_MEM io_alu_out",-1,31,0);
	vcdp->declBit  (c+72,"top EX_MEM register_memorywrite",-1);
	// Tracing: top EX_MEM _RAND_0 // Ignored: Inlined leading underscore at top.v:2181
	vcdp->declBit  (c+73,"top EX_MEM register_memoryread",-1);
	// Tracing: top EX_MEM _RAND_1 // Ignored: Inlined leading underscore at top.v:2183
	vcdp->declBit  (c+93,"top EX_MEM register_registerwrite",-1);
	// Tracing: top EX_MEM _RAND_2 // Ignored: Inlined leading underscore at top.v:2185
	vcdp->declBit  (c+94,"top EX_MEM register_memorytoregister",-1);
	// Tracing: top EX_MEM _RAND_3 // Ignored: Inlined leading underscore at top.v:2187
	vcdp->declBus  (c+75,"top EX_MEM register_rs2",-1,31,0);
	// Tracing: top EX_MEM _RAND_4 // Ignored: Inlined leading underscore at top.v:2189
	vcdp->declBus  (c+95,"top EX_MEM register_rd_select",-1,4,0);
	// Tracing: top EX_MEM _RAND_5 // Ignored: Inlined leading underscore at top.v:2191
	vcdp->declBus  (c+96,"top EX_MEM register_alu_out",-1,31,0);
	// Tracing: top EX_MEM _RAND_6 // Ignored: Inlined leading underscore at top.v:2193
	vcdp->declBit  (c+151,"top MEM_WB clock",-1);
	vcdp->declBit  (c+152,"top MEM_WB reset",-1);
	vcdp->declBit  (c+93,"top MEM_WB io_registerwrite",-1);
	vcdp->declBit  (c+94,"top MEM_WB io_memorytoregister",-1);
	vcdp->declBus  (c+95,"top MEM_WB io_rd_select",-1,4,0);
	vcdp->declBit  (c+73,"top MEM_WB io_memoryread",-1);
	vcdp->declBus  (c+24,"top MEM_WB io_datamemory_data_in",-1,31,0);
	vcdp->declBus  (c+96,"top MEM_WB io_alu_out_in",-1,31,0);
	vcdp->declBit  (c+58,"top MEM_WB io_registerwrite_out",-1);
	vcdp->declBit  (c+97,"top MEM_WB io_memorytoregister_out",-1);
	vcdp->declBit  (c+98,"top MEM_WB io_memoryread_out",-1);
	vcdp->declBus  (c+59,"top MEM_WB io_rd_select_out",-1,4,0);
	vcdp->declBus  (c+99,"top MEM_WB io_datamemory_data_out",-1,31,0);
	vcdp->declBus  (c+100,"top MEM_WB io_alu_out",-1,31,0);
	vcdp->declBit  (c+58,"top MEM_WB register_registerwrite",-1);
	// Tracing: top MEM_WB _RAND_0 // Ignored: Inlined leading underscore at top.v:2310
	vcdp->declBit  (c+97,"top MEM_WB register_memorytoregister",-1);
	// Tracing: top MEM_WB _RAND_1 // Ignored: Inlined leading underscore at top.v:2312
	vcdp->declBit  (c+98,"top MEM_WB register_memoryread",-1);
	// Tracing: top MEM_WB _RAND_2 // Ignored: Inlined leading underscore at top.v:2314
	vcdp->declBus  (c+59,"top MEM_WB register_rd_select",-1,4,0);
	// Tracing: top MEM_WB _RAND_3 // Ignored: Inlined leading underscore at top.v:2316
	vcdp->declBus  (c+99,"top MEM_WB register_datamemory_data",-1,31,0);
	// Tracing: top MEM_WB _RAND_4 // Ignored: Inlined leading underscore at top.v:2318
	vcdp->declBus  (c+100,"top MEM_WB register_alu",-1,31,0);
	// Tracing: top MEM_WB _RAND_5 // Ignored: Inlined leading underscore at top.v:2320
	vcdp->declBus  (c+95,"top forward_unit io_EX_MEM_registerrd",-1,4,0);
	vcdp->declBus  (c+59,"top forward_unit io_MEM_WB_registerrd",-1,4,0);
	vcdp->declBus  (c+85,"top forward_unit io_ID_EX_registerrs1",-1,4,0);
	vcdp->declBus  (c+86,"top forward_unit io_ID_EX_registerrs2",-1,4,0);
	vcdp->declBit  (c+93,"top forward_unit io_EX_MEM_registerwrite",-1);
	vcdp->declBit  (c+58,"top forward_unit io_MEM_WB_registerwrite",-1);
	vcdp->declBus  (c+36,"top forward_unit io_forward_a",-1,1,0);
	vcdp->declBus  (c+37,"top forward_unit io_forward_b",-1,1,0);
	// Tracing: top forward_unit _T_26 // Ignored: Inlined leading underscore at top.v:2420
	// Tracing: top forward_unit _T_27 // Ignored: Inlined leading underscore at top.v:2421
	// Tracing: top forward_unit _T_28 // Ignored: Inlined leading underscore at top.v:2422
	// Tracing: top forward_unit _T_29 // Ignored: Inlined leading underscore at top.v:2423
	// Tracing: top forward_unit _T_30 // Ignored: Inlined leading underscore at top.v:2424
	// Tracing: top forward_unit _T_31 // Ignored: Inlined leading underscore at top.v:2425
	// Tracing: top forward_unit _T_40 // Ignored: Inlined leading underscore at top.v:2426
	// Tracing: top forward_unit _GEN_2 // Ignored: Inlined leading underscore at top.v:2427
	// Tracing: top forward_unit _GEN_3 // Ignored: Inlined leading underscore at top.v:2428
	// Tracing: top forward_unit _GEN_4 // Ignored: Inlined leading underscore at top.v:2429
	// Tracing: top forward_unit _T_53 // Ignored: Inlined leading underscore at top.v:2430
	// Tracing: top forward_unit _T_54 // Ignored: Inlined leading underscore at top.v:2431
	// Tracing: top forward_unit _T_64 // Ignored: Inlined leading underscore at top.v:2432
	// Tracing: top forward_unit _T_65 // Ignored: Inlined leading underscore at top.v:2433
	// Tracing: top forward_unit _T_66 // Ignored: Inlined leading underscore at top.v:2434
	// Tracing: top forward_unit _T_67 // Ignored: Inlined leading underscore at top.v:2435
	// Tracing: top forward_unit _T_68 // Ignored: Inlined leading underscore at top.v:2436
	// Tracing: top forward_unit _T_69 // Ignored: Inlined leading underscore at top.v:2437
	// Tracing: top forward_unit _T_84 // Ignored: Inlined leading underscore at top.v:2438
	// Tracing: top forward_unit _T_85 // Ignored: Inlined leading underscore at top.v:2439
	// Tracing: top forward_unit _T_87 // Ignored: Inlined leading underscore at top.v:2440
	// Tracing: top forward_unit _T_104 // Ignored: Inlined leading underscore at top.v:2441
	// Tracing: top forward_unit _GEN_5 // Ignored: Inlined leading underscore at top.v:2442
	// Tracing: top forward_unit _GEN_6 // Ignored: Inlined leading underscore at top.v:2443
	// Tracing: top forward_unit _GEN_7 // Ignored: Inlined leading underscore at top.v:2444
	// Tracing: top forward_unit _GEN_8 // Ignored: Inlined leading underscore at top.v:2445
	// Tracing: top forward_unit _GEN_9 // Ignored: Inlined leading underscore at top.v:2446
	vcdp->declBus  (c+76,"top hazard_detection io_pc_in",-1,31,0);
	vcdp->declBus  (c+66,"top hazard_detection io_current_pc",-1,31,0);
	vcdp->declBit  (c+88,"top hazard_detection io_ID_EX_memoryread",-1);
	vcdp->declBus  (c+65,"top hazard_detection io_IF_ID_instruction",-1,31,0);
	vcdp->declBus  (c+84,"top hazard_detection io_ID_EX_registerrd",-1,4,0);
	vcdp->declBit  (c+38,"top hazard_detection io_instruction_forward",-1);
	vcdp->declBit  (c+38,"top hazard_detection io_pc_forward",-1);
	vcdp->declBit  (c+38,"top hazard_detection io_control_forward",-1);
	vcdp->declBus  (c+65,"top hazard_detection io_instruction_out",-1,31,0);
	vcdp->declBus  (c+76,"top hazard_detection io_pc_out",-1,31,0);
	vcdp->declBus  (c+66,"top hazard_detection io_current_pc_out",-1,31,0);
	vcdp->declBus  (c+60,"top hazard_detection rs1_sel",-1,4,0);
	vcdp->declBus  (c+61,"top hazard_detection rs2_sel",-1,4,0);
	// Tracing: top hazard_detection _T_29 // Ignored: Inlined leading underscore at top.v:2492
	// Tracing: top hazard_detection _T_30 // Ignored: Inlined leading underscore at top.v:2493
	// Tracing: top hazard_detection _T_31 // Ignored: Inlined leading underscore at top.v:2494
	vcdp->declBus  (c+39,"top branch_logic io_rs1",-1,31,0);
	vcdp->declBus  (c+40,"top branch_logic io_rs2",-1,31,0);
	vcdp->declBus  (c+78,"top branch_logic io_func3",-1,2,0);
	vcdp->declBit  (c+41,"top branch_logic io_output",-1);
	// Tracing: top branch_logic _T_14 // Ignored: Inlined leading underscore at top.v:2513
	// Tracing: top branch_logic _T_15 // Ignored: Inlined leading underscore at top.v:2514
	// Tracing: top branch_logic _T_19 // Ignored: Inlined leading underscore at top.v:2515
	// Tracing: top branch_logic _T_20 // Ignored: Inlined leading underscore at top.v:2516
	// Tracing: top branch_logic _T_24 // Ignored: Inlined leading underscore at top.v:2517
	// Tracing: top branch_logic _T_25 // Ignored: Inlined leading underscore at top.v:2518
	// Tracing: top branch_logic _T_29 // Ignored: Inlined leading underscore at top.v:2519
	// Tracing: top branch_logic _T_30 // Ignored: Inlined leading underscore at top.v:2520
	// Tracing: top branch_logic _T_34 // Ignored: Inlined leading underscore at top.v:2521
	// Tracing: top branch_logic _T_35 // Ignored: Inlined leading underscore at top.v:2522
	// Tracing: top branch_logic _T_36 // Ignored: Inlined leading underscore at top.v:2523
	// Tracing: top branch_logic _T_37 // Ignored: Inlined leading underscore at top.v:2524
	// Tracing: top branch_logic _T_41 // Ignored: Inlined leading underscore at top.v:2525
	// Tracing: top branch_logic _T_44 // Ignored: Inlined leading underscore at top.v:2526
	// Tracing: top branch_logic _GEN_6 // Ignored: Inlined leading underscore at top.v:2527
	// Tracing: top branch_logic _GEN_7 // Ignored: Inlined leading underscore at top.v:2528
	// Tracing: top branch_logic _GEN_8 // Ignored: Inlined leading underscore at top.v:2529
	// Tracing: top branch_logic _GEN_9 // Ignored: Inlined leading underscore at top.v:2530
	// Tracing: top branch_logic _GEN_10 // Ignored: Inlined leading underscore at top.v:2531
	vcdp->declBus  (c+84,"top branch_forward io_ID_EX_registerrd",-1,4,0);
	vcdp->declBit  (c+88,"top branch_forward io_ID_EX_memoryread",-1);
	vcdp->declBus  (c+95,"top branch_forward io_EX_MEM_registerrd",-1,4,0);
	vcdp->declBit  (c+73,"top branch_forward io_EX_MEM_memoryread",-1);
	vcdp->declBus  (c+59,"top branch_forward io_MEM_WB_registerrd",-1,4,0);
	vcdp->declBit  (c+98,"top branch_forward io_MEM_WB_memoryread",-1);
	vcdp->declBus  (c+60,"top branch_forward io_rs1_select",-1,4,0);
	vcdp->declBus  (c+61,"top branch_forward io_rs2_select",-1,4,0);
	vcdp->declBit  (c+2,"top branch_forward io_control_branch",-1);
	vcdp->declBus  (c+42,"top branch_forward io_forward_rs1",-1,3,0);
	vcdp->declBus  (c+43,"top branch_forward io_forward_rs2",-1,3,0);
	// Tracing: top branch_forward _T_32 // Ignored: Inlined leading underscore at top.v:2566
	// Tracing: top branch_forward _T_34 // Ignored: Inlined leading underscore at top.v:2567
	// Tracing: top branch_forward _T_35 // Ignored: Inlined leading underscore at top.v:2568
	// Tracing: top branch_forward _T_36 // Ignored: Inlined leading underscore at top.v:2569
	// Tracing: top branch_forward _T_37 // Ignored: Inlined leading underscore at top.v:2570
	// Tracing: top branch_forward _T_38 // Ignored: Inlined leading underscore at top.v:2571
	// Tracing: top branch_forward _T_39 // Ignored: Inlined leading underscore at top.v:2572
	// Tracing: top branch_forward _T_56 // Ignored: Inlined leading underscore at top.v:2573
	// Tracing: top branch_forward _GEN_2 // Ignored: Inlined leading underscore at top.v:2574
	// Tracing: top branch_forward _GEN_3 // Ignored: Inlined leading underscore at top.v:2575
	// Tracing: top branch_forward _GEN_4 // Ignored: Inlined leading underscore at top.v:2576
	// Tracing: top branch_forward _T_59 // Ignored: Inlined leading underscore at top.v:2577
	// Tracing: top branch_forward _T_61 // Ignored: Inlined leading underscore at top.v:2578
	// Tracing: top branch_forward _T_62 // Ignored: Inlined leading underscore at top.v:2579
	// Tracing: top branch_forward _T_66 // Ignored: Inlined leading underscore at top.v:2580
	// Tracing: top branch_forward _T_68 // Ignored: Inlined leading underscore at top.v:2581
	// Tracing: top branch_forward _T_69 // Ignored: Inlined leading underscore at top.v:2582
	// Tracing: top branch_forward _T_70 // Ignored: Inlined leading underscore at top.v:2583
	// Tracing: top branch_forward _T_71 // Ignored: Inlined leading underscore at top.v:2584
	// Tracing: top branch_forward _T_72 // Ignored: Inlined leading underscore at top.v:2585
	// Tracing: top branch_forward _T_73 // Ignored: Inlined leading underscore at top.v:2586
	// Tracing: top branch_forward _T_74 // Ignored: Inlined leading underscore at top.v:2587
	// Tracing: top branch_forward _T_85 // Ignored: Inlined leading underscore at top.v:2588
	// Tracing: top branch_forward _T_86 // Ignored: Inlined leading underscore at top.v:2589
	// Tracing: top branch_forward _T_87 // Ignored: Inlined leading underscore at top.v:2590
	// Tracing: top branch_forward _T_89 // Ignored: Inlined leading underscore at top.v:2591
	// Tracing: top branch_forward _T_100 // Ignored: Inlined leading underscore at top.v:2592
	// Tracing: top branch_forward _T_101 // Ignored: Inlined leading underscore at top.v:2593
	// Tracing: top branch_forward _T_103 // Ignored: Inlined leading underscore at top.v:2594
	// Tracing: top branch_forward _T_109 // Ignored: Inlined leading underscore at top.v:2595
	// Tracing: top branch_forward _T_117 // Ignored: Inlined leading underscore at top.v:2596
	// Tracing: top branch_forward _T_119 // Ignored: Inlined leading underscore at top.v:2597
	// Tracing: top branch_forward _T_121 // Ignored: Inlined leading underscore at top.v:2598
	// Tracing: top branch_forward _T_134 // Ignored: Inlined leading underscore at top.v:2599
	// Tracing: top branch_forward _T_136 // Ignored: Inlined leading underscore at top.v:2600
	// Tracing: top branch_forward _T_142 // Ignored: Inlined leading underscore at top.v:2601
	// Tracing: top branch_forward _T_145 // Ignored: Inlined leading underscore at top.v:2602
	// Tracing: top branch_forward _T_151 // Ignored: Inlined leading underscore at top.v:2603
	// Tracing: top branch_forward _T_153 // Ignored: Inlined leading underscore at top.v:2604
	// Tracing: top branch_forward _GEN_5 // Ignored: Inlined leading underscore at top.v:2605
	// Tracing: top branch_forward _GEN_6 // Ignored: Inlined leading underscore at top.v:2606
	// Tracing: top branch_forward _GEN_7 // Ignored: Inlined leading underscore at top.v:2607
	// Tracing: top branch_forward _GEN_8 // Ignored: Inlined leading underscore at top.v:2608
	// Tracing: top branch_forward _GEN_9 // Ignored: Inlined leading underscore at top.v:2609
	// Tracing: top branch_forward _GEN_10 // Ignored: Inlined leading underscore at top.v:2610
	// Tracing: top branch_forward _GEN_11 // Ignored: Inlined leading underscore at top.v:2611
	// Tracing: top branch_forward _GEN_12 // Ignored: Inlined leading underscore at top.v:2612
	// Tracing: top branch_forward _GEN_13 // Ignored: Inlined leading underscore at top.v:2613
	// Tracing: top branch_forward _GEN_14 // Ignored: Inlined leading underscore at top.v:2614
	// Tracing: top branch_forward _GEN_15 // Ignored: Inlined leading underscore at top.v:2615
	// Tracing: top branch_forward _T_156 // Ignored: Inlined leading underscore at top.v:2616
	// Tracing: top branch_forward _T_158 // Ignored: Inlined leading underscore at top.v:2617
	// Tracing: top branch_forward _T_159 // Ignored: Inlined leading underscore at top.v:2618
	// Tracing: top branch_forward _T_167 // Ignored: Inlined leading underscore at top.v:2619
	// Tracing: top branch_forward _T_171 // Ignored: Inlined leading underscore at top.v:2620
	// Tracing: top branch_forward _T_173 // Ignored: Inlined leading underscore at top.v:2621
	// Tracing: top branch_forward _T_174 // Ignored: Inlined leading underscore at top.v:2622
	// Tracing: top branch_forward _T_175 // Ignored: Inlined leading underscore at top.v:2623
	// Tracing: top branch_forward _T_176 // Ignored: Inlined leading underscore at top.v:2624
	// Tracing: top branch_forward _T_177 // Ignored: Inlined leading underscore at top.v:2625
	// Tracing: top branch_forward _T_178 // Ignored: Inlined leading underscore at top.v:2626
	// Tracing: top branch_forward _T_179 // Ignored: Inlined leading underscore at top.v:2627
	// Tracing: top branch_forward _T_192 // Ignored: Inlined leading underscore at top.v:2628
	// Tracing: top branch_forward _T_196 // Ignored: Inlined leading underscore at top.v:2629
	// Tracing: top branch_forward _T_197 // Ignored: Inlined leading underscore at top.v:2630
	// Tracing: top branch_forward _T_198 // Ignored: Inlined leading underscore at top.v:2631
	// Tracing: top branch_forward _T_200 // Ignored: Inlined leading underscore at top.v:2632
	// Tracing: top branch_forward _T_212 // Ignored: Inlined leading underscore at top.v:2633
	// Tracing: top branch_forward _T_217 // Ignored: Inlined leading underscore at top.v:2634
	// Tracing: top branch_forward _T_218 // Ignored: Inlined leading underscore at top.v:2635
	// Tracing: top branch_forward _T_220 // Ignored: Inlined leading underscore at top.v:2636
	// Tracing: top branch_forward _T_226 // Ignored: Inlined leading underscore at top.v:2637
	// Tracing: top branch_forward _T_234 // Ignored: Inlined leading underscore at top.v:2638
	// Tracing: top branch_forward _T_242 // Ignored: Inlined leading underscore at top.v:2639
	// Tracing: top branch_forward _T_244 // Ignored: Inlined leading underscore at top.v:2640
	// Tracing: top branch_forward _T_246 // Ignored: Inlined leading underscore at top.v:2641
	// Tracing: top branch_forward _T_259 // Ignored: Inlined leading underscore at top.v:2642
	// Tracing: top branch_forward _T_265 // Ignored: Inlined leading underscore at top.v:2643
	// Tracing: top branch_forward _T_267 // Ignored: Inlined leading underscore at top.v:2644
	// Tracing: top branch_forward _T_279 // Ignored: Inlined leading underscore at top.v:2645
	// Tracing: top branch_forward _T_285 // Ignored: Inlined leading underscore at top.v:2646
	// Tracing: top branch_forward _T_287 // Ignored: Inlined leading underscore at top.v:2647
	// Tracing: top branch_forward _GEN_16 // Ignored: Inlined leading underscore at top.v:2648
	// Tracing: top branch_forward _GEN_17 // Ignored: Inlined leading underscore at top.v:2649
	// Tracing: top branch_forward _GEN_18 // Ignored: Inlined leading underscore at top.v:2650
	// Tracing: top branch_forward _GEN_19 // Ignored: Inlined leading underscore at top.v:2651
	// Tracing: top branch_forward _GEN_20 // Ignored: Inlined leading underscore at top.v:2652
	// Tracing: top branch_forward _GEN_21 // Ignored: Inlined leading underscore at top.v:2653
	// Tracing: top branch_forward _GEN_22 // Ignored: Inlined leading underscore at top.v:2654
	// Tracing: top branch_forward _GEN_23 // Ignored: Inlined leading underscore at top.v:2655
	// Tracing: top branch_forward _GEN_24 // Ignored: Inlined leading underscore at top.v:2656
	// Tracing: top branch_forward _GEN_25 // Ignored: Inlined leading underscore at top.v:2657
	// Tracing: top branch_forward _GEN_26 // Ignored: Inlined leading underscore at top.v:2658
	// Tracing: top branch_forward _T_290 // Ignored: Inlined leading underscore at top.v:2659
	// Tracing: top branch_forward _GEN_27 // Ignored: Inlined leading underscore at top.v:2660
	// Tracing: top branch_forward _T_323 // Ignored: Inlined leading underscore at top.v:2661
	// Tracing: top branch_forward _T_325 // Ignored: Inlined leading underscore at top.v:2662
	// Tracing: top branch_forward _GEN_28 // Ignored: Inlined leading underscore at top.v:2663
	// Tracing: top branch_forward _GEN_29 // Ignored: Inlined leading underscore at top.v:2664
	// Tracing: top branch_forward _T_350 // Ignored: Inlined leading underscore at top.v:2665
	// Tracing: top branch_forward _T_351 // Ignored: Inlined leading underscore at top.v:2666
	// Tracing: top branch_forward _T_357 // Ignored: Inlined leading underscore at top.v:2667
	// Tracing: top branch_forward _T_363 // Ignored: Inlined leading underscore at top.v:2668
	// Tracing: top branch_forward _T_365 // Ignored: Inlined leading underscore at top.v:2669
	// Tracing: top branch_forward _GEN_30 // Ignored: Inlined leading underscore at top.v:2670
	// Tracing: top branch_forward _GEN_31 // Ignored: Inlined leading underscore at top.v:2671
	// Tracing: top branch_forward _GEN_32 // Ignored: Inlined leading underscore at top.v:2672
	// Tracing: top branch_forward _GEN_34 // Ignored: Inlined leading underscore at top.v:2673
    }
}

void Vtop::traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
			      & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)) 
				 & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)))));
	vcdp->fullBit  (c+2,(vlTOPp->top__DOT__control__DOT__control_decode_io_branch));
	vcdp->fullBit  (c+3,(((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
			      & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type))));
	vcdp->fullBit  (c+4,(((0x33U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
			      | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type) 
				 | ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)) 
				    & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
				       & ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type) 
					  | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type) 
					     | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type) 
						| (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type))))))))));
	vcdp->fullBus  (c+5,(((0x33U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))
			       ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)
				        ? 4U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)
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
						      : 7U))))))))),3);
	vcdp->fullBus  (c+6,(((0x33U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))
			       ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)
				        ? 0U : ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)
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
						      : 0U))))))))),2);
	vcdp->fullBit  (c+7,(((0x33U != (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
			      & ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type) 
				 | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type) 
				    | ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
				       & ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type) 
					  | ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type)) 
					     & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type)) 
						& (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type))))))))));
	vcdp->fullBus  (c+8,(vlTOPp->top__DOT__control__DOT__control_decode_io_extend_select),2);
	vcdp->fullBus  (c+9,(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select),2);
	vcdp->fullBus  (c+10,(vlTOPp->top__DOT__register_file_io_write_data),32);
	vcdp->fullBus  (c+11,(vlTOPp->top__DOT__register_file_io_rs1),32);
	vcdp->fullBus  (c+12,(vlTOPp->top__DOT__register_file_io_rs2),32);
	vcdp->fullBus  (c+13,(vlTOPp->top__DOT__alu_io_operand_a),32);
	vcdp->fullBus  (c+14,(vlTOPp->top__DOT__alu_io_operand_b),32);
	vcdp->fullBus  (c+15,(vlTOPp->top__DOT__alu_control_io_output),5);
	vcdp->fullBus  (c+16,((IData)(vlTOPp->top__DOT__alu__DOT___GEN_21)),32);
	vcdp->fullBus  (c+17,((vlTOPp->top__DOT__immediate_generation__DOT___T_41 
			       + vlTOPp->top__DOT__IF_ID__DOT__pc_register)),32);
	vcdp->fullBus  (c+18,((vlTOPp->top__DOT__immediate_generation__DOT___T_62 
			       + vlTOPp->top__DOT__IF_ID__DOT__pc_register)),32);
	vcdp->fullBus  (c+19,(vlTOPp->top__DOT__immediate_generation__DOT__i_immediate_32),32);
	vcdp->fullBus  (c+20,(vlTOPp->top__DOT__jalr_io_input_a),32);
	vcdp->fullBus  (c+21,((0xfffffffeU & (vlTOPp->top__DOT__jalr_io_input_a 
					      + vlTOPp->top__DOT__immediate_generation__DOT__i_immediate_32))),32);
	vcdp->fullBus  (c+22,(((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
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
	vcdp->fullBus  (c+23,(vlTOPp->top__DOT__instruction_memory__DOT__memory___05FT_11_data),32);
	vcdp->fullBus  (c+24,(vlTOPp->top__DOT__data_memory_io_memory_out),32);
	vcdp->fullBus  (c+25,(((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
			        ? vlTOPp->top__DOT___GEN_1
			        : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
				    ? ((IData)(vlTOPp->top__DOT___T_18)
				        ? 0U : vlTOPp->top__DOT___GEN_1)
				    : ((2U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
				        ? 0U : ((3U 
						 == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
						 ? 0U
						 : vlTOPp->top__DOT___GEN_1))))),32);
	vcdp->fullBus  (c+26,(((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
			        ? ((IData)(4U) + vlTOPp->top__DOT__pc__DOT__register)
			        : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
				    ? ((IData)(vlTOPp->top__DOT___T_18)
				        ? 0U : ((IData)(4U) 
						+ vlTOPp->top__DOT__pc__DOT__register))
				    : ((2U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
				        ? 0U : ((3U 
						 == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
						 ? 0U
						 : 
						((IData)(4U) 
						 + vlTOPp->top__DOT__pc__DOT__register)))))),32);
	vcdp->fullBus  (c+27,(((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
			        ? vlTOPp->top__DOT___GEN_0
			        : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
				    ? ((IData)(vlTOPp->top__DOT___T_18)
				        ? 0U : vlTOPp->top__DOT___GEN_0)
				    : ((2U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
				        ? 0U : ((3U 
						 == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_next_pc_select))
						 ? 0U
						 : vlTOPp->top__DOT___GEN_0))))),32);
	vcdp->fullBus  (c+28,(((0U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_extend_select))
			        ? vlTOPp->top__DOT__immediate_generation__DOT__i_immediate_32
			        : ((1U == (IData)(vlTOPp->top__DOT__control__DOT__control_decode_io_extend_select))
				    ? ((((0x80000000U 
					  & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
					  ? 0xfffffU
					  : 0U) << 0xcU) 
				       | ((0xfe0U & 
					   (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					    >> 0x14U)) 
					  | (0x1fU 
					     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
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
	vcdp->fullBit  (c+29,(((~ (IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)) 
			       & ((0x33U != (0x7fU 
					     & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
				  & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)) 
				     & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type))))));
	vcdp->fullBit  (c+30,(((~ (IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)) 
			       & ((0x33U != (0x7fU 
					     & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
				  & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type)))));
	vcdp->fullBit  (c+31,(((~ (IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)) 
			       & ((0x33U == (0x7fU 
					     & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
				  | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type) 
				     | ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type)) 
					& ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
					   & ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type) 
					      | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type) 
						 | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type) 
						    | (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type)))))))))));
	vcdp->fullBus  (c+32,(((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
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
	vcdp->fullBus  (c+33,(((IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)
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
	vcdp->fullBit  (c+34,(((~ (IData)(vlTOPp->top__DOT__hazard_detection_io_pc_forward)) 
			       & ((0x33U != (0x7fU 
					     & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)) 
				  & ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type) 
				     | ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type) 
					| ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type)) 
					   & ((IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type) 
					      | ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type)) 
						 & ((~ (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type)) 
						    & (IData)(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type)))))))))));
	vcdp->fullBus  (c+35,(vlTOPp->top__DOT___GEN_68),32);
	vcdp->fullBus  (c+36,(vlTOPp->top__DOT__forward_unit__DOT___GEN_8),2);
	vcdp->fullBus  (c+37,(vlTOPp->top__DOT__forward_unit__DOT___GEN_9),2);
	vcdp->fullBit  (c+38,(vlTOPp->top__DOT__hazard_detection_io_pc_forward));
	vcdp->fullBus  (c+39,(vlTOPp->top__DOT__branch_logic_io_rs1),32);
	vcdp->fullBus  (c+40,(vlTOPp->top__DOT__branch_logic_io_rs2),32);
	vcdp->fullBit  (c+41,(((0U == (7U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
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
					    : ((6U 
						== 
						(7U 
						 & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						    >> 0xcU)))
					        ? (vlTOPp->top__DOT__branch_logic_io_rs1 
						   < vlTOPp->top__DOT__branch_logic_io_rs2)
					        : (
						   (7U 
						    == 
						    (7U 
						     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							>> 0xcU))) 
						   & (vlTOPp->top__DOT__branch_logic_io_rs1 
						      >= vlTOPp->top__DOT__branch_logic_io_rs2)))))))));
	vcdp->fullBus  (c+42,(vlTOPp->top__DOT__branch_forward_io_forward_rs1),4);
	vcdp->fullBus  (c+43,(vlTOPp->top__DOT__branch_forward__DOT___GEN_34),4);
	vcdp->fullBit  (c+44,(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_load_type));
	vcdp->fullBit  (c+45,(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_s_type));
	vcdp->fullBit  (c+46,(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_sb_type));
	vcdp->fullBit  (c+47,(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_i_type));
	vcdp->fullBit  (c+48,(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jalr_type));
	vcdp->fullBit  (c+49,(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_jal_type));
	vcdp->fullBit  (c+50,(vlTOPp->top__DOT__control__DOT__instruction_type_decode_io_lui_type));
	vcdp->fullBus  (c+51,(vlTOPp->top__DOT__immediate_generation__DOT__i_immediate_32),32);
	vcdp->fullBus  (c+52,(vlTOPp->top__DOT__immediate_generation__DOT___T_41),32);
	vcdp->fullBus  (c+53,(vlTOPp->top__DOT__immediate_generation__DOT___T_62),32);
	vcdp->fullBus  (c+54,((vlTOPp->top__DOT__jalr_io_input_a 
			       + vlTOPp->top__DOT__immediate_generation__DOT__i_immediate_32)),32);
	vcdp->fullBus  (c+55,(vlTOPp->top__DOT__data_memory__DOT__memory___05FT_23_data),32);
	vcdp->fullBus  (c+56,(vlTOPp->top__DOT__data_memory__DOT__memory___05FT_24_data),32);
	vcdp->fullBus  (c+57,((0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)),7);
	vcdp->fullBit  (c+58,(vlTOPp->top__DOT__MEM_WB__DOT__register_registerwrite));
	vcdp->fullBus  (c+59,(vlTOPp->top__DOT__MEM_WB__DOT__register_rd_select),5);
	vcdp->fullBus  (c+60,((0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					>> 0xfU))),5);
	vcdp->fullBus  (c+61,((0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					>> 0x14U))),5);
	vcdp->fullBus  (c+62,(vlTOPp->top__DOT__ID_EX__DOT__control_aluop_register),3);
	vcdp->fullBit  (c+63,(vlTOPp->top__DOT__ID_EX__DOT__func7_register));
	vcdp->fullBus  (c+64,(vlTOPp->top__DOT__ID_EX__DOT__func3_register),3);
	vcdp->fullBus  (c+65,(vlTOPp->top__DOT__IF_ID__DOT__instruction_register),32);
	vcdp->fullBus  (c+66,(vlTOPp->top__DOT__IF_ID__DOT__pc_register),32);
	vcdp->fullBus  (c+67,(((((0x80000000U & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
				  ? 0xfffffU : 0U) 
				<< 0xcU) | ((0xfe0U 
					     & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						>> 0x14U)) 
					    | (0x1fU 
					       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						  >> 7U))))),32);
	vcdp->fullBus  (c+68,((IData)((VL_ULL(0x7fffffffffff) 
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
	vcdp->fullBus  (c+69,(vlTOPp->top__DOT__pc__DOT__register),32);
	vcdp->fullBus  (c+70,(((IData)(4U) + vlTOPp->top__DOT__pc__DOT__register)),32);
	vcdp->fullBus  (c+71,((0x3ffU & (vlTOPp->top__DOT__pc__DOT__register 
					 >> 2U))),10);
	vcdp->fullBit  (c+72,(vlTOPp->top__DOT__EX_MEM__DOT__register_memorywrite));
	vcdp->fullBit  (c+73,(vlTOPp->top__DOT__EX_MEM__DOT__register_memoryread));
	vcdp->fullBus  (c+74,((0x3ffU & (vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out 
					 >> 2U))),10);
	vcdp->fullBus  (c+75,(vlTOPp->top__DOT__EX_MEM__DOT__register_rs2),32);
	vcdp->fullBus  (c+76,(vlTOPp->top__DOT__IF_ID__DOT__pc4_register),32);
	vcdp->fullBus  (c+77,((0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					>> 7U))),5);
	vcdp->fullBus  (c+78,((7U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
				     >> 0xcU))),3);
	vcdp->fullBit  (c+79,((1U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
				     >> 0x1eU))));
	vcdp->fullBus  (c+80,(vlTOPp->top__DOT__ID_EX__DOT__pc4_register),32);
	vcdp->fullBus  (c+81,(vlTOPp->top__DOT__ID_EX__DOT__rs1_register),32);
	vcdp->fullBus  (c+82,(vlTOPp->top__DOT__ID_EX__DOT__rs2_register),32);
	vcdp->fullBus  (c+83,(vlTOPp->top__DOT__ID_EX__DOT__immediate_register),32);
	vcdp->fullBus  (c+84,(vlTOPp->top__DOT__ID_EX__DOT__rd_select_register),5);
	vcdp->fullBus  (c+85,(vlTOPp->top__DOT__ID_EX__DOT__rs1_select_register),5);
	vcdp->fullBus  (c+86,(vlTOPp->top__DOT__ID_EX__DOT__rs2_select_register),5);
	vcdp->fullBit  (c+87,(vlTOPp->top__DOT__ID_EX__DOT__control_memorywrite_register));
	vcdp->fullBit  (c+88,(vlTOPp->top__DOT__ID_EX__DOT__control_memoryread_register));
	vcdp->fullBit  (c+89,(vlTOPp->top__DOT__ID_EX__DOT__control_registerwrite_register));
	vcdp->fullBit  (c+90,(vlTOPp->top__DOT__ID_EX__DOT__control_memorytoregister_register));
	vcdp->fullBus  (c+91,(vlTOPp->top__DOT__ID_EX__DOT__control_opa_select_register),2);
	vcdp->fullBit  (c+92,(vlTOPp->top__DOT__ID_EX__DOT__control_opb_select_register));
	vcdp->fullBit  (c+93,(vlTOPp->top__DOT__EX_MEM__DOT__register_registerwrite));
	vcdp->fullBit  (c+94,(vlTOPp->top__DOT__EX_MEM__DOT__register_memorytoregister));
	vcdp->fullBus  (c+95,(vlTOPp->top__DOT__EX_MEM__DOT__register_rd_select),5);
	vcdp->fullBus  (c+96,(vlTOPp->top__DOT__EX_MEM__DOT__register_alu_out),32);
	vcdp->fullBit  (c+97,(vlTOPp->top__DOT__MEM_WB__DOT__register_memorytoregister));
	vcdp->fullBit  (c+98,(vlTOPp->top__DOT__MEM_WB__DOT__register_memoryread));
	vcdp->fullBus  (c+99,(vlTOPp->top__DOT__MEM_WB__DOT__register_datamemory_data),32);
	vcdp->fullBus  (c+100,(vlTOPp->top__DOT__MEM_WB__DOT__register_alu),32);
	vcdp->fullBit  (c+101,((0x33U == (0x7fU & vlTOPp->top__DOT__IF_ID__DOT__instruction_register))));
	vcdp->fullBus  (c+102,(vlTOPp->top__DOT__register_file__DOT__registers_0),32);
	vcdp->fullBus  (c+103,(vlTOPp->top__DOT__register_file__DOT__registers_1),32);
	vcdp->fullBus  (c+104,(vlTOPp->top__DOT__register_file__DOT__registers_2),32);
	vcdp->fullBus  (c+105,(vlTOPp->top__DOT__register_file__DOT__registers_3),32);
	vcdp->fullBus  (c+106,(vlTOPp->top__DOT__register_file__DOT__registers_4),32);
	vcdp->fullBus  (c+107,(vlTOPp->top__DOT__register_file__DOT__registers_5),32);
	vcdp->fullBus  (c+108,(vlTOPp->top__DOT__register_file__DOT__registers_6),32);
	vcdp->fullBus  (c+109,(vlTOPp->top__DOT__register_file__DOT__registers_7),32);
	vcdp->fullBus  (c+110,(vlTOPp->top__DOT__register_file__DOT__registers_8),32);
	vcdp->fullBus  (c+111,(vlTOPp->top__DOT__register_file__DOT__registers_9),32);
	vcdp->fullBus  (c+112,(vlTOPp->top__DOT__register_file__DOT__registers_10),32);
	vcdp->fullBus  (c+113,(vlTOPp->top__DOT__register_file__DOT__registers_11),32);
	vcdp->fullBus  (c+114,(vlTOPp->top__DOT__register_file__DOT__registers_12),32);
	vcdp->fullBus  (c+115,(vlTOPp->top__DOT__register_file__DOT__registers_13),32);
	vcdp->fullBus  (c+116,(vlTOPp->top__DOT__register_file__DOT__registers_14),32);
	vcdp->fullBus  (c+117,(vlTOPp->top__DOT__register_file__DOT__registers_15),32);
	vcdp->fullBus  (c+118,(vlTOPp->top__DOT__register_file__DOT__registers_16),32);
	vcdp->fullBus  (c+119,(vlTOPp->top__DOT__register_file__DOT__registers_17),32);
	vcdp->fullBus  (c+120,(vlTOPp->top__DOT__register_file__DOT__registers_18),32);
	vcdp->fullBus  (c+121,(vlTOPp->top__DOT__register_file__DOT__registers_19),32);
	vcdp->fullBus  (c+122,(vlTOPp->top__DOT__register_file__DOT__registers_20),32);
	vcdp->fullBus  (c+123,(vlTOPp->top__DOT__register_file__DOT__registers_21),32);
	vcdp->fullBus  (c+124,(vlTOPp->top__DOT__register_file__DOT__registers_22),32);
	vcdp->fullBus  (c+125,(vlTOPp->top__DOT__register_file__DOT__registers_23),32);
	vcdp->fullBus  (c+126,(vlTOPp->top__DOT__register_file__DOT__registers_24),32);
	vcdp->fullBus  (c+127,(vlTOPp->top__DOT__register_file__DOT__registers_25),32);
	vcdp->fullBus  (c+128,(vlTOPp->top__DOT__register_file__DOT__registers_26),32);
	vcdp->fullBus  (c+129,(vlTOPp->top__DOT__register_file__DOT__registers_27),32);
	vcdp->fullBus  (c+130,(vlTOPp->top__DOT__register_file__DOT__registers_28),32);
	vcdp->fullBus  (c+131,(vlTOPp->top__DOT__register_file__DOT__registers_29),32);
	vcdp->fullBus  (c+132,(vlTOPp->top__DOT__register_file__DOT__registers_30),32);
	vcdp->fullBus  (c+133,(vlTOPp->top__DOT__register_file__DOT__registers_31),32);
	vcdp->fullBus  (c+134,((0xfffU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					  >> 0x14U))),12);
	vcdp->fullBus  (c+135,((0x7fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					 >> 0x19U))),7);
	vcdp->fullBus  (c+136,(((0xfe0U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					   >> 0x14U)) 
				| (0x1fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					    >> 7U)))),12);
	vcdp->fullBus  (c+137,((0xfU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					>> 8U))),4);
	vcdp->fullBus  (c+138,((0x3fU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					 >> 0x19U))),6);
	vcdp->fullBit  (c+139,((1U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
				      >> 7U))));
	vcdp->fullBit  (c+140,((1U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
				      >> 0x1fU))));
	vcdp->fullBus  (c+141,(((0x1000U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					    >> 0x13U)) 
				| ((0x800U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					      << 4U)) 
				   | ((0x7e0U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						 >> 0x14U)) 
				      | (0x1eU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						  >> 7U)))))),13);
	vcdp->fullBus  (c+142,((0xfffffU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					    >> 0xcU))),20);
	vcdp->fullBus  (c+143,(((((0x80000000U & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
				   ? 0xfffU : 0U) << 0x14U) 
				| (0xfffffU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					       >> 0xcU)))),32);
	vcdp->fullQuad (c+144,((VL_ULL(0x7fffffffffff) 
				& ((QData)((IData)(
						   ((((0x80000000U 
						       & vlTOPp->top__DOT__IF_ID__DOT__instruction_register)
						       ? 0xfffU
						       : 0U) 
						     << 0x14U) 
						    | (0xfffffU 
						       & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
							  >> 0xcU))))) 
				   << 0xcU))),47);
	vcdp->fullBus  (c+146,((0x3ffU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					  >> 0x15U))),10);
	vcdp->fullBit  (c+147,((1U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
				      >> 0x14U))));
	vcdp->fullBus  (c+148,((0xffU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					 >> 0xcU))),8);
	vcdp->fullBus  (c+149,(((0x100000U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
					      >> 0xbU)) 
				| ((0xff000U & vlTOPp->top__DOT__IF_ID__DOT__instruction_register) 
				   | ((0x800U & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						 >> 9U)) 
				      | (0x7feU & (vlTOPp->top__DOT__IF_ID__DOT__instruction_register 
						   >> 0x14U)))))),21);
	vcdp->fullBit  (c+150,(((IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memorywrite) 
				& (~ (IData)(vlTOPp->top__DOT__EX_MEM__DOT__register_memoryread)))));
	vcdp->fullBit  (c+151,(vlTOPp->clock));
	vcdp->fullBit  (c+152,(vlTOPp->reset));
	vcdp->fullBus  (c+153,(vlTOPp->io_reg_out),32);
	vcdp->fullBit  (c+154,(1U));
    }
}
