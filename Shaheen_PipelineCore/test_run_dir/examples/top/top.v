module instruction_type_decode(
  input  [6:0] io_opcode,
  output       io_r_type,
  output       io_load_type,
  output       io_s_type,
  output       io_sb_type,
  output       io_i_type,
  output       io_jalr_type,
  output       io_jal_type,
  output       io_lui_type
);
  wire  _T_32; // @[instruction_type_decode.scala 25:20]
  wire  _T_35; // @[instruction_type_decode.scala 27:27]
  wire  _T_38; // @[instruction_type_decode.scala 29:27]
  wire  _T_41; // @[instruction_type_decode.scala 31:27]
  wire  _T_44; // @[instruction_type_decode.scala 33:27]
  wire  _T_47; // @[instruction_type_decode.scala 35:27]
  wire  _T_50; // @[instruction_type_decode.scala 37:27]
  wire  _T_53; // @[instruction_type_decode.scala 39:27]
  wire  _GEN_3; // @[instruction_type_decode.scala 37:45]
  wire  _GEN_6; // @[instruction_type_decode.scala 35:45]
  wire  _GEN_7; // @[instruction_type_decode.scala 35:45]
  wire  _GEN_10; // @[instruction_type_decode.scala 33:45]
  wire  _GEN_11; // @[instruction_type_decode.scala 33:45]
  wire  _GEN_12; // @[instruction_type_decode.scala 33:45]
  wire  _GEN_15; // @[instruction_type_decode.scala 31:45]
  wire  _GEN_16; // @[instruction_type_decode.scala 31:45]
  wire  _GEN_17; // @[instruction_type_decode.scala 31:45]
  wire  _GEN_18; // @[instruction_type_decode.scala 31:45]
  wire  _GEN_21; // @[instruction_type_decode.scala 29:45]
  wire  _GEN_22; // @[instruction_type_decode.scala 29:45]
  wire  _GEN_23; // @[instruction_type_decode.scala 29:45]
  wire  _GEN_24; // @[instruction_type_decode.scala 29:45]
  wire  _GEN_25; // @[instruction_type_decode.scala 29:45]
  wire  _GEN_28; // @[instruction_type_decode.scala 27:45]
  wire  _GEN_29; // @[instruction_type_decode.scala 27:45]
  wire  _GEN_30; // @[instruction_type_decode.scala 27:45]
  wire  _GEN_31; // @[instruction_type_decode.scala 27:45]
  wire  _GEN_32; // @[instruction_type_decode.scala 27:45]
  wire  _GEN_33; // @[instruction_type_decode.scala 27:45]
  assign _T_32 = io_opcode == 7'h33; // @[instruction_type_decode.scala 25:20]
  assign _T_35 = io_opcode == 7'h3; // @[instruction_type_decode.scala 27:27]
  assign _T_38 = io_opcode == 7'h23; // @[instruction_type_decode.scala 29:27]
  assign _T_41 = io_opcode == 7'h63; // @[instruction_type_decode.scala 31:27]
  assign _T_44 = io_opcode == 7'h13; // @[instruction_type_decode.scala 33:27]
  assign _T_47 = io_opcode == 7'h67; // @[instruction_type_decode.scala 35:27]
  assign _T_50 = io_opcode == 7'h6f; // @[instruction_type_decode.scala 37:27]
  assign _T_53 = io_opcode == 7'h37; // @[instruction_type_decode.scala 39:27]
  assign _GEN_3 = _T_50 ? 1'h0 : _T_53; // @[instruction_type_decode.scala 37:45]
  assign _GEN_6 = _T_47 ? 1'h0 : _T_50; // @[instruction_type_decode.scala 35:45]
  assign _GEN_7 = _T_47 ? 1'h0 : _GEN_3; // @[instruction_type_decode.scala 35:45]
  assign _GEN_10 = _T_44 ? 1'h0 : _T_47; // @[instruction_type_decode.scala 33:45]
  assign _GEN_11 = _T_44 ? 1'h0 : _GEN_6; // @[instruction_type_decode.scala 33:45]
  assign _GEN_12 = _T_44 ? 1'h0 : _GEN_7; // @[instruction_type_decode.scala 33:45]
  assign _GEN_15 = _T_41 ? 1'h0 : _T_44; // @[instruction_type_decode.scala 31:45]
  assign _GEN_16 = _T_41 ? 1'h0 : _GEN_10; // @[instruction_type_decode.scala 31:45]
  assign _GEN_17 = _T_41 ? 1'h0 : _GEN_11; // @[instruction_type_decode.scala 31:45]
  assign _GEN_18 = _T_41 ? 1'h0 : _GEN_12; // @[instruction_type_decode.scala 31:45]
  assign _GEN_21 = _T_38 ? 1'h0 : _T_41; // @[instruction_type_decode.scala 29:45]
  assign _GEN_22 = _T_38 ? 1'h0 : _GEN_15; // @[instruction_type_decode.scala 29:45]
  assign _GEN_23 = _T_38 ? 1'h0 : _GEN_16; // @[instruction_type_decode.scala 29:45]
  assign _GEN_24 = _T_38 ? 1'h0 : _GEN_17; // @[instruction_type_decode.scala 29:45]
  assign _GEN_25 = _T_38 ? 1'h0 : _GEN_18; // @[instruction_type_decode.scala 29:45]
  assign _GEN_28 = _T_35 ? 1'h0 : _T_38; // @[instruction_type_decode.scala 27:45]
  assign _GEN_29 = _T_35 ? 1'h0 : _GEN_21; // @[instruction_type_decode.scala 27:45]
  assign _GEN_30 = _T_35 ? 1'h0 : _GEN_22; // @[instruction_type_decode.scala 27:45]
  assign _GEN_31 = _T_35 ? 1'h0 : _GEN_23; // @[instruction_type_decode.scala 27:45]
  assign _GEN_32 = _T_35 ? 1'h0 : _GEN_24; // @[instruction_type_decode.scala 27:45]
  assign _GEN_33 = _T_35 ? 1'h0 : _GEN_25; // @[instruction_type_decode.scala 27:45]
  assign io_r_type = io_opcode == 7'h33; // @[instruction_type_decode.scala 16:19 instruction_type_decode.scala 26:19 instruction_type_decode.scala 42:19]
  assign io_load_type = _T_32 ? 1'h0 : _T_35; // @[instruction_type_decode.scala 17:22 instruction_type_decode.scala 28:22 instruction_type_decode.scala 43:22]
  assign io_s_type = _T_32 ? 1'h0 : _GEN_28; // @[instruction_type_decode.scala 18:19 instruction_type_decode.scala 30:19 instruction_type_decode.scala 44:19]
  assign io_sb_type = _T_32 ? 1'h0 : _GEN_29; // @[instruction_type_decode.scala 19:20 instruction_type_decode.scala 32:20 instruction_type_decode.scala 45:20]
  assign io_i_type = _T_32 ? 1'h0 : _GEN_30; // @[instruction_type_decode.scala 20:19 instruction_type_decode.scala 34:19 instruction_type_decode.scala 46:19]
  assign io_jalr_type = _T_32 ? 1'h0 : _GEN_31; // @[instruction_type_decode.scala 21:22 instruction_type_decode.scala 36:22 instruction_type_decode.scala 47:22]
  assign io_jal_type = _T_32 ? 1'h0 : _GEN_32; // @[instruction_type_decode.scala 22:21 instruction_type_decode.scala 38:21 instruction_type_decode.scala 48:21]
  assign io_lui_type = _T_32 ? 1'h0 : _GEN_33; // @[instruction_type_decode.scala 23:21 instruction_type_decode.scala 40:21 instruction_type_decode.scala 49:21]
endmodule
module control_decode(
  input        io_r_type,
  input        io_load_type,
  input        io_s_type,
  input        io_sb_type,
  input        io_i_type,
  input        io_jalr_type,
  input        io_jal_type,
  input        io_lui_type,
  output       io_memory_write,
  output       io_branch,
  output       io_memory_read,
  output       io_register_write,
  output       io_memory_to_register,
  output [2:0] io_alu_op,
  output [1:0] io_operand_a_select,
  output       io_operand_b_select,
  output [1:0] io_extend_select,
  output [1:0] io_next_pc_select
);
  wire [2:0] _GEN_2; // @[control_decode.scala 106:38]
  wire [1:0] _GEN_3; // @[control_decode.scala 106:38]
  wire [1:0] _GEN_4; // @[control_decode.scala 106:38]
  wire  _GEN_6; // @[control_decode.scala 95:38]
  wire [2:0] _GEN_7; // @[control_decode.scala 95:38]
  wire [1:0] _GEN_8; // @[control_decode.scala 95:38]
  wire  _GEN_9; // @[control_decode.scala 95:38]
  wire [1:0] _GEN_10; // @[control_decode.scala 95:38]
  wire [1:0] _GEN_11; // @[control_decode.scala 95:38]
  wire  _GEN_13; // @[control_decode.scala 84:39]
  wire [2:0] _GEN_14; // @[control_decode.scala 84:39]
  wire [1:0] _GEN_15; // @[control_decode.scala 84:39]
  wire  _GEN_16; // @[control_decode.scala 84:39]
  wire [1:0] _GEN_17; // @[control_decode.scala 84:39]
  wire [1:0] _GEN_18; // @[control_decode.scala 84:39]
  wire  _GEN_20; // @[control_decode.scala 73:36]
  wire [2:0] _GEN_21; // @[control_decode.scala 73:36]
  wire [1:0] _GEN_22; // @[control_decode.scala 73:36]
  wire  _GEN_23; // @[control_decode.scala 73:36]
  wire [1:0] _GEN_24; // @[control_decode.scala 73:36]
  wire [1:0] _GEN_25; // @[control_decode.scala 73:36]
  wire  _GEN_28; // @[control_decode.scala 62:37]
  wire [2:0] _GEN_29; // @[control_decode.scala 62:37]
  wire [1:0] _GEN_30; // @[control_decode.scala 62:37]
  wire  _GEN_31; // @[control_decode.scala 62:37]
  wire [1:0] _GEN_32; // @[control_decode.scala 62:37]
  wire [1:0] _GEN_33; // @[control_decode.scala 62:37]
  wire  _GEN_35; // @[control_decode.scala 50:36]
  wire  _GEN_37; // @[control_decode.scala 50:36]
  wire [2:0] _GEN_38; // @[control_decode.scala 50:36]
  wire [1:0] _GEN_39; // @[control_decode.scala 50:36]
  wire  _GEN_40; // @[control_decode.scala 50:36]
  wire [1:0] _GEN_41; // @[control_decode.scala 50:36]
  wire [1:0] _GEN_42; // @[control_decode.scala 50:36]
  wire  _GEN_43; // @[control_decode.scala 38:39]
  wire  _GEN_44; // @[control_decode.scala 38:39]
  wire  _GEN_46; // @[control_decode.scala 38:39]
  wire [2:0] _GEN_47; // @[control_decode.scala 38:39]
  wire [1:0] _GEN_48; // @[control_decode.scala 38:39]
  wire  _GEN_49; // @[control_decode.scala 38:39]
  wire [1:0] _GEN_50; // @[control_decode.scala 38:39]
  wire [1:0] _GEN_51; // @[control_decode.scala 38:39]
  assign _GEN_2 = io_lui_type ? 3'h6 : 3'h7; // @[control_decode.scala 106:38]
  assign _GEN_3 = io_lui_type ? 2'h3 : 2'h0; // @[control_decode.scala 106:38]
  assign _GEN_4 = io_lui_type ? 2'h2 : 2'h0; // @[control_decode.scala 106:38]
  assign _GEN_6 = io_jal_type ? 1'h1 : io_lui_type; // @[control_decode.scala 95:38]
  assign _GEN_7 = io_jal_type ? 3'h3 : _GEN_2; // @[control_decode.scala 95:38]
  assign _GEN_8 = io_jal_type ? 2'h2 : _GEN_3; // @[control_decode.scala 95:38]
  assign _GEN_9 = io_jal_type ? 1'h0 : io_lui_type; // @[control_decode.scala 95:38]
  assign _GEN_10 = io_jal_type ? 2'h0 : _GEN_4; // @[control_decode.scala 95:38]
  assign _GEN_11 = io_jal_type ? 2'h2 : 2'h0; // @[control_decode.scala 95:38]
  assign _GEN_13 = io_jalr_type ? 1'h1 : _GEN_6; // @[control_decode.scala 84:39]
  assign _GEN_14 = io_jalr_type ? 3'h3 : _GEN_7; // @[control_decode.scala 84:39]
  assign _GEN_15 = io_jalr_type ? 2'h2 : _GEN_8; // @[control_decode.scala 84:39]
  assign _GEN_16 = io_jalr_type ? 1'h0 : _GEN_9; // @[control_decode.scala 84:39]
  assign _GEN_17 = io_jalr_type ? 2'h0 : _GEN_10; // @[control_decode.scala 84:39]
  assign _GEN_18 = io_jalr_type ? 2'h3 : _GEN_11; // @[control_decode.scala 84:39]
  assign _GEN_20 = io_i_type ? 1'h1 : _GEN_13; // @[control_decode.scala 73:36]
  assign _GEN_21 = io_i_type ? 3'h1 : _GEN_14; // @[control_decode.scala 73:36]
  assign _GEN_22 = io_i_type ? 2'h0 : _GEN_15; // @[control_decode.scala 73:36]
  assign _GEN_23 = io_i_type ? 1'h1 : _GEN_16; // @[control_decode.scala 73:36]
  assign _GEN_24 = io_i_type ? 2'h0 : _GEN_17; // @[control_decode.scala 73:36]
  assign _GEN_25 = io_i_type ? 2'h0 : _GEN_18; // @[control_decode.scala 73:36]
  assign _GEN_28 = io_sb_type ? 1'h0 : _GEN_20; // @[control_decode.scala 62:37]
  assign _GEN_29 = io_sb_type ? 3'h2 : _GEN_21; // @[control_decode.scala 62:37]
  assign _GEN_30 = io_sb_type ? 2'h0 : _GEN_22; // @[control_decode.scala 62:37]
  assign _GEN_31 = io_sb_type ? 1'h0 : _GEN_23; // @[control_decode.scala 62:37]
  assign _GEN_32 = io_sb_type ? 2'h0 : _GEN_24; // @[control_decode.scala 62:37]
  assign _GEN_33 = io_sb_type ? 2'h1 : _GEN_25; // @[control_decode.scala 62:37]
  assign _GEN_35 = io_s_type ? 1'h0 : io_sb_type; // @[control_decode.scala 50:36]
  assign _GEN_37 = io_s_type ? 1'h0 : _GEN_28; // @[control_decode.scala 50:36]
  assign _GEN_38 = io_s_type ? 3'h5 : _GEN_29; // @[control_decode.scala 50:36]
  assign _GEN_39 = io_s_type ? 2'h0 : _GEN_30; // @[control_decode.scala 50:36]
  assign _GEN_40 = io_s_type ? 1'h1 : _GEN_31; // @[control_decode.scala 50:36]
  assign _GEN_41 = io_s_type ? 2'h1 : _GEN_32; // @[control_decode.scala 50:36]
  assign _GEN_42 = io_s_type ? 2'h0 : _GEN_33; // @[control_decode.scala 50:36]
  assign _GEN_43 = io_load_type ? 1'h0 : io_s_type; // @[control_decode.scala 38:39]
  assign _GEN_44 = io_load_type ? 1'h0 : _GEN_35; // @[control_decode.scala 38:39]
  assign _GEN_46 = io_load_type ? 1'h1 : _GEN_37; // @[control_decode.scala 38:39]
  assign _GEN_47 = io_load_type ? 3'h4 : _GEN_38; // @[control_decode.scala 38:39]
  assign _GEN_48 = io_load_type ? 2'h0 : _GEN_39; // @[control_decode.scala 38:39]
  assign _GEN_49 = io_load_type ? 1'h1 : _GEN_40; // @[control_decode.scala 38:39]
  assign _GEN_50 = io_load_type ? 2'h0 : _GEN_41; // @[control_decode.scala 38:39]
  assign _GEN_51 = io_load_type ? 2'h0 : _GEN_42; // @[control_decode.scala 38:39]
  assign io_memory_write = io_r_type ? 1'h0 : _GEN_43; // @[control_decode.scala 28:25 control_decode.scala 40:25 control_decode.scala 52:25 control_decode.scala 63:25 control_decode.scala 74:25 control_decode.scala 85:25 control_decode.scala 96:25 control_decode.scala 107:25 control_decode.scala 118:25]
  assign io_branch = io_r_type ? 1'h0 : _GEN_44; // @[control_decode.scala 29:19 control_decode.scala 41:19 control_decode.scala 53:19 control_decode.scala 64:19 control_decode.scala 75:19 control_decode.scala 86:19 control_decode.scala 97:19 control_decode.scala 108:19 control_decode.scala 119:19]
  assign io_memory_read = io_r_type ? 1'h0 : io_load_type; // @[control_decode.scala 30:24 control_decode.scala 42:24 control_decode.scala 54:24 control_decode.scala 65:24 control_decode.scala 76:24 control_decode.scala 87:24 control_decode.scala 98:24 control_decode.scala 109:24 control_decode.scala 120:24]
  assign io_register_write = io_r_type ? 1'h1 : _GEN_46; // @[control_decode.scala 31:27 control_decode.scala 43:27 control_decode.scala 55:27 control_decode.scala 66:27 control_decode.scala 77:27 control_decode.scala 88:27 control_decode.scala 99:27 control_decode.scala 110:27 control_decode.scala 121:27]
  assign io_memory_to_register = io_r_type ? 1'h0 : io_load_type; // @[control_decode.scala 32:31 control_decode.scala 44:31 control_decode.scala 56:31 control_decode.scala 67:31 control_decode.scala 78:31 control_decode.scala 89:31 control_decode.scala 100:31 control_decode.scala 111:31 control_decode.scala 122:31]
  assign io_alu_op = io_r_type ? 3'h0 : _GEN_47; // @[control_decode.scala 33:19 control_decode.scala 45:19 control_decode.scala 57:19 control_decode.scala 68:19 control_decode.scala 79:19 control_decode.scala 90:19 control_decode.scala 101:19 control_decode.scala 112:19 control_decode.scala 123:19]
  assign io_operand_a_select = io_r_type ? 2'h0 : _GEN_48; // @[control_decode.scala 34:29 control_decode.scala 46:29 control_decode.scala 58:29 control_decode.scala 69:29 control_decode.scala 80:29 control_decode.scala 91:29 control_decode.scala 102:29 control_decode.scala 113:29 control_decode.scala 124:29]
  assign io_operand_b_select = io_r_type ? 1'h0 : _GEN_49; // @[control_decode.scala 35:29 control_decode.scala 47:29 control_decode.scala 59:29 control_decode.scala 70:29 control_decode.scala 81:29 control_decode.scala 92:29 control_decode.scala 103:29 control_decode.scala 114:29 control_decode.scala 125:29]
  assign io_extend_select = io_r_type ? 2'h0 : _GEN_50; // @[control_decode.scala 36:26 control_decode.scala 48:26 control_decode.scala 60:26 control_decode.scala 71:26 control_decode.scala 82:26 control_decode.scala 93:26 control_decode.scala 104:26 control_decode.scala 115:26 control_decode.scala 126:26]
  assign io_next_pc_select = io_r_type ? 2'h0 : _GEN_51; // @[control_decode.scala 37:27 control_decode.scala 49:27 control_decode.scala 61:27 control_decode.scala 72:27 control_decode.scala 83:27 control_decode.scala 94:27 control_decode.scala 105:27 control_decode.scala 116:27 control_decode.scala 127:27]
endmodule
module control(
  input  [6:0] io_opcode,
  output       io_memory_write,
  output       io_branch,
  output       io_memory_read,
  output       io_register_write,
  output       io_memory_to_register,
  output [2:0] io_alu_op,
  output [1:0] io_operand_a_select,
  output       io_operand_b_select,
  output [1:0] io_extend_select,
  output [1:0] io_next_pc_select
);
  wire [6:0] instruction_type_decode_io_opcode; // @[control.scala 18:41]
  wire  instruction_type_decode_io_r_type; // @[control.scala 18:41]
  wire  instruction_type_decode_io_load_type; // @[control.scala 18:41]
  wire  instruction_type_decode_io_s_type; // @[control.scala 18:41]
  wire  instruction_type_decode_io_sb_type; // @[control.scala 18:41]
  wire  instruction_type_decode_io_i_type; // @[control.scala 18:41]
  wire  instruction_type_decode_io_jalr_type; // @[control.scala 18:41]
  wire  instruction_type_decode_io_jal_type; // @[control.scala 18:41]
  wire  instruction_type_decode_io_lui_type; // @[control.scala 18:41]
  wire  control_decode_io_r_type; // @[control.scala 19:32]
  wire  control_decode_io_load_type; // @[control.scala 19:32]
  wire  control_decode_io_s_type; // @[control.scala 19:32]
  wire  control_decode_io_sb_type; // @[control.scala 19:32]
  wire  control_decode_io_i_type; // @[control.scala 19:32]
  wire  control_decode_io_jalr_type; // @[control.scala 19:32]
  wire  control_decode_io_jal_type; // @[control.scala 19:32]
  wire  control_decode_io_lui_type; // @[control.scala 19:32]
  wire  control_decode_io_memory_write; // @[control.scala 19:32]
  wire  control_decode_io_branch; // @[control.scala 19:32]
  wire  control_decode_io_memory_read; // @[control.scala 19:32]
  wire  control_decode_io_register_write; // @[control.scala 19:32]
  wire  control_decode_io_memory_to_register; // @[control.scala 19:32]
  wire [2:0] control_decode_io_alu_op; // @[control.scala 19:32]
  wire [1:0] control_decode_io_operand_a_select; // @[control.scala 19:32]
  wire  control_decode_io_operand_b_select; // @[control.scala 19:32]
  wire [1:0] control_decode_io_extend_select; // @[control.scala 19:32]
  wire [1:0] control_decode_io_next_pc_select; // @[control.scala 19:32]
  instruction_type_decode instruction_type_decode ( // @[control.scala 18:41]
    .io_opcode(instruction_type_decode_io_opcode),
    .io_r_type(instruction_type_decode_io_r_type),
    .io_load_type(instruction_type_decode_io_load_type),
    .io_s_type(instruction_type_decode_io_s_type),
    .io_sb_type(instruction_type_decode_io_sb_type),
    .io_i_type(instruction_type_decode_io_i_type),
    .io_jalr_type(instruction_type_decode_io_jalr_type),
    .io_jal_type(instruction_type_decode_io_jal_type),
    .io_lui_type(instruction_type_decode_io_lui_type)
  );
  control_decode control_decode ( // @[control.scala 19:32]
    .io_r_type(control_decode_io_r_type),
    .io_load_type(control_decode_io_load_type),
    .io_s_type(control_decode_io_s_type),
    .io_sb_type(control_decode_io_sb_type),
    .io_i_type(control_decode_io_i_type),
    .io_jalr_type(control_decode_io_jalr_type),
    .io_jal_type(control_decode_io_jal_type),
    .io_lui_type(control_decode_io_lui_type),
    .io_memory_write(control_decode_io_memory_write),
    .io_branch(control_decode_io_branch),
    .io_memory_read(control_decode_io_memory_read),
    .io_register_write(control_decode_io_register_write),
    .io_memory_to_register(control_decode_io_memory_to_register),
    .io_alu_op(control_decode_io_alu_op),
    .io_operand_a_select(control_decode_io_operand_a_select),
    .io_operand_b_select(control_decode_io_operand_b_select),
    .io_extend_select(control_decode_io_extend_select),
    .io_next_pc_select(control_decode_io_next_pc_select)
  );
  assign io_memory_write = control_decode_io_memory_write; // @[control.scala 30:21]
  assign io_branch = control_decode_io_branch; // @[control.scala 31:15]
  assign io_memory_read = control_decode_io_memory_read; // @[control.scala 32:20]
  assign io_register_write = control_decode_io_register_write; // @[control.scala 33:23]
  assign io_memory_to_register = control_decode_io_memory_to_register; // @[control.scala 34:27]
  assign io_alu_op = control_decode_io_alu_op; // @[control.scala 35:15]
  assign io_operand_a_select = control_decode_io_operand_a_select; // @[control.scala 36:25]
  assign io_operand_b_select = control_decode_io_operand_b_select; // @[control.scala 37:25]
  assign io_extend_select = control_decode_io_extend_select; // @[control.scala 38:22]
  assign io_next_pc_select = control_decode_io_next_pc_select; // @[control.scala 39:23]
  assign instruction_type_decode_io_opcode = io_opcode; // @[control.scala 20:39]
  assign control_decode_io_r_type = instruction_type_decode_io_r_type; // @[control.scala 21:30]
  assign control_decode_io_load_type = instruction_type_decode_io_load_type; // @[control.scala 22:33]
  assign control_decode_io_s_type = instruction_type_decode_io_s_type; // @[control.scala 23:30]
  assign control_decode_io_sb_type = instruction_type_decode_io_sb_type; // @[control.scala 24:31]
  assign control_decode_io_i_type = instruction_type_decode_io_i_type; // @[control.scala 25:30]
  assign control_decode_io_jalr_type = instruction_type_decode_io_jalr_type; // @[control.scala 26:33]
  assign control_decode_io_jal_type = instruction_type_decode_io_jal_type; // @[control.scala 27:32]
  assign control_decode_io_lui_type = instruction_type_decode_io_lui_type; // @[control.scala 28:32]
endmodule
module register_file(
  input         clock,
  input         reset,
  input         io_register_write,
  input  [4:0]  io_rd_select,
  input  [4:0]  io_rs1_select,
  input  [4:0]  io_rs2_select,
  input  [31:0] io_write_data,
  output [31:0] io_rs1,
  output [31:0] io_rs2
);
  reg [31:0] registers_0; // @[register_file.scala 14:28]
  reg [31:0] _RAND_0;
  reg [31:0] registers_1; // @[register_file.scala 14:28]
  reg [31:0] _RAND_1;
  reg [31:0] registers_2; // @[register_file.scala 14:28]
  reg [31:0] _RAND_2;
  reg [31:0] registers_3; // @[register_file.scala 14:28]
  reg [31:0] _RAND_3;
  reg [31:0] registers_4; // @[register_file.scala 14:28]
  reg [31:0] _RAND_4;
  reg [31:0] registers_5; // @[register_file.scala 14:28]
  reg [31:0] _RAND_5;
  reg [31:0] registers_6; // @[register_file.scala 14:28]
  reg [31:0] _RAND_6;
  reg [31:0] registers_7; // @[register_file.scala 14:28]
  reg [31:0] _RAND_7;
  reg [31:0] registers_8; // @[register_file.scala 14:28]
  reg [31:0] _RAND_8;
  reg [31:0] registers_9; // @[register_file.scala 14:28]
  reg [31:0] _RAND_9;
  reg [31:0] registers_10; // @[register_file.scala 14:28]
  reg [31:0] _RAND_10;
  reg [31:0] registers_11; // @[register_file.scala 14:28]
  reg [31:0] _RAND_11;
  reg [31:0] registers_12; // @[register_file.scala 14:28]
  reg [31:0] _RAND_12;
  reg [31:0] registers_13; // @[register_file.scala 14:28]
  reg [31:0] _RAND_13;
  reg [31:0] registers_14; // @[register_file.scala 14:28]
  reg [31:0] _RAND_14;
  reg [31:0] registers_15; // @[register_file.scala 14:28]
  reg [31:0] _RAND_15;
  reg [31:0] registers_16; // @[register_file.scala 14:28]
  reg [31:0] _RAND_16;
  reg [31:0] registers_17; // @[register_file.scala 14:28]
  reg [31:0] _RAND_17;
  reg [31:0] registers_18; // @[register_file.scala 14:28]
  reg [31:0] _RAND_18;
  reg [31:0] registers_19; // @[register_file.scala 14:28]
  reg [31:0] _RAND_19;
  reg [31:0] registers_20; // @[register_file.scala 14:28]
  reg [31:0] _RAND_20;
  reg [31:0] registers_21; // @[register_file.scala 14:28]
  reg [31:0] _RAND_21;
  reg [31:0] registers_22; // @[register_file.scala 14:28]
  reg [31:0] _RAND_22;
  reg [31:0] registers_23; // @[register_file.scala 14:28]
  reg [31:0] _RAND_23;
  reg [31:0] registers_24; // @[register_file.scala 14:28]
  reg [31:0] _RAND_24;
  reg [31:0] registers_25; // @[register_file.scala 14:28]
  reg [31:0] _RAND_25;
  reg [31:0] registers_26; // @[register_file.scala 14:28]
  reg [31:0] _RAND_26;
  reg [31:0] registers_27; // @[register_file.scala 14:28]
  reg [31:0] _RAND_27;
  reg [31:0] registers_28; // @[register_file.scala 14:28]
  reg [31:0] _RAND_28;
  reg [31:0] registers_29; // @[register_file.scala 14:28]
  reg [31:0] _RAND_29;
  reg [31:0] registers_30; // @[register_file.scala 14:28]
  reg [31:0] _RAND_30;
  reg [31:0] registers_31; // @[register_file.scala 14:28]
  reg [31:0] _RAND_31;
  wire [31:0] _GEN_1; // @[register_file.scala 16:12]
  wire [31:0] _GEN_2; // @[register_file.scala 16:12]
  wire [31:0] _GEN_3; // @[register_file.scala 16:12]
  wire [31:0] _GEN_4; // @[register_file.scala 16:12]
  wire [31:0] _GEN_5; // @[register_file.scala 16:12]
  wire [31:0] _GEN_6; // @[register_file.scala 16:12]
  wire [31:0] _GEN_7; // @[register_file.scala 16:12]
  wire [31:0] _GEN_8; // @[register_file.scala 16:12]
  wire [31:0] _GEN_9; // @[register_file.scala 16:12]
  wire [31:0] _GEN_10; // @[register_file.scala 16:12]
  wire [31:0] _GEN_11; // @[register_file.scala 16:12]
  wire [31:0] _GEN_12; // @[register_file.scala 16:12]
  wire [31:0] _GEN_13; // @[register_file.scala 16:12]
  wire [31:0] _GEN_14; // @[register_file.scala 16:12]
  wire [31:0] _GEN_15; // @[register_file.scala 16:12]
  wire [31:0] _GEN_16; // @[register_file.scala 16:12]
  wire [31:0] _GEN_17; // @[register_file.scala 16:12]
  wire [31:0] _GEN_18; // @[register_file.scala 16:12]
  wire [31:0] _GEN_19; // @[register_file.scala 16:12]
  wire [31:0] _GEN_20; // @[register_file.scala 16:12]
  wire [31:0] _GEN_21; // @[register_file.scala 16:12]
  wire [31:0] _GEN_22; // @[register_file.scala 16:12]
  wire [31:0] _GEN_23; // @[register_file.scala 16:12]
  wire [31:0] _GEN_24; // @[register_file.scala 16:12]
  wire [31:0] _GEN_25; // @[register_file.scala 16:12]
  wire [31:0] _GEN_26; // @[register_file.scala 16:12]
  wire [31:0] _GEN_27; // @[register_file.scala 16:12]
  wire [31:0] _GEN_28; // @[register_file.scala 16:12]
  wire [31:0] _GEN_29; // @[register_file.scala 16:12]
  wire [31:0] _GEN_30; // @[register_file.scala 16:12]
  wire [31:0] _GEN_33; // @[register_file.scala 17:12]
  wire [31:0] _GEN_34; // @[register_file.scala 17:12]
  wire [31:0] _GEN_35; // @[register_file.scala 17:12]
  wire [31:0] _GEN_36; // @[register_file.scala 17:12]
  wire [31:0] _GEN_37; // @[register_file.scala 17:12]
  wire [31:0] _GEN_38; // @[register_file.scala 17:12]
  wire [31:0] _GEN_39; // @[register_file.scala 17:12]
  wire [31:0] _GEN_40; // @[register_file.scala 17:12]
  wire [31:0] _GEN_41; // @[register_file.scala 17:12]
  wire [31:0] _GEN_42; // @[register_file.scala 17:12]
  wire [31:0] _GEN_43; // @[register_file.scala 17:12]
  wire [31:0] _GEN_44; // @[register_file.scala 17:12]
  wire [31:0] _GEN_45; // @[register_file.scala 17:12]
  wire [31:0] _GEN_46; // @[register_file.scala 17:12]
  wire [31:0] _GEN_47; // @[register_file.scala 17:12]
  wire [31:0] _GEN_48; // @[register_file.scala 17:12]
  wire [31:0] _GEN_49; // @[register_file.scala 17:12]
  wire [31:0] _GEN_50; // @[register_file.scala 17:12]
  wire [31:0] _GEN_51; // @[register_file.scala 17:12]
  wire [31:0] _GEN_52; // @[register_file.scala 17:12]
  wire [31:0] _GEN_53; // @[register_file.scala 17:12]
  wire [31:0] _GEN_54; // @[register_file.scala 17:12]
  wire [31:0] _GEN_55; // @[register_file.scala 17:12]
  wire [31:0] _GEN_56; // @[register_file.scala 17:12]
  wire [31:0] _GEN_57; // @[register_file.scala 17:12]
  wire [31:0] _GEN_58; // @[register_file.scala 17:12]
  wire [31:0] _GEN_59; // @[register_file.scala 17:12]
  wire [31:0] _GEN_60; // @[register_file.scala 17:12]
  wire [31:0] _GEN_61; // @[register_file.scala 17:12]
  wire [31:0] _GEN_62; // @[register_file.scala 17:12]
  wire  _T_267; // @[register_file.scala 19:27]
  wire [31:0] _GEN_65; // @[register_file.scala 19:68]
  wire [31:0] _GEN_66; // @[register_file.scala 19:68]
  wire [31:0] _GEN_67; // @[register_file.scala 19:68]
  wire [31:0] _GEN_68; // @[register_file.scala 19:68]
  wire [31:0] _GEN_69; // @[register_file.scala 19:68]
  wire [31:0] _GEN_70; // @[register_file.scala 19:68]
  wire [31:0] _GEN_71; // @[register_file.scala 19:68]
  wire [31:0] _GEN_72; // @[register_file.scala 19:68]
  wire [31:0] _GEN_73; // @[register_file.scala 19:68]
  wire [31:0] _GEN_74; // @[register_file.scala 19:68]
  wire [31:0] _GEN_75; // @[register_file.scala 19:68]
  wire [31:0] _GEN_76; // @[register_file.scala 19:68]
  wire [31:0] _GEN_77; // @[register_file.scala 19:68]
  wire [31:0] _GEN_78; // @[register_file.scala 19:68]
  wire [31:0] _GEN_79; // @[register_file.scala 19:68]
  wire [31:0] _GEN_80; // @[register_file.scala 19:68]
  wire [31:0] _GEN_81; // @[register_file.scala 19:68]
  wire [31:0] _GEN_82; // @[register_file.scala 19:68]
  wire [31:0] _GEN_83; // @[register_file.scala 19:68]
  wire [31:0] _GEN_84; // @[register_file.scala 19:68]
  wire [31:0] _GEN_85; // @[register_file.scala 19:68]
  wire [31:0] _GEN_86; // @[register_file.scala 19:68]
  wire [31:0] _GEN_87; // @[register_file.scala 19:68]
  wire [31:0] _GEN_88; // @[register_file.scala 19:68]
  wire [31:0] _GEN_89; // @[register_file.scala 19:68]
  wire [31:0] _GEN_90; // @[register_file.scala 19:68]
  wire [31:0] _GEN_91; // @[register_file.scala 19:68]
  wire [31:0] _GEN_92; // @[register_file.scala 19:68]
  wire [31:0] _GEN_93; // @[register_file.scala 19:68]
  wire [31:0] _GEN_94; // @[register_file.scala 19:68]
  wire [31:0] _GEN_95; // @[register_file.scala 19:68]
  wire [31:0] _GEN_96; // @[register_file.scala 20:45]
  wire [31:0] _GEN_97; // @[register_file.scala 20:45]
  wire [31:0] _GEN_98; // @[register_file.scala 20:45]
  wire [31:0] _GEN_99; // @[register_file.scala 20:45]
  wire [31:0] _GEN_100; // @[register_file.scala 20:45]
  wire [31:0] _GEN_101; // @[register_file.scala 20:45]
  wire [31:0] _GEN_102; // @[register_file.scala 20:45]
  wire [31:0] _GEN_103; // @[register_file.scala 20:45]
  wire [31:0] _GEN_104; // @[register_file.scala 20:45]
  wire [31:0] _GEN_105; // @[register_file.scala 20:45]
  wire [31:0] _GEN_106; // @[register_file.scala 20:45]
  wire [31:0] _GEN_107; // @[register_file.scala 20:45]
  wire [31:0] _GEN_108; // @[register_file.scala 20:45]
  wire [31:0] _GEN_109; // @[register_file.scala 20:45]
  wire [31:0] _GEN_110; // @[register_file.scala 20:45]
  wire [31:0] _GEN_111; // @[register_file.scala 20:45]
  wire [31:0] _GEN_112; // @[register_file.scala 20:45]
  wire [31:0] _GEN_113; // @[register_file.scala 20:45]
  wire [31:0] _GEN_114; // @[register_file.scala 20:45]
  wire [31:0] _GEN_115; // @[register_file.scala 20:45]
  wire [31:0] _GEN_116; // @[register_file.scala 20:45]
  wire [31:0] _GEN_117; // @[register_file.scala 20:45]
  wire [31:0] _GEN_118; // @[register_file.scala 20:45]
  wire [31:0] _GEN_119; // @[register_file.scala 20:45]
  wire [31:0] _GEN_120; // @[register_file.scala 20:45]
  wire [31:0] _GEN_121; // @[register_file.scala 20:45]
  wire [31:0] _GEN_122; // @[register_file.scala 20:45]
  wire [31:0] _GEN_123; // @[register_file.scala 20:45]
  wire [31:0] _GEN_124; // @[register_file.scala 20:45]
  wire [31:0] _GEN_125; // @[register_file.scala 20:45]
  wire [31:0] _GEN_126; // @[register_file.scala 20:45]
  wire [31:0] _GEN_127; // @[register_file.scala 20:45]
  wire [31:0] _GEN_129; // @[register_file.scala 19:43]
  wire [31:0] _GEN_130; // @[register_file.scala 19:43]
  wire [31:0] _GEN_131; // @[register_file.scala 19:43]
  wire [31:0] _GEN_132; // @[register_file.scala 19:43]
  wire [31:0] _GEN_133; // @[register_file.scala 19:43]
  wire [31:0] _GEN_134; // @[register_file.scala 19:43]
  wire [31:0] _GEN_135; // @[register_file.scala 19:43]
  wire [31:0] _GEN_136; // @[register_file.scala 19:43]
  wire [31:0] _GEN_137; // @[register_file.scala 19:43]
  wire [31:0] _GEN_138; // @[register_file.scala 19:43]
  wire [31:0] _GEN_139; // @[register_file.scala 19:43]
  wire [31:0] _GEN_140; // @[register_file.scala 19:43]
  wire [31:0] _GEN_141; // @[register_file.scala 19:43]
  wire [31:0] _GEN_142; // @[register_file.scala 19:43]
  wire [31:0] _GEN_143; // @[register_file.scala 19:43]
  wire [31:0] _GEN_144; // @[register_file.scala 19:43]
  wire [31:0] _GEN_145; // @[register_file.scala 19:43]
  wire [31:0] _GEN_146; // @[register_file.scala 19:43]
  wire [31:0] _GEN_147; // @[register_file.scala 19:43]
  wire [31:0] _GEN_148; // @[register_file.scala 19:43]
  wire [31:0] _GEN_149; // @[register_file.scala 19:43]
  wire [31:0] _GEN_150; // @[register_file.scala 19:43]
  wire [31:0] _GEN_151; // @[register_file.scala 19:43]
  wire [31:0] _GEN_152; // @[register_file.scala 19:43]
  wire [31:0] _GEN_153; // @[register_file.scala 19:43]
  wire [31:0] _GEN_154; // @[register_file.scala 19:43]
  wire [31:0] _GEN_155; // @[register_file.scala 19:43]
  wire [31:0] _GEN_156; // @[register_file.scala 19:43]
  wire [31:0] _GEN_157; // @[register_file.scala 19:43]
  wire [31:0] _GEN_158; // @[register_file.scala 19:43]
  wire [31:0] _GEN_159; // @[register_file.scala 19:43]
  wire [31:0] _GEN_160; // @[register_file.scala 19:43]
  wire [31:0] _GEN_161; // @[register_file.scala 18:37]
  wire [31:0] _GEN_162; // @[register_file.scala 18:37]
  wire [31:0] _GEN_163; // @[register_file.scala 18:37]
  wire [31:0] _GEN_164; // @[register_file.scala 18:37]
  wire [31:0] _GEN_165; // @[register_file.scala 18:37]
  wire [31:0] _GEN_166; // @[register_file.scala 18:37]
  wire [31:0] _GEN_167; // @[register_file.scala 18:37]
  wire [31:0] _GEN_168; // @[register_file.scala 18:37]
  wire [31:0] _GEN_169; // @[register_file.scala 18:37]
  wire [31:0] _GEN_170; // @[register_file.scala 18:37]
  wire [31:0] _GEN_171; // @[register_file.scala 18:37]
  wire [31:0] _GEN_172; // @[register_file.scala 18:37]
  wire [31:0] _GEN_173; // @[register_file.scala 18:37]
  wire [31:0] _GEN_174; // @[register_file.scala 18:37]
  wire [31:0] _GEN_175; // @[register_file.scala 18:37]
  wire [31:0] _GEN_176; // @[register_file.scala 18:37]
  wire [31:0] _GEN_177; // @[register_file.scala 18:37]
  wire [31:0] _GEN_178; // @[register_file.scala 18:37]
  wire [31:0] _GEN_179; // @[register_file.scala 18:37]
  wire [31:0] _GEN_180; // @[register_file.scala 18:37]
  wire [31:0] _GEN_181; // @[register_file.scala 18:37]
  wire [31:0] _GEN_182; // @[register_file.scala 18:37]
  wire [31:0] _GEN_183; // @[register_file.scala 18:37]
  wire [31:0] _GEN_184; // @[register_file.scala 18:37]
  wire [31:0] _GEN_185; // @[register_file.scala 18:37]
  wire [31:0] _GEN_186; // @[register_file.scala 18:37]
  wire [31:0] _GEN_187; // @[register_file.scala 18:37]
  wire [31:0] _GEN_188; // @[register_file.scala 18:37]
  wire [31:0] _GEN_189; // @[register_file.scala 18:37]
  wire [31:0] _GEN_190; // @[register_file.scala 18:37]
  wire [31:0] _GEN_191; // @[register_file.scala 18:37]
  wire [31:0] _GEN_192; // @[register_file.scala 18:37]
  assign _GEN_1 = 5'h1 == io_rs1_select ? $signed(registers_1) : $signed(registers_0); // @[register_file.scala 16:12]
  assign _GEN_2 = 5'h2 == io_rs1_select ? $signed(registers_2) : $signed(_GEN_1); // @[register_file.scala 16:12]
  assign _GEN_3 = 5'h3 == io_rs1_select ? $signed(registers_3) : $signed(_GEN_2); // @[register_file.scala 16:12]
  assign _GEN_4 = 5'h4 == io_rs1_select ? $signed(registers_4) : $signed(_GEN_3); // @[register_file.scala 16:12]
  assign _GEN_5 = 5'h5 == io_rs1_select ? $signed(registers_5) : $signed(_GEN_4); // @[register_file.scala 16:12]
  assign _GEN_6 = 5'h6 == io_rs1_select ? $signed(registers_6) : $signed(_GEN_5); // @[register_file.scala 16:12]
  assign _GEN_7 = 5'h7 == io_rs1_select ? $signed(registers_7) : $signed(_GEN_6); // @[register_file.scala 16:12]
  assign _GEN_8 = 5'h8 == io_rs1_select ? $signed(registers_8) : $signed(_GEN_7); // @[register_file.scala 16:12]
  assign _GEN_9 = 5'h9 == io_rs1_select ? $signed(registers_9) : $signed(_GEN_8); // @[register_file.scala 16:12]
  assign _GEN_10 = 5'ha == io_rs1_select ? $signed(registers_10) : $signed(_GEN_9); // @[register_file.scala 16:12]
  assign _GEN_11 = 5'hb == io_rs1_select ? $signed(registers_11) : $signed(_GEN_10); // @[register_file.scala 16:12]
  assign _GEN_12 = 5'hc == io_rs1_select ? $signed(registers_12) : $signed(_GEN_11); // @[register_file.scala 16:12]
  assign _GEN_13 = 5'hd == io_rs1_select ? $signed(registers_13) : $signed(_GEN_12); // @[register_file.scala 16:12]
  assign _GEN_14 = 5'he == io_rs1_select ? $signed(registers_14) : $signed(_GEN_13); // @[register_file.scala 16:12]
  assign _GEN_15 = 5'hf == io_rs1_select ? $signed(registers_15) : $signed(_GEN_14); // @[register_file.scala 16:12]
  assign _GEN_16 = 5'h10 == io_rs1_select ? $signed(registers_16) : $signed(_GEN_15); // @[register_file.scala 16:12]
  assign _GEN_17 = 5'h11 == io_rs1_select ? $signed(registers_17) : $signed(_GEN_16); // @[register_file.scala 16:12]
  assign _GEN_18 = 5'h12 == io_rs1_select ? $signed(registers_18) : $signed(_GEN_17); // @[register_file.scala 16:12]
  assign _GEN_19 = 5'h13 == io_rs1_select ? $signed(registers_19) : $signed(_GEN_18); // @[register_file.scala 16:12]
  assign _GEN_20 = 5'h14 == io_rs1_select ? $signed(registers_20) : $signed(_GEN_19); // @[register_file.scala 16:12]
  assign _GEN_21 = 5'h15 == io_rs1_select ? $signed(registers_21) : $signed(_GEN_20); // @[register_file.scala 16:12]
  assign _GEN_22 = 5'h16 == io_rs1_select ? $signed(registers_22) : $signed(_GEN_21); // @[register_file.scala 16:12]
  assign _GEN_23 = 5'h17 == io_rs1_select ? $signed(registers_23) : $signed(_GEN_22); // @[register_file.scala 16:12]
  assign _GEN_24 = 5'h18 == io_rs1_select ? $signed(registers_24) : $signed(_GEN_23); // @[register_file.scala 16:12]
  assign _GEN_25 = 5'h19 == io_rs1_select ? $signed(registers_25) : $signed(_GEN_24); // @[register_file.scala 16:12]
  assign _GEN_26 = 5'h1a == io_rs1_select ? $signed(registers_26) : $signed(_GEN_25); // @[register_file.scala 16:12]
  assign _GEN_27 = 5'h1b == io_rs1_select ? $signed(registers_27) : $signed(_GEN_26); // @[register_file.scala 16:12]
  assign _GEN_28 = 5'h1c == io_rs1_select ? $signed(registers_28) : $signed(_GEN_27); // @[register_file.scala 16:12]
  assign _GEN_29 = 5'h1d == io_rs1_select ? $signed(registers_29) : $signed(_GEN_28); // @[register_file.scala 16:12]
  assign _GEN_30 = 5'h1e == io_rs1_select ? $signed(registers_30) : $signed(_GEN_29); // @[register_file.scala 16:12]
  assign _GEN_33 = 5'h1 == io_rs2_select ? $signed(registers_1) : $signed(registers_0); // @[register_file.scala 17:12]
  assign _GEN_34 = 5'h2 == io_rs2_select ? $signed(registers_2) : $signed(_GEN_33); // @[register_file.scala 17:12]
  assign _GEN_35 = 5'h3 == io_rs2_select ? $signed(registers_3) : $signed(_GEN_34); // @[register_file.scala 17:12]
  assign _GEN_36 = 5'h4 == io_rs2_select ? $signed(registers_4) : $signed(_GEN_35); // @[register_file.scala 17:12]
  assign _GEN_37 = 5'h5 == io_rs2_select ? $signed(registers_5) : $signed(_GEN_36); // @[register_file.scala 17:12]
  assign _GEN_38 = 5'h6 == io_rs2_select ? $signed(registers_6) : $signed(_GEN_37); // @[register_file.scala 17:12]
  assign _GEN_39 = 5'h7 == io_rs2_select ? $signed(registers_7) : $signed(_GEN_38); // @[register_file.scala 17:12]
  assign _GEN_40 = 5'h8 == io_rs2_select ? $signed(registers_8) : $signed(_GEN_39); // @[register_file.scala 17:12]
  assign _GEN_41 = 5'h9 == io_rs2_select ? $signed(registers_9) : $signed(_GEN_40); // @[register_file.scala 17:12]
  assign _GEN_42 = 5'ha == io_rs2_select ? $signed(registers_10) : $signed(_GEN_41); // @[register_file.scala 17:12]
  assign _GEN_43 = 5'hb == io_rs2_select ? $signed(registers_11) : $signed(_GEN_42); // @[register_file.scala 17:12]
  assign _GEN_44 = 5'hc == io_rs2_select ? $signed(registers_12) : $signed(_GEN_43); // @[register_file.scala 17:12]
  assign _GEN_45 = 5'hd == io_rs2_select ? $signed(registers_13) : $signed(_GEN_44); // @[register_file.scala 17:12]
  assign _GEN_46 = 5'he == io_rs2_select ? $signed(registers_14) : $signed(_GEN_45); // @[register_file.scala 17:12]
  assign _GEN_47 = 5'hf == io_rs2_select ? $signed(registers_15) : $signed(_GEN_46); // @[register_file.scala 17:12]
  assign _GEN_48 = 5'h10 == io_rs2_select ? $signed(registers_16) : $signed(_GEN_47); // @[register_file.scala 17:12]
  assign _GEN_49 = 5'h11 == io_rs2_select ? $signed(registers_17) : $signed(_GEN_48); // @[register_file.scala 17:12]
  assign _GEN_50 = 5'h12 == io_rs2_select ? $signed(registers_18) : $signed(_GEN_49); // @[register_file.scala 17:12]
  assign _GEN_51 = 5'h13 == io_rs2_select ? $signed(registers_19) : $signed(_GEN_50); // @[register_file.scala 17:12]
  assign _GEN_52 = 5'h14 == io_rs2_select ? $signed(registers_20) : $signed(_GEN_51); // @[register_file.scala 17:12]
  assign _GEN_53 = 5'h15 == io_rs2_select ? $signed(registers_21) : $signed(_GEN_52); // @[register_file.scala 17:12]
  assign _GEN_54 = 5'h16 == io_rs2_select ? $signed(registers_22) : $signed(_GEN_53); // @[register_file.scala 17:12]
  assign _GEN_55 = 5'h17 == io_rs2_select ? $signed(registers_23) : $signed(_GEN_54); // @[register_file.scala 17:12]
  assign _GEN_56 = 5'h18 == io_rs2_select ? $signed(registers_24) : $signed(_GEN_55); // @[register_file.scala 17:12]
  assign _GEN_57 = 5'h19 == io_rs2_select ? $signed(registers_25) : $signed(_GEN_56); // @[register_file.scala 17:12]
  assign _GEN_58 = 5'h1a == io_rs2_select ? $signed(registers_26) : $signed(_GEN_57); // @[register_file.scala 17:12]
  assign _GEN_59 = 5'h1b == io_rs2_select ? $signed(registers_27) : $signed(_GEN_58); // @[register_file.scala 17:12]
  assign _GEN_60 = 5'h1c == io_rs2_select ? $signed(registers_28) : $signed(_GEN_59); // @[register_file.scala 17:12]
  assign _GEN_61 = 5'h1d == io_rs2_select ? $signed(registers_29) : $signed(_GEN_60); // @[register_file.scala 17:12]
  assign _GEN_62 = 5'h1e == io_rs2_select ? $signed(registers_30) : $signed(_GEN_61); // @[register_file.scala 17:12]
  assign _T_267 = io_rd_select == 5'h0; // @[register_file.scala 19:27]
  assign _GEN_65 = 5'h1 == io_rd_select ? $signed(32'sh0) : $signed(registers_1); // @[register_file.scala 19:68]
  assign _GEN_66 = 5'h2 == io_rd_select ? $signed(32'sh0) : $signed(registers_2); // @[register_file.scala 19:68]
  assign _GEN_67 = 5'h3 == io_rd_select ? $signed(32'sh0) : $signed(registers_3); // @[register_file.scala 19:68]
  assign _GEN_68 = 5'h4 == io_rd_select ? $signed(32'sh0) : $signed(registers_4); // @[register_file.scala 19:68]
  assign _GEN_69 = 5'h5 == io_rd_select ? $signed(32'sh0) : $signed(registers_5); // @[register_file.scala 19:68]
  assign _GEN_70 = 5'h6 == io_rd_select ? $signed(32'sh0) : $signed(registers_6); // @[register_file.scala 19:68]
  assign _GEN_71 = 5'h7 == io_rd_select ? $signed(32'sh0) : $signed(registers_7); // @[register_file.scala 19:68]
  assign _GEN_72 = 5'h8 == io_rd_select ? $signed(32'sh0) : $signed(registers_8); // @[register_file.scala 19:68]
  assign _GEN_73 = 5'h9 == io_rd_select ? $signed(32'sh0) : $signed(registers_9); // @[register_file.scala 19:68]
  assign _GEN_74 = 5'ha == io_rd_select ? $signed(32'sh0) : $signed(registers_10); // @[register_file.scala 19:68]
  assign _GEN_75 = 5'hb == io_rd_select ? $signed(32'sh0) : $signed(registers_11); // @[register_file.scala 19:68]
  assign _GEN_76 = 5'hc == io_rd_select ? $signed(32'sh0) : $signed(registers_12); // @[register_file.scala 19:68]
  assign _GEN_77 = 5'hd == io_rd_select ? $signed(32'sh0) : $signed(registers_13); // @[register_file.scala 19:68]
  assign _GEN_78 = 5'he == io_rd_select ? $signed(32'sh0) : $signed(registers_14); // @[register_file.scala 19:68]
  assign _GEN_79 = 5'hf == io_rd_select ? $signed(32'sh0) : $signed(registers_15); // @[register_file.scala 19:68]
  assign _GEN_80 = 5'h10 == io_rd_select ? $signed(32'sh0) : $signed(registers_16); // @[register_file.scala 19:68]
  assign _GEN_81 = 5'h11 == io_rd_select ? $signed(32'sh0) : $signed(registers_17); // @[register_file.scala 19:68]
  assign _GEN_82 = 5'h12 == io_rd_select ? $signed(32'sh0) : $signed(registers_18); // @[register_file.scala 19:68]
  assign _GEN_83 = 5'h13 == io_rd_select ? $signed(32'sh0) : $signed(registers_19); // @[register_file.scala 19:68]
  assign _GEN_84 = 5'h14 == io_rd_select ? $signed(32'sh0) : $signed(registers_20); // @[register_file.scala 19:68]
  assign _GEN_85 = 5'h15 == io_rd_select ? $signed(32'sh0) : $signed(registers_21); // @[register_file.scala 19:68]
  assign _GEN_86 = 5'h16 == io_rd_select ? $signed(32'sh0) : $signed(registers_22); // @[register_file.scala 19:68]
  assign _GEN_87 = 5'h17 == io_rd_select ? $signed(32'sh0) : $signed(registers_23); // @[register_file.scala 19:68]
  assign _GEN_88 = 5'h18 == io_rd_select ? $signed(32'sh0) : $signed(registers_24); // @[register_file.scala 19:68]
  assign _GEN_89 = 5'h19 == io_rd_select ? $signed(32'sh0) : $signed(registers_25); // @[register_file.scala 19:68]
  assign _GEN_90 = 5'h1a == io_rd_select ? $signed(32'sh0) : $signed(registers_26); // @[register_file.scala 19:68]
  assign _GEN_91 = 5'h1b == io_rd_select ? $signed(32'sh0) : $signed(registers_27); // @[register_file.scala 19:68]
  assign _GEN_92 = 5'h1c == io_rd_select ? $signed(32'sh0) : $signed(registers_28); // @[register_file.scala 19:68]
  assign _GEN_93 = 5'h1d == io_rd_select ? $signed(32'sh0) : $signed(registers_29); // @[register_file.scala 19:68]
  assign _GEN_94 = 5'h1e == io_rd_select ? $signed(32'sh0) : $signed(registers_30); // @[register_file.scala 19:68]
  assign _GEN_95 = 5'h1f == io_rd_select ? $signed(32'sh0) : $signed(registers_31); // @[register_file.scala 19:68]
  assign _GEN_96 = 5'h0 == io_rd_select ? $signed(io_write_data) : $signed(32'sh0); // @[register_file.scala 20:45]
  assign _GEN_97 = 5'h1 == io_rd_select ? $signed(io_write_data) : $signed(registers_1); // @[register_file.scala 20:45]
  assign _GEN_98 = 5'h2 == io_rd_select ? $signed(io_write_data) : $signed(registers_2); // @[register_file.scala 20:45]
  assign _GEN_99 = 5'h3 == io_rd_select ? $signed(io_write_data) : $signed(registers_3); // @[register_file.scala 20:45]
  assign _GEN_100 = 5'h4 == io_rd_select ? $signed(io_write_data) : $signed(registers_4); // @[register_file.scala 20:45]
  assign _GEN_101 = 5'h5 == io_rd_select ? $signed(io_write_data) : $signed(registers_5); // @[register_file.scala 20:45]
  assign _GEN_102 = 5'h6 == io_rd_select ? $signed(io_write_data) : $signed(registers_6); // @[register_file.scala 20:45]
  assign _GEN_103 = 5'h7 == io_rd_select ? $signed(io_write_data) : $signed(registers_7); // @[register_file.scala 20:45]
  assign _GEN_104 = 5'h8 == io_rd_select ? $signed(io_write_data) : $signed(registers_8); // @[register_file.scala 20:45]
  assign _GEN_105 = 5'h9 == io_rd_select ? $signed(io_write_data) : $signed(registers_9); // @[register_file.scala 20:45]
  assign _GEN_106 = 5'ha == io_rd_select ? $signed(io_write_data) : $signed(registers_10); // @[register_file.scala 20:45]
  assign _GEN_107 = 5'hb == io_rd_select ? $signed(io_write_data) : $signed(registers_11); // @[register_file.scala 20:45]
  assign _GEN_108 = 5'hc == io_rd_select ? $signed(io_write_data) : $signed(registers_12); // @[register_file.scala 20:45]
  assign _GEN_109 = 5'hd == io_rd_select ? $signed(io_write_data) : $signed(registers_13); // @[register_file.scala 20:45]
  assign _GEN_110 = 5'he == io_rd_select ? $signed(io_write_data) : $signed(registers_14); // @[register_file.scala 20:45]
  assign _GEN_111 = 5'hf == io_rd_select ? $signed(io_write_data) : $signed(registers_15); // @[register_file.scala 20:45]
  assign _GEN_112 = 5'h10 == io_rd_select ? $signed(io_write_data) : $signed(registers_16); // @[register_file.scala 20:45]
  assign _GEN_113 = 5'h11 == io_rd_select ? $signed(io_write_data) : $signed(registers_17); // @[register_file.scala 20:45]
  assign _GEN_114 = 5'h12 == io_rd_select ? $signed(io_write_data) : $signed(registers_18); // @[register_file.scala 20:45]
  assign _GEN_115 = 5'h13 == io_rd_select ? $signed(io_write_data) : $signed(registers_19); // @[register_file.scala 20:45]
  assign _GEN_116 = 5'h14 == io_rd_select ? $signed(io_write_data) : $signed(registers_20); // @[register_file.scala 20:45]
  assign _GEN_117 = 5'h15 == io_rd_select ? $signed(io_write_data) : $signed(registers_21); // @[register_file.scala 20:45]
  assign _GEN_118 = 5'h16 == io_rd_select ? $signed(io_write_data) : $signed(registers_22); // @[register_file.scala 20:45]
  assign _GEN_119 = 5'h17 == io_rd_select ? $signed(io_write_data) : $signed(registers_23); // @[register_file.scala 20:45]
  assign _GEN_120 = 5'h18 == io_rd_select ? $signed(io_write_data) : $signed(registers_24); // @[register_file.scala 20:45]
  assign _GEN_121 = 5'h19 == io_rd_select ? $signed(io_write_data) : $signed(registers_25); // @[register_file.scala 20:45]
  assign _GEN_122 = 5'h1a == io_rd_select ? $signed(io_write_data) : $signed(registers_26); // @[register_file.scala 20:45]
  assign _GEN_123 = 5'h1b == io_rd_select ? $signed(io_write_data) : $signed(registers_27); // @[register_file.scala 20:45]
  assign _GEN_124 = 5'h1c == io_rd_select ? $signed(io_write_data) : $signed(registers_28); // @[register_file.scala 20:45]
  assign _GEN_125 = 5'h1d == io_rd_select ? $signed(io_write_data) : $signed(registers_29); // @[register_file.scala 20:45]
  assign _GEN_126 = 5'h1e == io_rd_select ? $signed(io_write_data) : $signed(registers_30); // @[register_file.scala 20:45]
  assign _GEN_127 = 5'h1f == io_rd_select ? $signed(io_write_data) : $signed(registers_31); // @[register_file.scala 20:45]
  assign _GEN_129 = _T_267 ? $signed(32'sh0) : $signed(_GEN_96); // @[register_file.scala 19:43]
  assign _GEN_130 = _T_267 ? $signed(_GEN_65) : $signed(_GEN_97); // @[register_file.scala 19:43]
  assign _GEN_131 = _T_267 ? $signed(_GEN_66) : $signed(_GEN_98); // @[register_file.scala 19:43]
  assign _GEN_132 = _T_267 ? $signed(_GEN_67) : $signed(_GEN_99); // @[register_file.scala 19:43]
  assign _GEN_133 = _T_267 ? $signed(_GEN_68) : $signed(_GEN_100); // @[register_file.scala 19:43]
  assign _GEN_134 = _T_267 ? $signed(_GEN_69) : $signed(_GEN_101); // @[register_file.scala 19:43]
  assign _GEN_135 = _T_267 ? $signed(_GEN_70) : $signed(_GEN_102); // @[register_file.scala 19:43]
  assign _GEN_136 = _T_267 ? $signed(_GEN_71) : $signed(_GEN_103); // @[register_file.scala 19:43]
  assign _GEN_137 = _T_267 ? $signed(_GEN_72) : $signed(_GEN_104); // @[register_file.scala 19:43]
  assign _GEN_138 = _T_267 ? $signed(_GEN_73) : $signed(_GEN_105); // @[register_file.scala 19:43]
  assign _GEN_139 = _T_267 ? $signed(_GEN_74) : $signed(_GEN_106); // @[register_file.scala 19:43]
  assign _GEN_140 = _T_267 ? $signed(_GEN_75) : $signed(_GEN_107); // @[register_file.scala 19:43]
  assign _GEN_141 = _T_267 ? $signed(_GEN_76) : $signed(_GEN_108); // @[register_file.scala 19:43]
  assign _GEN_142 = _T_267 ? $signed(_GEN_77) : $signed(_GEN_109); // @[register_file.scala 19:43]
  assign _GEN_143 = _T_267 ? $signed(_GEN_78) : $signed(_GEN_110); // @[register_file.scala 19:43]
  assign _GEN_144 = _T_267 ? $signed(_GEN_79) : $signed(_GEN_111); // @[register_file.scala 19:43]
  assign _GEN_145 = _T_267 ? $signed(_GEN_80) : $signed(_GEN_112); // @[register_file.scala 19:43]
  assign _GEN_146 = _T_267 ? $signed(_GEN_81) : $signed(_GEN_113); // @[register_file.scala 19:43]
  assign _GEN_147 = _T_267 ? $signed(_GEN_82) : $signed(_GEN_114); // @[register_file.scala 19:43]
  assign _GEN_148 = _T_267 ? $signed(_GEN_83) : $signed(_GEN_115); // @[register_file.scala 19:43]
  assign _GEN_149 = _T_267 ? $signed(_GEN_84) : $signed(_GEN_116); // @[register_file.scala 19:43]
  assign _GEN_150 = _T_267 ? $signed(_GEN_85) : $signed(_GEN_117); // @[register_file.scala 19:43]
  assign _GEN_151 = _T_267 ? $signed(_GEN_86) : $signed(_GEN_118); // @[register_file.scala 19:43]
  assign _GEN_152 = _T_267 ? $signed(_GEN_87) : $signed(_GEN_119); // @[register_file.scala 19:43]
  assign _GEN_153 = _T_267 ? $signed(_GEN_88) : $signed(_GEN_120); // @[register_file.scala 19:43]
  assign _GEN_154 = _T_267 ? $signed(_GEN_89) : $signed(_GEN_121); // @[register_file.scala 19:43]
  assign _GEN_155 = _T_267 ? $signed(_GEN_90) : $signed(_GEN_122); // @[register_file.scala 19:43]
  assign _GEN_156 = _T_267 ? $signed(_GEN_91) : $signed(_GEN_123); // @[register_file.scala 19:43]
  assign _GEN_157 = _T_267 ? $signed(_GEN_92) : $signed(_GEN_124); // @[register_file.scala 19:43]
  assign _GEN_158 = _T_267 ? $signed(_GEN_93) : $signed(_GEN_125); // @[register_file.scala 19:43]
  assign _GEN_159 = _T_267 ? $signed(_GEN_94) : $signed(_GEN_126); // @[register_file.scala 19:43]
  assign _GEN_160 = _T_267 ? $signed(_GEN_95) : $signed(_GEN_127); // @[register_file.scala 19:43]
  assign _GEN_161 = io_register_write ? $signed(_GEN_129) : $signed(32'sh0); // @[register_file.scala 18:37]
  assign _GEN_162 = io_register_write ? $signed(_GEN_130) : $signed(registers_1); // @[register_file.scala 18:37]
  assign _GEN_163 = io_register_write ? $signed(_GEN_131) : $signed(registers_2); // @[register_file.scala 18:37]
  assign _GEN_164 = io_register_write ? $signed(_GEN_132) : $signed(registers_3); // @[register_file.scala 18:37]
  assign _GEN_165 = io_register_write ? $signed(_GEN_133) : $signed(registers_4); // @[register_file.scala 18:37]
  assign _GEN_166 = io_register_write ? $signed(_GEN_134) : $signed(registers_5); // @[register_file.scala 18:37]
  assign _GEN_167 = io_register_write ? $signed(_GEN_135) : $signed(registers_6); // @[register_file.scala 18:37]
  assign _GEN_168 = io_register_write ? $signed(_GEN_136) : $signed(registers_7); // @[register_file.scala 18:37]
  assign _GEN_169 = io_register_write ? $signed(_GEN_137) : $signed(registers_8); // @[register_file.scala 18:37]
  assign _GEN_170 = io_register_write ? $signed(_GEN_138) : $signed(registers_9); // @[register_file.scala 18:37]
  assign _GEN_171 = io_register_write ? $signed(_GEN_139) : $signed(registers_10); // @[register_file.scala 18:37]
  assign _GEN_172 = io_register_write ? $signed(_GEN_140) : $signed(registers_11); // @[register_file.scala 18:37]
  assign _GEN_173 = io_register_write ? $signed(_GEN_141) : $signed(registers_12); // @[register_file.scala 18:37]
  assign _GEN_174 = io_register_write ? $signed(_GEN_142) : $signed(registers_13); // @[register_file.scala 18:37]
  assign _GEN_175 = io_register_write ? $signed(_GEN_143) : $signed(registers_14); // @[register_file.scala 18:37]
  assign _GEN_176 = io_register_write ? $signed(_GEN_144) : $signed(registers_15); // @[register_file.scala 18:37]
  assign _GEN_177 = io_register_write ? $signed(_GEN_145) : $signed(registers_16); // @[register_file.scala 18:37]
  assign _GEN_178 = io_register_write ? $signed(_GEN_146) : $signed(registers_17); // @[register_file.scala 18:37]
  assign _GEN_179 = io_register_write ? $signed(_GEN_147) : $signed(registers_18); // @[register_file.scala 18:37]
  assign _GEN_180 = io_register_write ? $signed(_GEN_148) : $signed(registers_19); // @[register_file.scala 18:37]
  assign _GEN_181 = io_register_write ? $signed(_GEN_149) : $signed(registers_20); // @[register_file.scala 18:37]
  assign _GEN_182 = io_register_write ? $signed(_GEN_150) : $signed(registers_21); // @[register_file.scala 18:37]
  assign _GEN_183 = io_register_write ? $signed(_GEN_151) : $signed(registers_22); // @[register_file.scala 18:37]
  assign _GEN_184 = io_register_write ? $signed(_GEN_152) : $signed(registers_23); // @[register_file.scala 18:37]
  assign _GEN_185 = io_register_write ? $signed(_GEN_153) : $signed(registers_24); // @[register_file.scala 18:37]
  assign _GEN_186 = io_register_write ? $signed(_GEN_154) : $signed(registers_25); // @[register_file.scala 18:37]
  assign _GEN_187 = io_register_write ? $signed(_GEN_155) : $signed(registers_26); // @[register_file.scala 18:37]
  assign _GEN_188 = io_register_write ? $signed(_GEN_156) : $signed(registers_27); // @[register_file.scala 18:37]
  assign _GEN_189 = io_register_write ? $signed(_GEN_157) : $signed(registers_28); // @[register_file.scala 18:37]
  assign _GEN_190 = io_register_write ? $signed(_GEN_158) : $signed(registers_29); // @[register_file.scala 18:37]
  assign _GEN_191 = io_register_write ? $signed(_GEN_159) : $signed(registers_30); // @[register_file.scala 18:37]
  assign _GEN_192 = io_register_write ? $signed(_GEN_160) : $signed(registers_31); // @[register_file.scala 18:37]
  assign io_rs1 = 5'h1f == io_rs1_select ? $signed(registers_31) : $signed(_GEN_30); // @[register_file.scala 16:12]
  assign io_rs2 = 5'h1f == io_rs2_select ? $signed(registers_31) : $signed(_GEN_62); // @[register_file.scala 17:12]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  registers_0 = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  registers_1 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  registers_2 = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  registers_3 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  registers_4 = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  registers_5 = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  registers_6 = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  registers_7 = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  registers_8 = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  registers_9 = _RAND_9[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  registers_10 = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  registers_11 = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  registers_12 = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  registers_13 = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  registers_14 = _RAND_14[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  registers_15 = _RAND_15[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  registers_16 = _RAND_16[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  registers_17 = _RAND_17[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  registers_18 = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  registers_19 = _RAND_19[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  registers_20 = _RAND_20[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  registers_21 = _RAND_21[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {1{`RANDOM}};
  registers_22 = _RAND_22[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  registers_23 = _RAND_23[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  registers_24 = _RAND_24[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {1{`RANDOM}};
  registers_25 = _RAND_25[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_26 = {1{`RANDOM}};
  registers_26 = _RAND_26[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_27 = {1{`RANDOM}};
  registers_27 = _RAND_27[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_28 = {1{`RANDOM}};
  registers_28 = _RAND_28[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_29 = {1{`RANDOM}};
  registers_29 = _RAND_29[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_30 = {1{`RANDOM}};
  registers_30 = _RAND_30[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_31 = {1{`RANDOM}};
  registers_31 = _RAND_31[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      registers_0 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          registers_0 <= 32'sh0;
        end else begin
          if (5'h0 == io_rd_select) begin
            registers_0 <= io_write_data;
          end else begin
            registers_0 <= 32'sh0;
          end
        end
      end else begin
        registers_0 <= 32'sh0;
      end
    end
    if (reset) begin
      registers_1 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h1 == io_rd_select) begin
            registers_1 <= 32'sh0;
          end
        end else begin
          if (5'h1 == io_rd_select) begin
            registers_1 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_2 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h2 == io_rd_select) begin
            registers_2 <= 32'sh0;
          end
        end else begin
          if (5'h2 == io_rd_select) begin
            registers_2 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_3 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h3 == io_rd_select) begin
            registers_3 <= 32'sh0;
          end
        end else begin
          if (5'h3 == io_rd_select) begin
            registers_3 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_4 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h4 == io_rd_select) begin
            registers_4 <= 32'sh0;
          end
        end else begin
          if (5'h4 == io_rd_select) begin
            registers_4 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_5 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h5 == io_rd_select) begin
            registers_5 <= 32'sh0;
          end
        end else begin
          if (5'h5 == io_rd_select) begin
            registers_5 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_6 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h6 == io_rd_select) begin
            registers_6 <= 32'sh0;
          end
        end else begin
          if (5'h6 == io_rd_select) begin
            registers_6 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_7 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h7 == io_rd_select) begin
            registers_7 <= 32'sh0;
          end
        end else begin
          if (5'h7 == io_rd_select) begin
            registers_7 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_8 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h8 == io_rd_select) begin
            registers_8 <= 32'sh0;
          end
        end else begin
          if (5'h8 == io_rd_select) begin
            registers_8 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_9 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h9 == io_rd_select) begin
            registers_9 <= 32'sh0;
          end
        end else begin
          if (5'h9 == io_rd_select) begin
            registers_9 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_10 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'ha == io_rd_select) begin
            registers_10 <= 32'sh0;
          end
        end else begin
          if (5'ha == io_rd_select) begin
            registers_10 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_11 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'hb == io_rd_select) begin
            registers_11 <= 32'sh0;
          end
        end else begin
          if (5'hb == io_rd_select) begin
            registers_11 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_12 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'hc == io_rd_select) begin
            registers_12 <= 32'sh0;
          end
        end else begin
          if (5'hc == io_rd_select) begin
            registers_12 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_13 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'hd == io_rd_select) begin
            registers_13 <= 32'sh0;
          end
        end else begin
          if (5'hd == io_rd_select) begin
            registers_13 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_14 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'he == io_rd_select) begin
            registers_14 <= 32'sh0;
          end
        end else begin
          if (5'he == io_rd_select) begin
            registers_14 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_15 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'hf == io_rd_select) begin
            registers_15 <= 32'sh0;
          end
        end else begin
          if (5'hf == io_rd_select) begin
            registers_15 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_16 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h10 == io_rd_select) begin
            registers_16 <= 32'sh0;
          end
        end else begin
          if (5'h10 == io_rd_select) begin
            registers_16 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_17 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h11 == io_rd_select) begin
            registers_17 <= 32'sh0;
          end
        end else begin
          if (5'h11 == io_rd_select) begin
            registers_17 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_18 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h12 == io_rd_select) begin
            registers_18 <= 32'sh0;
          end
        end else begin
          if (5'h12 == io_rd_select) begin
            registers_18 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_19 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h13 == io_rd_select) begin
            registers_19 <= 32'sh0;
          end
        end else begin
          if (5'h13 == io_rd_select) begin
            registers_19 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_20 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h14 == io_rd_select) begin
            registers_20 <= 32'sh0;
          end
        end else begin
          if (5'h14 == io_rd_select) begin
            registers_20 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_21 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h15 == io_rd_select) begin
            registers_21 <= 32'sh0;
          end
        end else begin
          if (5'h15 == io_rd_select) begin
            registers_21 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_22 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h16 == io_rd_select) begin
            registers_22 <= 32'sh0;
          end
        end else begin
          if (5'h16 == io_rd_select) begin
            registers_22 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_23 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h17 == io_rd_select) begin
            registers_23 <= 32'sh0;
          end
        end else begin
          if (5'h17 == io_rd_select) begin
            registers_23 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_24 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h18 == io_rd_select) begin
            registers_24 <= 32'sh0;
          end
        end else begin
          if (5'h18 == io_rd_select) begin
            registers_24 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_25 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h19 == io_rd_select) begin
            registers_25 <= 32'sh0;
          end
        end else begin
          if (5'h19 == io_rd_select) begin
            registers_25 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_26 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h1a == io_rd_select) begin
            registers_26 <= 32'sh0;
          end
        end else begin
          if (5'h1a == io_rd_select) begin
            registers_26 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_27 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h1b == io_rd_select) begin
            registers_27 <= 32'sh0;
          end
        end else begin
          if (5'h1b == io_rd_select) begin
            registers_27 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_28 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h1c == io_rd_select) begin
            registers_28 <= 32'sh0;
          end
        end else begin
          if (5'h1c == io_rd_select) begin
            registers_28 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_29 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h1d == io_rd_select) begin
            registers_29 <= 32'sh0;
          end
        end else begin
          if (5'h1d == io_rd_select) begin
            registers_29 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_30 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h1e == io_rd_select) begin
            registers_30 <= 32'sh0;
          end
        end else begin
          if (5'h1e == io_rd_select) begin
            registers_30 <= io_write_data;
          end
        end
      end
    end
    if (reset) begin
      registers_31 <= 32'sh0;
    end else begin
      if (io_register_write) begin
        if (_T_267) begin
          if (5'h1f == io_rd_select) begin
            registers_31 <= 32'sh0;
          end
        end else begin
          if (5'h1f == io_rd_select) begin
            registers_31 <= io_write_data;
          end
        end
      end
    end
  end
endmodule
module alu_module(
  input  [31:0] io_operand_a,
  input  [31:0] io_operand_b,
  input  [4:0]  io_alu_control,
  output [31:0] io_output
);
  wire  _T_16; // @[alu_module.scala 14:25]
  wire [32:0] _T_17; // @[alu_module.scala 16:35]
  wire [31:0] _T_18; // @[alu_module.scala 16:35]
  wire [31:0] _T_19; // @[alu_module.scala 16:35]
  wire  _T_21; // @[alu_module.scala 17:32]
  wire [4:0] _T_22; // @[alu_module.scala 19:38]
  wire [62:0] _GEN_23; // @[alu_module.scala 20:35]
  wire [62:0] _T_23; // @[alu_module.scala 20:35]
  wire  _T_25; // @[alu_module.scala 21:32]
  wire  _T_26; // @[alu_module.scala 23:27]
  wire [1:0] _GEN_0; // @[alu_module.scala 23:43]
  wire  _T_30; // @[alu_module.scala 28:32]
  wire  _T_32; // @[alu_module.scala 28:65]
  wire  _T_33; // @[alu_module.scala 28:47]
  wire [31:0] _T_34; // @[alu_module.scala 30:27]
  wire [31:0] _T_35; // @[alu_module.scala 30:49]
  wire  _T_36; // @[alu_module.scala 30:34]
  wire [1:0] _GEN_1; // @[alu_module.scala 30:57]
  wire  _T_40; // @[alu_module.scala 35:32]
  wire [31:0] _T_41; // @[alu_module.scala 37:35]
  wire [31:0] _T_42; // @[alu_module.scala 37:35]
  wire  _T_44; // @[alu_module.scala 38:32]
  wire  _T_46; // @[alu_module.scala 38:65]
  wire  _T_47; // @[alu_module.scala 38:47]
  wire [31:0] _T_49; // @[alu_module.scala 41:35]
  wire  _T_51; // @[alu_module.scala 42:32]
  wire [31:0] _T_52; // @[alu_module.scala 44:35]
  wire [31:0] _T_53; // @[alu_module.scala 44:35]
  wire  _T_55; // @[alu_module.scala 45:32]
  wire [31:0] _T_56; // @[alu_module.scala 47:35]
  wire [31:0] _T_57; // @[alu_module.scala 47:35]
  wire  _T_59; // @[alu_module.scala 48:32]
  wire [32:0] _T_60; // @[alu_module.scala 50:35]
  wire [31:0] _T_61; // @[alu_module.scala 50:35]
  wire [31:0] _T_62; // @[alu_module.scala 50:35]
  wire  _T_64; // @[alu_module.scala 51:32]
  wire  _T_65; // @[alu_module.scala 53:27]
  wire [1:0] _GEN_2; // @[alu_module.scala 53:45]
  wire  _T_69; // @[alu_module.scala 58:32]
  wire  _T_71; // @[alu_module.scala 60:14]
  wire [1:0] _GEN_3; // @[alu_module.scala 60:48]
  wire  _T_75; // @[alu_module.scala 65:32]
  wire  _T_80; // @[alu_module.scala 72:32]
  wire  _T_81; // @[alu_module.scala 74:27]
  wire [1:0] _GEN_5; // @[alu_module.scala 74:44]
  wire  _T_85; // @[alu_module.scala 79:32]
  wire  _T_88; // @[alu_module.scala 81:34]
  wire [1:0] _GEN_6; // @[alu_module.scala 81:58]
  wire [31:0] _GEN_8; // @[alu_module.scala 79:48]
  wire [31:0] _GEN_9; // @[alu_module.scala 72:48]
  wire [31:0] _GEN_10; // @[alu_module.scala 65:48]
  wire [31:0] _GEN_11; // @[alu_module.scala 58:48]
  wire [31:0] _GEN_12; // @[alu_module.scala 51:48]
  wire [31:0] _GEN_13; // @[alu_module.scala 48:48]
  wire [31:0] _GEN_14; // @[alu_module.scala 45:48]
  wire [31:0] _GEN_15; // @[alu_module.scala 42:48]
  wire [31:0] _GEN_16; // @[alu_module.scala 38:81]
  wire [31:0] _GEN_17; // @[alu_module.scala 35:48]
  wire [31:0] _GEN_18; // @[alu_module.scala 28:81]
  wire [31:0] _GEN_19; // @[alu_module.scala 21:48]
  wire [62:0] _GEN_20; // @[alu_module.scala 17:48]
  wire [62:0] _GEN_21; // @[alu_module.scala 14:41]
  wire [31:0] _GEN_24; // @[alu_module.scala 16:19 alu_module.scala 20:19 alu_module.scala 24:23 alu_module.scala 26:23 alu_module.scala 31:23 alu_module.scala 33:23 alu_module.scala 37:19 alu_module.scala 41:19 alu_module.scala 44:19 alu_module.scala 47:19 alu_module.scala 50:19 alu_module.scala 54:23 alu_module.scala 56:23 alu_module.scala 61:23 alu_module.scala 63:23 alu_module.scala 68:23 alu_module.scala 70:23 alu_module.scala 75:23 alu_module.scala 77:23 alu_module.scala 82:23 alu_module.scala 84:23 alu_module.scala 88:19]
  assign _T_16 = io_alu_control == 5'h0; // @[alu_module.scala 14:25]
  assign _T_17 = $signed(io_operand_a) + $signed(io_operand_b); // @[alu_module.scala 16:35]
  assign _T_18 = $signed(io_operand_a) + $signed(io_operand_b); // @[alu_module.scala 16:35]
  assign _T_19 = $signed(_T_18); // @[alu_module.scala 16:35]
  assign _T_21 = io_alu_control == 5'h1; // @[alu_module.scala 17:32]
  assign _T_22 = io_operand_b[4:0]; // @[alu_module.scala 19:38]
  assign _GEN_23 = {{31{io_operand_a[31]}},io_operand_a}; // @[alu_module.scala 20:35]
  assign _T_23 = $signed(_GEN_23) << _T_22; // @[alu_module.scala 20:35]
  assign _T_25 = io_alu_control == 5'h2; // @[alu_module.scala 21:32]
  assign _T_26 = $signed(io_operand_a) < $signed(io_operand_b); // @[alu_module.scala 23:27]
  assign _GEN_0 = _T_26 ? $signed(2'sh1) : $signed(2'sh0); // @[alu_module.scala 23:43]
  assign _T_30 = io_alu_control == 5'h3; // @[alu_module.scala 28:32]
  assign _T_32 = io_alu_control == 5'h16; // @[alu_module.scala 28:65]
  assign _T_33 = _T_30 | _T_32; // @[alu_module.scala 28:47]
  assign _T_34 = $unsigned(io_operand_a); // @[alu_module.scala 30:27]
  assign _T_35 = $unsigned(io_operand_b); // @[alu_module.scala 30:49]
  assign _T_36 = _T_34 < _T_35; // @[alu_module.scala 30:34]
  assign _GEN_1 = _T_36 ? $signed(2'sh1) : $signed(2'sh0); // @[alu_module.scala 30:57]
  assign _T_40 = io_alu_control == 5'h4; // @[alu_module.scala 35:32]
  assign _T_41 = $signed(io_operand_a) ^ $signed(io_operand_b); // @[alu_module.scala 37:35]
  assign _T_42 = $signed(_T_41); // @[alu_module.scala 37:35]
  assign _T_44 = io_alu_control == 5'h5; // @[alu_module.scala 38:32]
  assign _T_46 = io_alu_control == 5'hd; // @[alu_module.scala 38:65]
  assign _T_47 = _T_44 | _T_46; // @[alu_module.scala 38:47]
  assign _T_49 = $signed(io_operand_a) >>> _T_22; // @[alu_module.scala 41:35]
  assign _T_51 = io_alu_control == 5'h6; // @[alu_module.scala 42:32]
  assign _T_52 = $signed(io_operand_a) | $signed(io_operand_b); // @[alu_module.scala 44:35]
  assign _T_53 = $signed(_T_52); // @[alu_module.scala 44:35]
  assign _T_55 = io_alu_control == 5'h7; // @[alu_module.scala 45:32]
  assign _T_56 = $signed(io_operand_a) & $signed(io_operand_b); // @[alu_module.scala 47:35]
  assign _T_57 = $signed(_T_56); // @[alu_module.scala 47:35]
  assign _T_59 = io_alu_control == 5'h8; // @[alu_module.scala 48:32]
  assign _T_60 = $signed(io_operand_a) - $signed(io_operand_b); // @[alu_module.scala 50:35]
  assign _T_61 = $signed(io_operand_a) - $signed(io_operand_b); // @[alu_module.scala 50:35]
  assign _T_62 = $signed(_T_61); // @[alu_module.scala 50:35]
  assign _T_64 = io_alu_control == 5'h10; // @[alu_module.scala 51:32]
  assign _T_65 = $signed(io_operand_a) == $signed(io_operand_b); // @[alu_module.scala 53:27]
  assign _GEN_2 = _T_65 ? $signed(2'sh1) : $signed(2'sh0); // @[alu_module.scala 53:45]
  assign _T_69 = io_alu_control == 5'h11; // @[alu_module.scala 58:32]
  assign _T_71 = ~ _T_65; // @[alu_module.scala 60:14]
  assign _GEN_3 = _T_71 ? $signed(2'sh1) : $signed(2'sh0); // @[alu_module.scala 60:48]
  assign _T_75 = io_alu_control == 5'h14; // @[alu_module.scala 65:32]
  assign _T_80 = io_alu_control == 5'h15; // @[alu_module.scala 72:32]
  assign _T_81 = $signed(io_operand_a) >= $signed(io_operand_b); // @[alu_module.scala 74:27]
  assign _GEN_5 = _T_81 ? $signed(2'sh1) : $signed(2'sh0); // @[alu_module.scala 74:44]
  assign _T_85 = io_alu_control == 5'h17; // @[alu_module.scala 79:32]
  assign _T_88 = _T_34 >= _T_35; // @[alu_module.scala 81:34]
  assign _GEN_6 = _T_88 ? $signed(2'sh1) : $signed(2'sh0); // @[alu_module.scala 81:58]
  assign _GEN_8 = _T_85 ? $signed({{30{_GEN_6[1]}},_GEN_6}) : $signed(io_operand_a); // @[alu_module.scala 79:48]
  assign _GEN_9 = _T_80 ? $signed({{30{_GEN_5[1]}},_GEN_5}) : $signed(_GEN_8); // @[alu_module.scala 72:48]
  assign _GEN_10 = _T_75 ? $signed({{30{_GEN_0[1]}},_GEN_0}) : $signed(_GEN_9); // @[alu_module.scala 65:48]
  assign _GEN_11 = _T_69 ? $signed({{30{_GEN_3[1]}},_GEN_3}) : $signed(_GEN_10); // @[alu_module.scala 58:48]
  assign _GEN_12 = _T_64 ? $signed({{30{_GEN_2[1]}},_GEN_2}) : $signed(_GEN_11); // @[alu_module.scala 51:48]
  assign _GEN_13 = _T_59 ? $signed(_T_62) : $signed(_GEN_12); // @[alu_module.scala 48:48]
  assign _GEN_14 = _T_55 ? $signed(_T_57) : $signed(_GEN_13); // @[alu_module.scala 45:48]
  assign _GEN_15 = _T_51 ? $signed(_T_53) : $signed(_GEN_14); // @[alu_module.scala 42:48]
  assign _GEN_16 = _T_47 ? $signed(_T_49) : $signed(_GEN_15); // @[alu_module.scala 38:81]
  assign _GEN_17 = _T_40 ? $signed(_T_42) : $signed(_GEN_16); // @[alu_module.scala 35:48]
  assign _GEN_18 = _T_33 ? $signed({{30{_GEN_1[1]}},_GEN_1}) : $signed(_GEN_17); // @[alu_module.scala 28:81]
  assign _GEN_19 = _T_25 ? $signed({{30{_GEN_0[1]}},_GEN_0}) : $signed(_GEN_18); // @[alu_module.scala 21:48]
  assign _GEN_20 = _T_21 ? $signed(_T_23) : $signed({{31{_GEN_19[31]}},_GEN_19}); // @[alu_module.scala 17:48]
  assign _GEN_21 = _T_16 ? $signed({{31{_T_19[31]}},_T_19}) : $signed(_GEN_20); // @[alu_module.scala 14:41]
  assign _GEN_24 = _GEN_21[31:0]; // @[alu_module.scala 16:19 alu_module.scala 20:19 alu_module.scala 24:23 alu_module.scala 26:23 alu_module.scala 31:23 alu_module.scala 33:23 alu_module.scala 37:19 alu_module.scala 41:19 alu_module.scala 44:19 alu_module.scala 47:19 alu_module.scala 50:19 alu_module.scala 54:23 alu_module.scala 56:23 alu_module.scala 61:23 alu_module.scala 63:23 alu_module.scala 68:23 alu_module.scala 70:23 alu_module.scala 75:23 alu_module.scala 77:23 alu_module.scala 82:23 alu_module.scala 84:23 alu_module.scala 88:19]
  assign io_output = $signed(_GEN_24); // @[alu_module.scala 16:19 alu_module.scala 20:19 alu_module.scala 24:23 alu_module.scala 26:23 alu_module.scala 31:23 alu_module.scala 33:23 alu_module.scala 37:19 alu_module.scala 41:19 alu_module.scala 44:19 alu_module.scala 47:19 alu_module.scala 50:19 alu_module.scala 54:23 alu_module.scala 56:23 alu_module.scala 61:23 alu_module.scala 63:23 alu_module.scala 68:23 alu_module.scala 70:23 alu_module.scala 75:23 alu_module.scala 77:23 alu_module.scala 82:23 alu_module.scala 84:23 alu_module.scala 88:19]
endmodule
module alu_control(
  input  [2:0] io_alu_op,
  input        io_func7,
  input  [2:0] io_func3,
  output [4:0] io_output
);
  wire  _T_14; // @[alu_control.scala 11:20]
  wire [4:0] _T_17; // @[Cat.scala 30:58]
  wire  _T_19; // @[alu_control.scala 14:27]
  wire  _T_22; // @[alu_control.scala 17:27]
  wire  _T_24; // @[alu_control.scala 19:23]
  wire [4:0] _T_31; // @[Cat.scala 30:58]
  wire [4:0] _GEN_0; // @[alu_control.scala 19:37]
  wire  _T_33; // @[alu_control.scala 25:27]
  wire  _T_36; // @[alu_control.scala 27:27]
  wire [4:0] _T_38; // @[Cat.scala 30:58]
  wire  _T_40; // @[alu_control.scala 30:27]
  wire [4:0] _GEN_2; // @[alu_control.scala 30:41]
  wire [4:0] _GEN_3; // @[alu_control.scala 27:41]
  wire [4:0] _GEN_4; // @[alu_control.scala 25:41]
  wire [4:0] _GEN_5; // @[alu_control.scala 17:41]
  wire [4:0] _GEN_6; // @[alu_control.scala 14:41]
  assign _T_14 = io_alu_op == 3'h0; // @[alu_control.scala 11:20]
  assign _T_17 = {1'h0,io_func7,io_func3}; // @[Cat.scala 30:58]
  assign _T_19 = io_alu_op == 3'h4; // @[alu_control.scala 14:27]
  assign _T_22 = io_alu_op == 3'h1; // @[alu_control.scala 17:27]
  assign _T_24 = io_func3 == 3'h5; // @[alu_control.scala 19:23]
  assign _T_31 = {2'h0,io_func3}; // @[Cat.scala 30:58]
  assign _GEN_0 = _T_24 ? _T_17 : _T_31; // @[alu_control.scala 19:37]
  assign _T_33 = io_alu_op == 3'h5; // @[alu_control.scala 25:27]
  assign _T_36 = io_alu_op == 3'h2; // @[alu_control.scala 27:27]
  assign _T_38 = {2'h2,io_func3}; // @[Cat.scala 30:58]
  assign _T_40 = io_alu_op == 3'h3; // @[alu_control.scala 30:27]
  assign _GEN_2 = _T_40 ? 5'h1f : 5'h0; // @[alu_control.scala 30:41]
  assign _GEN_3 = _T_36 ? _T_38 : _GEN_2; // @[alu_control.scala 27:41]
  assign _GEN_4 = _T_33 ? 5'h0 : _GEN_3; // @[alu_control.scala 25:41]
  assign _GEN_5 = _T_22 ? _GEN_0 : _GEN_4; // @[alu_control.scala 17:41]
  assign _GEN_6 = _T_19 ? 5'h0 : _GEN_5; // @[alu_control.scala 14:41]
  assign io_output = _T_14 ? _T_17 : _GEN_6; // @[alu_control.scala 13:19 alu_control.scala 16:19 alu_control.scala 20:23 alu_control.scala 22:23 alu_control.scala 26:19 alu_control.scala 29:19 alu_control.scala 32:19 alu_control.scala 35:19]
endmodule
module immediate_generation(
  input  [31:0] io_instruction,
  input  [31:0] io_pc,
  output [31:0] io_s_immediate,
  output [31:0] io_sb_immediate,
  output [31:0] io_u_immediate,
  output [31:0] io_uj_immediate,
  output [31:0] io_i_immediate
);
  wire [11:0] i_immediate_12; // @[immediate_generation.scala 17:40]
  wire  _T_19; // @[immediate_generation.scala 18:53]
  wire [19:0] _T_23; // @[Bitwise.scala 72:12]
  wire [31:0] i_immediate_32; // @[Cat.scala 30:58]
  wire [4:0] s_lower_half; // @[immediate_generation.scala 21:38]
  wire [6:0] s_upper_half; // @[immediate_generation.scala 22:38]
  wire [11:0] s_immediate_12; // @[Cat.scala 30:58]
  wire  _T_25; // @[immediate_generation.scala 24:53]
  wire [19:0] _T_29; // @[Bitwise.scala 72:12]
  wire [31:0] s_immediate_32; // @[Cat.scala 30:58]
  wire [3:0] sb_lower_half; // @[immediate_generation.scala 27:39]
  wire [5:0] sb_upper_half; // @[immediate_generation.scala 28:39]
  wire  sb_11thbit; // @[immediate_generation.scala 29:36]
  wire  sb_12thbit; // @[immediate_generation.scala 30:36]
  wire [12:0] sb_immediate_13; // @[Cat.scala 30:58]
  wire  _T_36; // @[immediate_generation.scala 32:55]
  wire [18:0] _T_40; // @[Bitwise.scala 72:12]
  wire [31:0] _T_41; // @[Cat.scala 30:58]
  wire [31:0] sb_immediate_32; // @[immediate_generation.scala 32:79]
  wire [32:0] _T_42; // @[immediate_generation.scala 33:40]
  wire [31:0] _T_43; // @[immediate_generation.scala 33:40]
  wire [19:0] u_immediate_20; // @[immediate_generation.scala 35:40]
  wire  _T_45; // @[immediate_generation.scala 36:53]
  wire [11:0] _T_49; // @[Bitwise.scala 72:12]
  wire [31:0] u_immediate_32; // @[Cat.scala 30:58]
  wire [46:0] _GEN_0; // @[immediate_generation.scala 37:49]
  wire [46:0] u_immediate_32_shifted; // @[immediate_generation.scala 37:49]
  wire [46:0] _T_51; // @[immediate_generation.scala 38:46]
  wire [9:0] uj_lower_half; // @[immediate_generation.scala 42:39]
  wire  uj_11thbit; // @[immediate_generation.scala 43:36]
  wire [7:0] uj_upper_half; // @[immediate_generation.scala 44:39]
  wire [20:0] uj_immediate_21; // @[Cat.scala 30:58]
  wire  _T_57; // @[immediate_generation.scala 47:55]
  wire [10:0] _T_61; // @[Bitwise.scala 72:12]
  wire [31:0] _T_62; // @[Cat.scala 30:58]
  wire [31:0] uj_immediate_32; // @[immediate_generation.scala 47:79]
  wire [32:0] _T_63; // @[immediate_generation.scala 48:40]
  wire [31:0] _T_64; // @[immediate_generation.scala 48:40]
  wire [31:0] _GEN_1; // @[immediate_generation.scala 38:20]
  assign i_immediate_12 = io_instruction[31:20]; // @[immediate_generation.scala 17:40]
  assign _T_19 = i_immediate_12[11]; // @[immediate_generation.scala 18:53]
  assign _T_23 = _T_19 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  assign i_immediate_32 = {_T_23,i_immediate_12}; // @[Cat.scala 30:58]
  assign s_lower_half = io_instruction[11:7]; // @[immediate_generation.scala 21:38]
  assign s_upper_half = io_instruction[31:25]; // @[immediate_generation.scala 22:38]
  assign s_immediate_12 = {s_upper_half,s_lower_half}; // @[Cat.scala 30:58]
  assign _T_25 = s_immediate_12[11]; // @[immediate_generation.scala 24:53]
  assign _T_29 = _T_25 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  assign s_immediate_32 = {_T_29,s_upper_half,s_lower_half}; // @[Cat.scala 30:58]
  assign sb_lower_half = io_instruction[11:8]; // @[immediate_generation.scala 27:39]
  assign sb_upper_half = io_instruction[30:25]; // @[immediate_generation.scala 28:39]
  assign sb_11thbit = io_instruction[7]; // @[immediate_generation.scala 29:36]
  assign sb_12thbit = io_instruction[31]; // @[immediate_generation.scala 30:36]
  assign sb_immediate_13 = {sb_12thbit,sb_11thbit,sb_upper_half,sb_lower_half,1'h0}; // @[Cat.scala 30:58]
  assign _T_36 = sb_immediate_13[12]; // @[immediate_generation.scala 32:55]
  assign _T_40 = _T_36 ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12]
  assign _T_41 = {_T_40,sb_12thbit,sb_11thbit,sb_upper_half,sb_lower_half,1'h0}; // @[Cat.scala 30:58]
  assign sb_immediate_32 = $signed(_T_41); // @[immediate_generation.scala 32:79]
  assign _T_42 = $signed(sb_immediate_32) + $signed(io_pc); // @[immediate_generation.scala 33:40]
  assign _T_43 = $signed(sb_immediate_32) + $signed(io_pc); // @[immediate_generation.scala 33:40]
  assign u_immediate_20 = io_instruction[31:12]; // @[immediate_generation.scala 35:40]
  assign _T_45 = u_immediate_20[19]; // @[immediate_generation.scala 36:53]
  assign _T_49 = _T_45 ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  assign u_immediate_32 = {_T_49,u_immediate_20}; // @[Cat.scala 30:58]
  assign _GEN_0 = {{15'd0}, u_immediate_32}; // @[immediate_generation.scala 37:49]
  assign u_immediate_32_shifted = _GEN_0 << 4'hc; // @[immediate_generation.scala 37:49]
  assign _T_51 = $signed(u_immediate_32_shifted); // @[immediate_generation.scala 38:46]
  assign uj_lower_half = io_instruction[30:21]; // @[immediate_generation.scala 42:39]
  assign uj_11thbit = io_instruction[20]; // @[immediate_generation.scala 43:36]
  assign uj_upper_half = io_instruction[19:12]; // @[immediate_generation.scala 44:39]
  assign uj_immediate_21 = {sb_12thbit,uj_upper_half,uj_11thbit,uj_lower_half,1'h0}; // @[Cat.scala 30:58]
  assign _T_57 = uj_immediate_21[20]; // @[immediate_generation.scala 47:55]
  assign _T_61 = _T_57 ? 11'h7ff : 11'h0; // @[Bitwise.scala 72:12]
  assign _T_62 = {_T_61,sb_12thbit,uj_upper_half,uj_11thbit,uj_lower_half,1'h0}; // @[Cat.scala 30:58]
  assign uj_immediate_32 = $signed(_T_62); // @[immediate_generation.scala 47:79]
  assign _T_63 = $signed(uj_immediate_32) + $signed(io_pc); // @[immediate_generation.scala 48:40]
  assign _T_64 = $signed(uj_immediate_32) + $signed(io_pc); // @[immediate_generation.scala 48:40]
  assign io_s_immediate = $signed(s_immediate_32); // @[immediate_generation.scala 25:20]
  assign io_sb_immediate = $signed(_T_43); // @[immediate_generation.scala 33:21]
  assign _GEN_1 = _T_51[31:0]; // @[immediate_generation.scala 38:20]
  assign io_u_immediate = $signed(_GEN_1); // @[immediate_generation.scala 38:20]
  assign io_uj_immediate = $signed(_T_64); // @[immediate_generation.scala 48:21]
  assign io_i_immediate = $signed(i_immediate_32); // @[immediate_generation.scala 19:20]
endmodule
module jalr(
  input  [31:0] io_input_a,
  input  [31:0] io_input_b,
  output [31:0] io_output
);
  wire [32:0] _T_11; // @[jalr.scala 11:26]
  wire [31:0] _T_12; // @[jalr.scala 11:26]
  wire [31:0] sum; // @[jalr.scala 11:26]
  wire [32:0] _GEN_0; // @[jalr.scala 12:22]
  wire [32:0] _T_14; // @[jalr.scala 12:22]
  wire [32:0] _T_15; // @[jalr.scala 12:22]
  wire [31:0] _GEN_1; // @[jalr.scala 12:15]
  assign _T_11 = $signed(io_input_a) + $signed(io_input_b); // @[jalr.scala 11:26]
  assign _T_12 = $signed(io_input_a) + $signed(io_input_b); // @[jalr.scala 11:26]
  assign sum = $signed(_T_12); // @[jalr.scala 11:26]
  assign _GEN_0 = {{1{sum[31]}},sum}; // @[jalr.scala 12:22]
  assign _T_14 = $signed(_GEN_0) & $signed(33'shfffffffe); // @[jalr.scala 12:22]
  assign _T_15 = $signed(_T_14); // @[jalr.scala 12:22]
  assign _GEN_1 = _T_15[31:0]; // @[jalr.scala 12:15]
  assign io_output = $signed(_GEN_1); // @[jalr.scala 12:15]
endmodule
module pc(
  input         clock,
  input         reset,
  input  [31:0] io_in,
  output [31:0] io_out,
  output [31:0] io_pc4
);
  reg [31:0] register; // @[pc.scala 11:27]
  reg [31:0] _RAND_0;
  wire [32:0] _T_14; // @[pc.scala 14:24]
  wire [31:0] _T_15; // @[pc.scala 14:24]
  assign _T_14 = $signed(register) + $signed(32'sh4); // @[pc.scala 14:24]
  assign _T_15 = $signed(register) + $signed(32'sh4); // @[pc.scala 14:24]
  assign io_out = register; // @[pc.scala 13:12]
  assign io_pc4 = $signed(_T_15); // @[pc.scala 14:12]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  register = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      register <= 32'sh0;
    end else begin
      register <= io_in;
    end
  end
endmodule
module instruction_memory(
  input         clock,
  input  [9:0]  io_write_address,
  output [31:0] io_read_data
);
  reg [31:0] memory [0:1023]; // @[instruction_memory.scala 10:21]
  reg [31:0] _RAND_0;
  wire [31:0] memory__T_11_data; // @[instruction_memory.scala 10:21]
  wire [9:0] memory__T_11_addr; // @[instruction_memory.scala 10:21]
  assign memory__T_11_addr = io_write_address;
  assign memory__T_11_data = memory[memory__T_11_addr]; // @[instruction_memory.scala 10:21]
  assign io_read_data = memory__T_11_data; // @[instruction_memory.scala 12:18]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    memory[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  end
`endif // RANDOMIZE
endmodule
module data_memory(
  input         clock,
  input         io_memory_write,
  input         io_memory_read,
  input  [9:0]  io_memory_address,
  input  [31:0] io_memory_data,
  output [31:0] io_memory_out
);
  reg [31:0] memory [0:1023]; // @[data_memory.scala 12:21]
  reg [31:0] _RAND_0;
  wire [31:0] memory__T_23_data; // @[data_memory.scala 12:21]
  wire [9:0] memory__T_23_addr; // @[data_memory.scala 12:21]
  wire [31:0] memory__T_24_data; // @[data_memory.scala 12:21]
  wire [9:0] memory__T_24_addr; // @[data_memory.scala 12:21]
  wire [31:0] memory__T_22_data; // @[data_memory.scala 12:21]
  wire [9:0] memory__T_22_addr; // @[data_memory.scala 12:21]
  wire  memory__T_22_mask; // @[data_memory.scala 12:21]
  wire  memory__T_22_en; // @[data_memory.scala 12:21]
  wire  _T_20; // @[data_memory.scala 13:55]
  wire  _T_21; // @[data_memory.scala 13:37]
  assign memory__T_23_addr = io_memory_address;
  assign memory__T_23_data = memory[memory__T_23_addr]; // @[data_memory.scala 12:21]
  assign memory__T_24_addr = io_memory_address;
  assign memory__T_24_data = memory[memory__T_24_addr]; // @[data_memory.scala 12:21]
  assign memory__T_22_data = io_memory_data;
  assign memory__T_22_addr = io_memory_address;
  assign memory__T_22_mask = 1'h1;
  assign memory__T_22_en = io_memory_write & _T_20;
  assign _T_20 = io_memory_read == 1'h0; // @[data_memory.scala 13:55]
  assign _T_21 = io_memory_write & _T_20; // @[data_memory.scala 13:37]
  assign io_memory_out = _T_21 ? $signed(memory__T_23_data) : $signed(memory__T_24_data); // @[data_memory.scala 16:23 data_memory.scala 19:23]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    memory[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if(memory__T_22_en & memory__T_22_mask) begin
      memory[memory__T_22_addr] <= memory__T_22_data; // @[data_memory.scala 12:21]
    end
  end
endmodule
module IF_ID(
  input         clock,
  input         reset,
  input  [31:0] io_pc_in,
  input  [31:0] io_pc4_in,
  input  [31:0] io_instruction_in,
  output [31:0] io_pc_out,
  output [31:0] io_pc4_out,
  output [31:0] io_instruction_out
);
  reg [31:0] pc_register; // @[IF_ID.scala 13:30]
  reg [31:0] _RAND_0;
  reg [31:0] pc4_register; // @[IF_ID.scala 14:31]
  reg [31:0] _RAND_1;
  reg [31:0] instruction_register; // @[IF_ID.scala 15:39]
  reg [31:0] _RAND_2;
  assign io_pc_out = pc_register; // @[IF_ID.scala 19:15]
  assign io_pc4_out = pc4_register; // @[IF_ID.scala 20:16]
  assign io_instruction_out = instruction_register; // @[IF_ID.scala 21:24]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc_register = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  pc4_register = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  instruction_register = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      pc_register <= 32'sh0;
    end else begin
      pc_register <= io_pc_in;
    end
    if (reset) begin
      pc4_register <= 32'sh0;
    end else begin
      pc4_register <= io_pc4_in;
    end
    if (reset) begin
      instruction_register <= 32'h0;
    end else begin
      instruction_register <= io_instruction_in;
    end
  end
endmodule
module ID_EX(
  input         clock,
  input         reset,
  input  [31:0] io_pc4_in,
  input  [4:0]  io_rs1_select_in,
  input  [4:0]  io_rs2_select_in,
  input  [31:0] io_rs1_in,
  input  [31:0] io_rs2_in,
  input  [31:0] io_immediate_in,
  input  [4:0]  io_rd_select_in,
  input  [2:0]  io_func3_in,
  input         io_func7_in,
  input         io_control_memorywrite_in,
  input         io_control_memoryread_in,
  input         io_control_registerwrite_in,
  input         io_control_memorytoregister_in,
  input  [2:0]  io_control_aluop_in,
  input  [1:0]  io_control_opa_select_in,
  input         io_control_opb_select_in,
  output [31:0] io_pc4_out,
  output [31:0] io_rs1_out,
  output [31:0] io_rs2_out,
  output [31:0] io_immediate_out,
  output [2:0]  io_func3_out,
  output        io_func7_out,
  output [4:0]  io_rd_select_out,
  output [4:0]  io_rs1_select_out,
  output [4:0]  io_rs2_select_out,
  output        io_control_memorywrite_out,
  output        io_control_memoryread_out,
  output        io_control_registerwrite_out,
  output        io_control_memorytoregister_out,
  output [2:0]  io_control_aluop_out,
  output [1:0]  io_control_opa_select_out,
  output        io_control_opb_select_out
);
  reg [31:0] pc4_register; // @[ID_EX.scala 46:31]
  reg [31:0] _RAND_0;
  reg [31:0] rs1_register; // @[ID_EX.scala 47:31]
  reg [31:0] _RAND_1;
  reg [31:0] rs2_register; // @[ID_EX.scala 48:31]
  reg [31:0] _RAND_2;
  reg [31:0] immediate_register; // @[ID_EX.scala 49:37]
  reg [31:0] _RAND_3;
  reg [4:0] rd_select_register; // @[ID_EX.scala 50:37]
  reg [31:0] _RAND_4;
  reg [4:0] rs1_select_register; // @[ID_EX.scala 51:38]
  reg [31:0] _RAND_5;
  reg [4:0] rs2_select_register; // @[ID_EX.scala 52:38]
  reg [31:0] _RAND_6;
  reg [2:0] func3_register; // @[ID_EX.scala 53:33]
  reg [31:0] _RAND_7;
  reg  func7_register; // @[ID_EX.scala 54:33]
  reg [31:0] _RAND_8;
  reg  control_memorywrite_register; // @[ID_EX.scala 56:47]
  reg [31:0] _RAND_9;
  reg  control_memoryread_register; // @[ID_EX.scala 57:46]
  reg [31:0] _RAND_10;
  reg  control_registerwrite_register; // @[ID_EX.scala 59:49]
  reg [31:0] _RAND_11;
  reg  control_memorytoregister_register; // @[ID_EX.scala 60:52]
  reg [31:0] _RAND_12;
  reg [2:0] control_aluop_register; // @[ID_EX.scala 61:41]
  reg [31:0] _RAND_13;
  reg [1:0] control_opa_select_register; // @[ID_EX.scala 62:46]
  reg [31:0] _RAND_14;
  reg  control_opb_select_register; // @[ID_EX.scala 63:46]
  reg [31:0] _RAND_15;
  assign io_pc4_out = pc4_register; // @[ID_EX.scala 89:16]
  assign io_rs1_out = rs1_register; // @[ID_EX.scala 90:16]
  assign io_rs2_out = rs2_register; // @[ID_EX.scala 91:16]
  assign io_immediate_out = immediate_register; // @[ID_EX.scala 92:22]
  assign io_func3_out = func3_register; // @[ID_EX.scala 96:18]
  assign io_func7_out = func7_register; // @[ID_EX.scala 97:18]
  assign io_rd_select_out = rd_select_register; // @[ID_EX.scala 93:22]
  assign io_rs1_select_out = rs1_select_register; // @[ID_EX.scala 94:23]
  assign io_rs2_select_out = rs2_select_register; // @[ID_EX.scala 95:23]
  assign io_control_memorywrite_out = control_memorywrite_register; // @[ID_EX.scala 99:32]
  assign io_control_memoryread_out = control_memoryread_register; // @[ID_EX.scala 100:31]
  assign io_control_registerwrite_out = control_registerwrite_register; // @[ID_EX.scala 102:34]
  assign io_control_memorytoregister_out = control_memorytoregister_register; // @[ID_EX.scala 103:37]
  assign io_control_aluop_out = control_aluop_register; // @[ID_EX.scala 104:26]
  assign io_control_opa_select_out = control_opa_select_register; // @[ID_EX.scala 105:31]
  assign io_control_opb_select_out = control_opb_select_register; // @[ID_EX.scala 106:31]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc4_register = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  rs1_register = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  rs2_register = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  immediate_register = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  rd_select_register = _RAND_4[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  rs1_select_register = _RAND_5[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  rs2_select_register = _RAND_6[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  func3_register = _RAND_7[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  func7_register = _RAND_8[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  control_memorywrite_register = _RAND_9[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  control_memoryread_register = _RAND_10[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  control_registerwrite_register = _RAND_11[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  control_memorytoregister_register = _RAND_12[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  control_aluop_register = _RAND_13[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  control_opa_select_register = _RAND_14[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  control_opb_select_register = _RAND_15[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      pc4_register <= 32'sh0;
    end else begin
      pc4_register <= io_pc4_in;
    end
    if (reset) begin
      rs1_register <= 32'sh0;
    end else begin
      rs1_register <= io_rs1_in;
    end
    if (reset) begin
      rs2_register <= 32'sh0;
    end else begin
      rs2_register <= io_rs2_in;
    end
    if (reset) begin
      immediate_register <= 32'sh0;
    end else begin
      immediate_register <= io_immediate_in;
    end
    if (reset) begin
      rd_select_register <= 5'h0;
    end else begin
      rd_select_register <= io_rd_select_in;
    end
    if (reset) begin
      rs1_select_register <= 5'h0;
    end else begin
      rs1_select_register <= io_rs1_select_in;
    end
    if (reset) begin
      rs2_select_register <= 5'h0;
    end else begin
      rs2_select_register <= io_rs2_select_in;
    end
    if (reset) begin
      func3_register <= 3'h0;
    end else begin
      func3_register <= io_func3_in;
    end
    if (reset) begin
      func7_register <= 1'h0;
    end else begin
      func7_register <= io_func7_in;
    end
    if (reset) begin
      control_memorywrite_register <= 1'h0;
    end else begin
      control_memorywrite_register <= io_control_memorywrite_in;
    end
    if (reset) begin
      control_memoryread_register <= 1'h0;
    end else begin
      control_memoryread_register <= io_control_memoryread_in;
    end
    if (reset) begin
      control_registerwrite_register <= 1'h0;
    end else begin
      control_registerwrite_register <= io_control_registerwrite_in;
    end
    if (reset) begin
      control_memorytoregister_register <= 1'h0;
    end else begin
      control_memorytoregister_register <= io_control_memorytoregister_in;
    end
    if (reset) begin
      control_aluop_register <= 3'h0;
    end else begin
      control_aluop_register <= io_control_aluop_in;
    end
    if (reset) begin
      control_opa_select_register <= 2'h0;
    end else begin
      control_opa_select_register <= io_control_opa_select_in;
    end
    if (reset) begin
      control_opb_select_register <= 1'h0;
    end else begin
      control_opb_select_register <= io_control_opb_select_in;
    end
  end
endmodule
module EX_MEM(
  input         clock,
  input         reset,
  input         io_memorywrite,
  input         io_memoryread,
  input         io_registerwrite,
  input         io_memorytoregister,
  input  [31:0] io_rs2_in,
  input  [4:0]  io_rd_select,
  input  [31:0] io_alu_out_in,
  output        io_memorywrite_out,
  output        io_memoryread_out,
  output        io_registerwrite_out,
  output        io_memorytoregister_out,
  output [31:0] io_rs2_out,
  output [4:0]  io_rd_select_out,
  output [31:0] io_alu_out
);
  reg  register_memorywrite; // @[EX_MEM.scala 27:43]
  reg [31:0] _RAND_0;
  reg  register_memoryread; // @[EX_MEM.scala 31:42]
  reg [31:0] _RAND_1;
  reg  register_registerwrite; // @[EX_MEM.scala 35:45]
  reg [31:0] _RAND_2;
  reg  register_memorytoregister; // @[EX_MEM.scala 39:48]
  reg [31:0] _RAND_3;
  reg [31:0] register_rs2; // @[EX_MEM.scala 43:35]
  reg [31:0] _RAND_4;
  reg [4:0] register_rd_select; // @[EX_MEM.scala 47:41]
  reg [31:0] _RAND_5;
  reg [31:0] register_alu_out; // @[EX_MEM.scala 55:39]
  reg [31:0] _RAND_6;
  assign io_memorywrite_out = register_memorywrite; // @[EX_MEM.scala 29:28]
  assign io_memoryread_out = register_memoryread; // @[EX_MEM.scala 33:27]
  assign io_registerwrite_out = register_registerwrite; // @[EX_MEM.scala 37:30]
  assign io_memorytoregister_out = register_memorytoregister; // @[EX_MEM.scala 41:33]
  assign io_rs2_out = register_rs2; // @[EX_MEM.scala 45:20]
  assign io_rd_select_out = register_rd_select; // @[EX_MEM.scala 49:26]
  assign io_alu_out = register_alu_out; // @[EX_MEM.scala 57:20]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  register_memorywrite = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  register_memoryread = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  register_registerwrite = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  register_memorytoregister = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  register_rs2 = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  register_rd_select = _RAND_5[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  register_alu_out = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      register_memorywrite <= 1'h0;
    end else begin
      register_memorywrite <= io_memorywrite;
    end
    if (reset) begin
      register_memoryread <= 1'h0;
    end else begin
      register_memoryread <= io_memoryread;
    end
    if (reset) begin
      register_registerwrite <= 1'h0;
    end else begin
      register_registerwrite <= io_registerwrite;
    end
    if (reset) begin
      register_memorytoregister <= 1'h0;
    end else begin
      register_memorytoregister <= io_memorytoregister;
    end
    if (reset) begin
      register_rs2 <= 32'sh0;
    end else begin
      register_rs2 <= io_rs2_in;
    end
    if (reset) begin
      register_rd_select <= 5'h0;
    end else begin
      register_rd_select <= io_rd_select;
    end
    if (reset) begin
      register_alu_out <= 32'sh0;
    end else begin
      register_alu_out <= io_alu_out_in;
    end
  end
endmodule
module MEM_WB(
  input         clock,
  input         reset,
  input         io_registerwrite,
  input         io_memorytoregister,
  input  [4:0]  io_rd_select,
  input         io_memoryread,
  input  [31:0] io_datamemory_data_in,
  input  [31:0] io_alu_out_in,
  output        io_registerwrite_out,
  output        io_memorytoregister_out,
  output        io_memoryread_out,
  output [4:0]  io_rd_select_out,
  output [31:0] io_datamemory_data_out,
  output [31:0] io_alu_out
);
  reg  register_registerwrite; // @[MEM_WB.scala 21:41]
  reg [31:0] _RAND_0;
  reg  register_memorytoregister; // @[MEM_WB.scala 25:44]
  reg [31:0] _RAND_1;
  reg  register_memoryread; // @[MEM_WB.scala 29:38]
  reg [31:0] _RAND_2;
  reg [4:0] register_rd_select; // @[MEM_WB.scala 33:37]
  reg [31:0] _RAND_3;
  reg [31:0] register_datamemory_data; // @[MEM_WB.scala 37:43]
  reg [31:0] _RAND_4;
  reg [31:0] register_alu; // @[MEM_WB.scala 41:31]
  reg [31:0] _RAND_5;
  assign io_registerwrite_out = register_registerwrite; // @[MEM_WB.scala 23:26]
  assign io_memorytoregister_out = register_memorytoregister; // @[MEM_WB.scala 27:29]
  assign io_memoryread_out = register_memoryread; // @[MEM_WB.scala 31:23]
  assign io_rd_select_out = register_rd_select; // @[MEM_WB.scala 35:22]
  assign io_datamemory_data_out = register_datamemory_data; // @[MEM_WB.scala 39:28]
  assign io_alu_out = register_alu; // @[MEM_WB.scala 43:16]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  register_registerwrite = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  register_memorytoregister = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  register_memoryread = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  register_rd_select = _RAND_3[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  register_datamemory_data = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  register_alu = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      register_registerwrite <= 1'h0;
    end else begin
      register_registerwrite <= io_registerwrite;
    end
    if (reset) begin
      register_memorytoregister <= 1'h0;
    end else begin
      register_memorytoregister <= io_memorytoregister;
    end
    if (reset) begin
      register_memoryread <= 1'h0;
    end else begin
      register_memoryread <= io_memoryread;
    end
    if (reset) begin
      register_rd_select <= 5'h0;
    end else begin
      register_rd_select <= io_rd_select;
    end
    if (reset) begin
      register_datamemory_data <= 32'sh0;
    end else begin
      register_datamemory_data <= io_datamemory_data_in;
    end
    if (reset) begin
      register_alu <= 32'sh0;
    end else begin
      register_alu <= io_alu_out_in;
    end
  end
endmodule
module forward_unit(
  input  [4:0] io_EX_MEM_registerrd,
  input  [4:0] io_MEM_WB_registerrd,
  input  [4:0] io_ID_EX_registerrs1,
  input  [4:0] io_ID_EX_registerrs2,
  input        io_EX_MEM_registerwrite,
  input        io_MEM_WB_registerwrite,
  output [1:0] io_forward_a,
  output [1:0] io_forward_b
);
  wire  _T_26; // @[forward_unit.scala 17:72]
  wire  _T_27; // @[forward_unit.scala 17:47]
  wire  _T_28; // @[forward_unit.scala 17:113]
  wire  _T_29; // @[forward_unit.scala 17:88]
  wire  _T_30; // @[forward_unit.scala 17:164]
  wire  _T_31; // @[forward_unit.scala 17:139]
  wire  _T_40; // @[forward_unit.scala 22:91]
  wire  _GEN_2; // @[forward_unit.scala 22:143]
  wire  _GEN_3; // @[forward_unit.scala 17:191]
  wire  _GEN_4; // @[forward_unit.scala 17:191]
  wire  _T_53; // @[forward_unit.scala 31:69]
  wire  _T_54; // @[forward_unit.scala 31:45]
  wire  _T_64; // @[forward_unit.scala 31:87]
  wire  _T_65; // @[forward_unit.scala 31:84]
  wire  _T_66; // @[forward_unit.scala 31:295]
  wire  _T_67; // @[forward_unit.scala 31:270]
  wire  _T_68; // @[forward_unit.scala 31:346]
  wire  _T_69; // @[forward_unit.scala 31:321]
  wire  _T_84; // @[forward_unit.scala 34:94]
  wire  _T_85; // @[forward_unit.scala 34:91]
  wire  _T_87; // @[forward_unit.scala 34:226]
  wire  _T_104; // @[forward_unit.scala 37:227]
  wire  _GEN_5; // @[forward_unit.scala 37:279]
  wire  _GEN_6; // @[forward_unit.scala 34:278]
  wire  _GEN_7; // @[forward_unit.scala 34:278]
  wire  _GEN_8; // @[forward_unit.scala 31:373]
  wire  _GEN_9; // @[forward_unit.scala 31:373]
  assign _T_26 = io_EX_MEM_registerrd != 5'h0; // @[forward_unit.scala 17:72]
  assign _T_27 = io_EX_MEM_registerwrite & _T_26; // @[forward_unit.scala 17:47]
  assign _T_28 = io_EX_MEM_registerrd == io_ID_EX_registerrs1; // @[forward_unit.scala 17:113]
  assign _T_29 = _T_27 & _T_28; // @[forward_unit.scala 17:88]
  assign _T_30 = io_EX_MEM_registerrd == io_ID_EX_registerrs2; // @[forward_unit.scala 17:164]
  assign _T_31 = _T_29 & _T_30; // @[forward_unit.scala 17:139]
  assign _T_40 = _T_27 & _T_30; // @[forward_unit.scala 22:91]
  assign _GEN_2 = _T_40 ? 1'h0 : _T_29; // @[forward_unit.scala 22:143]
  assign _GEN_3 = _T_31 ? 1'h1 : _GEN_2; // @[forward_unit.scala 17:191]
  assign _GEN_4 = _T_31 ? 1'h1 : _T_40; // @[forward_unit.scala 17:191]
  assign _T_53 = io_MEM_WB_registerrd != 5'h0; // @[forward_unit.scala 31:69]
  assign _T_54 = io_MEM_WB_registerwrite & _T_53; // @[forward_unit.scala 31:45]
  assign _T_64 = ~ _T_31; // @[forward_unit.scala 31:87]
  assign _T_65 = _T_54 & _T_64; // @[forward_unit.scala 31:84]
  assign _T_66 = io_MEM_WB_registerrd == io_ID_EX_registerrs1; // @[forward_unit.scala 31:295]
  assign _T_67 = _T_65 & _T_66; // @[forward_unit.scala 31:270]
  assign _T_68 = io_MEM_WB_registerrd == io_ID_EX_registerrs2; // @[forward_unit.scala 31:346]
  assign _T_69 = _T_67 & _T_68; // @[forward_unit.scala 31:321]
  assign _T_84 = ~ _T_40; // @[forward_unit.scala 34:94]
  assign _T_85 = _T_54 & _T_84; // @[forward_unit.scala 34:91]
  assign _T_87 = _T_85 & _T_68; // @[forward_unit.scala 34:226]
  assign _T_104 = _T_85 & _T_66; // @[forward_unit.scala 37:227]
  assign _GEN_5 = _T_104 ? 1'h1 : _GEN_3; // @[forward_unit.scala 37:279]
  assign _GEN_6 = _T_87 ? 1'h1 : _GEN_4; // @[forward_unit.scala 34:278]
  assign _GEN_7 = _T_87 ? _GEN_3 : _GEN_5; // @[forward_unit.scala 34:278]
  assign _GEN_8 = _T_69 ? 1'h1 : _GEN_7; // @[forward_unit.scala 31:373]
  assign _GEN_9 = _T_69 ? 1'h1 : _GEN_6; // @[forward_unit.scala 31:373]
  assign io_forward_a = {{1'd0}, _GEN_8}; // @[forward_unit.scala 14:22 forward_unit.scala 20:22 forward_unit.scala 26:22 forward_unit.scala 32:22 forward_unit.scala 38:22]
  assign io_forward_b = {{1'd0}, _GEN_9}; // @[forward_unit.scala 15:22 forward_unit.scala 21:22 forward_unit.scala 23:22 forward_unit.scala 33:22 forward_unit.scala 35:22]
endmodule
module hazard_detection(
  input  [31:0] io_pc_in,
  input  [31:0] io_current_pc,
  input         io_ID_EX_memoryread,
  input  [31:0] io_IF_ID_instruction,
  input  [4:0]  io_ID_EX_registerrd,
  output        io_instruction_forward,
  output        io_pc_forward,
  output        io_control_forward,
  output [31:0] io_instruction_out,
  output [31:0] io_pc_out,
  output [31:0] io_current_pc_out
);
  wire [4:0] rs1_sel; // @[hazard_detection.scala 18:37]
  wire [4:0] rs2_sel; // @[hazard_detection.scala 19:37]
  wire  _T_29; // @[hazard_detection.scala 20:64]
  wire  _T_30; // @[hazard_detection.scala 20:101]
  wire  _T_31; // @[hazard_detection.scala 20:77]
  assign rs1_sel = io_IF_ID_instruction[19:15]; // @[hazard_detection.scala 18:37]
  assign rs2_sel = io_IF_ID_instruction[24:20]; // @[hazard_detection.scala 19:37]
  assign _T_29 = io_ID_EX_registerrd == rs1_sel; // @[hazard_detection.scala 20:64]
  assign _T_30 = io_ID_EX_registerrd == rs2_sel; // @[hazard_detection.scala 20:101]
  assign _T_31 = _T_29 | _T_30; // @[hazard_detection.scala 20:77]
  assign io_instruction_forward = io_ID_EX_memoryread & _T_31; // @[hazard_detection.scala 21:30 hazard_detection.scala 29:28]
  assign io_pc_forward = io_ID_EX_memoryread & _T_31; // @[hazard_detection.scala 22:21 hazard_detection.scala 30:19]
  assign io_control_forward = io_ID_EX_memoryread & _T_31; // @[hazard_detection.scala 23:26 hazard_detection.scala 31:24]
  assign io_instruction_out = io_IF_ID_instruction; // @[hazard_detection.scala 24:26 hazard_detection.scala 32:24]
  assign io_pc_out = io_pc_in; // @[hazard_detection.scala 25:17 hazard_detection.scala 33:15]
  assign io_current_pc_out = io_current_pc; // @[hazard_detection.scala 26:25 hazard_detection.scala 34:23]
endmodule
module branch_logic(
  input  [31:0] io_rs1,
  input  [31:0] io_rs2,
  input  [2:0]  io_func3,
  output        io_output
);
  wire  _T_14; // @[branch_logic.scala 11:17]
  wire  _T_15; // @[branch_logic.scala 13:17]
  wire  _T_19; // @[branch_logic.scala 18:24]
  wire  _T_20; // @[branch_logic.scala 20:17]
  wire  _T_24; // @[branch_logic.scala 25:24]
  wire  _T_25; // @[branch_logic.scala 27:17]
  wire  _T_29; // @[branch_logic.scala 32:24]
  wire  _T_30; // @[branch_logic.scala 34:17]
  wire  _T_34; // @[branch_logic.scala 39:24]
  wire [31:0] _T_35; // @[branch_logic.scala 41:17]
  wire [31:0] _T_36; // @[branch_logic.scala 41:33]
  wire  _T_37; // @[branch_logic.scala 41:24]
  wire  _T_41; // @[branch_logic.scala 46:24]
  wire  _T_44; // @[branch_logic.scala 48:24]
  wire  _GEN_6; // @[branch_logic.scala 46:38]
  wire  _GEN_7; // @[branch_logic.scala 39:38]
  wire  _GEN_8; // @[branch_logic.scala 32:38]
  wire  _GEN_9; // @[branch_logic.scala 25:38]
  wire  _GEN_10; // @[branch_logic.scala 18:38]
  assign _T_14 = io_func3 == 3'h0; // @[branch_logic.scala 11:17]
  assign _T_15 = $signed(io_rs1) == $signed(io_rs2); // @[branch_logic.scala 13:17]
  assign _T_19 = io_func3 == 3'h1; // @[branch_logic.scala 18:24]
  assign _T_20 = $signed(io_rs1) != $signed(io_rs2); // @[branch_logic.scala 20:17]
  assign _T_24 = io_func3 == 3'h4; // @[branch_logic.scala 25:24]
  assign _T_25 = $signed(io_rs1) < $signed(io_rs2); // @[branch_logic.scala 27:17]
  assign _T_29 = io_func3 == 3'h5; // @[branch_logic.scala 32:24]
  assign _T_30 = $signed(io_rs1) >= $signed(io_rs2); // @[branch_logic.scala 34:17]
  assign _T_34 = io_func3 == 3'h6; // @[branch_logic.scala 39:24]
  assign _T_35 = $unsigned(io_rs1); // @[branch_logic.scala 41:17]
  assign _T_36 = $unsigned(io_rs2); // @[branch_logic.scala 41:33]
  assign _T_37 = _T_35 < _T_36; // @[branch_logic.scala 41:24]
  assign _T_41 = io_func3 == 3'h7; // @[branch_logic.scala 46:24]
  assign _T_44 = _T_35 >= _T_36; // @[branch_logic.scala 48:24]
  assign _GEN_6 = _T_41 ? _T_44 : 1'h0; // @[branch_logic.scala 46:38]
  assign _GEN_7 = _T_34 ? _T_37 : _GEN_6; // @[branch_logic.scala 39:38]
  assign _GEN_8 = _T_29 ? _T_30 : _GEN_7; // @[branch_logic.scala 32:38]
  assign _GEN_9 = _T_24 ? _T_25 : _GEN_8; // @[branch_logic.scala 25:38]
  assign _GEN_10 = _T_19 ? _T_20 : _GEN_9; // @[branch_logic.scala 18:38]
  assign io_output = _T_14 ? _T_15 : _GEN_10; // @[branch_logic.scala 14:17 branch_logic.scala 16:17 branch_logic.scala 21:17 branch_logic.scala 23:17 branch_logic.scala 28:17 branch_logic.scala 30:17 branch_logic.scala 35:17 branch_logic.scala 37:17 branch_logic.scala 42:17 branch_logic.scala 44:17 branch_logic.scala 49:17 branch_logic.scala 51:17 branch_logic.scala 54:15]
endmodule
module branch_forward(
  input  [4:0] io_ID_EX_registerrd,
  input        io_ID_EX_memoryread,
  input  [4:0] io_EX_MEM_registerrd,
  input        io_EX_MEM_memoryread,
  input  [4:0] io_MEM_WB_registerrd,
  input        io_MEM_WB_memoryread,
  input  [4:0] io_rs1_select,
  input  [4:0] io_rs2_select,
  input        io_control_branch,
  output [3:0] io_forward_rs1,
  output [3:0] io_forward_rs2
);
  wire  _T_32; // @[branch_forward.scala 26:32]
  wire  _T_34; // @[branch_forward.scala 26:70]
  wire  _T_35; // @[branch_forward.scala 26:47]
  wire  _T_36; // @[branch_forward.scala 26:102]
  wire  _T_37; // @[branch_forward.scala 26:78]
  wire  _T_38; // @[branch_forward.scala 26:145]
  wire  _T_39; // @[branch_forward.scala 26:121]
  wire  _T_56; // @[branch_forward.scala 31:85]
  wire  _GEN_2; // @[branch_forward.scala 29:129]
  wire  _GEN_3; // @[branch_forward.scala 26:165]
  wire  _GEN_4; // @[branch_forward.scala 26:165]
  wire  _T_59; // @[branch_forward.scala 36:33]
  wire  _T_61; // @[branch_forward.scala 36:72]
  wire  _T_62; // @[branch_forward.scala 36:48]
  wire  _T_66; // @[branch_forward.scala 37:48]
  wire  _T_68; // @[branch_forward.scala 37:91]
  wire  _T_69; // @[branch_forward.scala 37:9]
  wire  _T_70; // @[branch_forward.scala 36:80]
  wire  _T_71; // @[branch_forward.scala 38:31]
  wire  _T_72; // @[branch_forward.scala 37:135]
  wire  _T_73; // @[branch_forward.scala 38:75]
  wire  _T_74; // @[branch_forward.scala 38:50]
  wire  _T_85; // @[branch_forward.scala 44:48]
  wire  _T_86; // @[branch_forward.scala 44:9]
  wire  _T_87; // @[branch_forward.scala 43:87]
  wire  _T_89; // @[branch_forward.scala 44:92]
  wire  _T_100; // @[branch_forward.scala 50:9]
  wire  _T_101; // @[branch_forward.scala 49:87]
  wire  _T_103; // @[branch_forward.scala 50:92]
  wire  _T_109; // @[branch_forward.scala 56:55]
  wire  _T_117; // @[branch_forward.scala 56:87]
  wire  _T_119; // @[branch_forward.scala 57:135]
  wire  _T_121; // @[branch_forward.scala 58:50]
  wire  _T_134; // @[branch_forward.scala 62:87]
  wire  _T_136; // @[branch_forward.scala 63:92]
  wire  _T_142; // @[branch_forward.scala 68:45]
  wire  _T_145; // @[branch_forward.scala 68:84]
  wire  _T_151; // @[branch_forward.scala 68:116]
  wire  _T_153; // @[branch_forward.scala 69:92]
  wire [2:0] _GEN_5; // @[branch_forward.scala 70:51]
  wire [2:0] _GEN_6; // @[branch_forward.scala 64:51]
  wire [2:0] _GEN_7; // @[branch_forward.scala 64:51]
  wire [2:0] _GEN_8; // @[branch_forward.scala 58:95]
  wire [2:0] _GEN_9; // @[branch_forward.scala 58:95]
  wire [2:0] _GEN_10; // @[branch_forward.scala 51:51]
  wire [2:0] _GEN_11; // @[branch_forward.scala 51:51]
  wire [2:0] _GEN_12; // @[branch_forward.scala 45:51]
  wire [2:0] _GEN_13; // @[branch_forward.scala 45:51]
  wire [2:0] _GEN_14; // @[branch_forward.scala 38:95]
  wire [2:0] _GEN_15; // @[branch_forward.scala 38:95]
  wire  _T_156; // @[branch_forward.scala 77:33]
  wire  _T_158; // @[branch_forward.scala 77:72]
  wire  _T_159; // @[branch_forward.scala 77:48]
  wire  _T_167; // @[branch_forward.scala 77:80]
  wire  _T_171; // @[branch_forward.scala 81:49]
  wire  _T_173; // @[branch_forward.scala 81:93]
  wire  _T_174; // @[branch_forward.scala 81:9]
  wire  _T_175; // @[branch_forward.scala 79:135]
  wire  _T_176; // @[branch_forward.scala 82:31]
  wire  _T_177; // @[branch_forward.scala 81:138]
  wire  _T_178; // @[branch_forward.scala 82:75]
  wire  _T_179; // @[branch_forward.scala 82:50]
  wire  _T_192; // @[branch_forward.scala 88:87]
  wire  _T_196; // @[branch_forward.scala 92:51]
  wire  _T_197; // @[branch_forward.scala 92:11]
  wire  _T_198; // @[branch_forward.scala 90:94]
  wire  _T_200; // @[branch_forward.scala 92:96]
  wire  _T_212; // @[branch_forward.scala 98:87]
  wire  _T_217; // @[branch_forward.scala 102:11]
  wire  _T_218; // @[branch_forward.scala 100:94]
  wire  _T_220; // @[branch_forward.scala 102:96]
  wire  _T_226; // @[branch_forward.scala 107:57]
  wire  _T_234; // @[branch_forward.scala 107:89]
  wire  _T_242; // @[branch_forward.scala 109:135]
  wire  _T_244; // @[branch_forward.scala 111:138]
  wire  _T_246; // @[branch_forward.scala 112:50]
  wire  _T_259; // @[branch_forward.scala 118:87]
  wire  _T_265; // @[branch_forward.scala 120:94]
  wire  _T_267; // @[branch_forward.scala 122:96]
  wire  _T_279; // @[branch_forward.scala 128:87]
  wire  _T_285; // @[branch_forward.scala 130:94]
  wire  _T_287; // @[branch_forward.scala 132:95]
  wire [2:0] _GEN_16; // @[branch_forward.scala 133:53]
  wire [2:0] _GEN_17; // @[branch_forward.scala 123:53]
  wire [2:0] _GEN_18; // @[branch_forward.scala 123:53]
  wire [2:0] _GEN_19; // @[branch_forward.scala 112:95]
  wire [2:0] _GEN_20; // @[branch_forward.scala 112:95]
  wire [2:0] _GEN_21; // @[branch_forward.scala 103:53]
  wire [2:0] _GEN_22; // @[branch_forward.scala 103:53]
  wire [2:0] _GEN_23; // @[branch_forward.scala 93:53]
  wire [2:0] _GEN_24; // @[branch_forward.scala 93:53]
  wire [2:0] _GEN_25; // @[branch_forward.scala 82:95]
  wire [2:0] _GEN_26; // @[branch_forward.scala 82:95]
  wire  _T_290; // @[branch_forward.scala 143:35]
  wire [2:0] _GEN_27; // @[branch_forward.scala 145:131]
  wire  _T_323; // @[branch_forward.scala 156:96]
  wire  _T_325; // @[branch_forward.scala 157:104]
  wire [3:0] _GEN_28; // @[branch_forward.scala 158:63]
  wire [3:0] _GEN_29; // @[branch_forward.scala 152:61]
  wire  _T_350; // @[branch_forward.scala 172:88]
  wire  _T_351; // @[branch_forward.scala 172:64]
  wire  _T_357; // @[branch_forward.scala 172:96]
  wire  _T_363; // @[branch_forward.scala 174:102]
  wire  _T_365; // @[branch_forward.scala 176:104]
  wire [3:0] _GEN_30; // @[branch_forward.scala 177:61]
  wire [3:0] _GEN_31; // @[branch_forward.scala 168:61]
  wire [3:0] _GEN_32; // @[branch_forward.scala 143:44]
  wire [2:0] _GEN_34; // @[branch_forward.scala 24:37]
  assign _T_32 = io_ID_EX_registerrd != 5'h0; // @[branch_forward.scala 26:32]
  assign _T_34 = io_ID_EX_memoryread != 1'h1; // @[branch_forward.scala 26:70]
  assign _T_35 = _T_32 & _T_34; // @[branch_forward.scala 26:47]
  assign _T_36 = io_ID_EX_registerrd == io_rs1_select; // @[branch_forward.scala 26:102]
  assign _T_37 = _T_35 & _T_36; // @[branch_forward.scala 26:78]
  assign _T_38 = io_ID_EX_registerrd == io_rs2_select; // @[branch_forward.scala 26:145]
  assign _T_39 = _T_37 & _T_38; // @[branch_forward.scala 26:121]
  assign _T_56 = _T_35 & _T_38; // @[branch_forward.scala 31:85]
  assign _GEN_2 = _T_37 ? 1'h0 : _T_56; // @[branch_forward.scala 29:129]
  assign _GEN_3 = _T_39 ? 1'h1 : _T_37; // @[branch_forward.scala 26:165]
  assign _GEN_4 = _T_39 ? 1'h1 : _GEN_2; // @[branch_forward.scala 26:165]
  assign _T_59 = io_EX_MEM_registerrd != 5'h0; // @[branch_forward.scala 36:33]
  assign _T_61 = io_EX_MEM_memoryread != 1'h1; // @[branch_forward.scala 36:72]
  assign _T_62 = _T_59 & _T_61; // @[branch_forward.scala 36:48]
  assign _T_66 = _T_32 & _T_36; // @[branch_forward.scala 37:48]
  assign _T_68 = _T_66 & _T_38; // @[branch_forward.scala 37:91]
  assign _T_69 = ~ _T_68; // @[branch_forward.scala 37:9]
  assign _T_70 = _T_62 & _T_69; // @[branch_forward.scala 36:80]
  assign _T_71 = io_EX_MEM_registerrd == io_rs1_select; // @[branch_forward.scala 38:31]
  assign _T_72 = _T_70 & _T_71; // @[branch_forward.scala 37:135]
  assign _T_73 = io_EX_MEM_registerrd == io_rs2_select; // @[branch_forward.scala 38:75]
  assign _T_74 = _T_72 & _T_73; // @[branch_forward.scala 38:50]
  assign _T_85 = _T_32 & _T_38; // @[branch_forward.scala 44:48]
  assign _T_86 = ~ _T_85; // @[branch_forward.scala 44:9]
  assign _T_87 = _T_62 & _T_86; // @[branch_forward.scala 43:87]
  assign _T_89 = _T_87 & _T_73; // @[branch_forward.scala 44:92]
  assign _T_100 = ~ _T_66; // @[branch_forward.scala 50:9]
  assign _T_101 = _T_62 & _T_100; // @[branch_forward.scala 49:87]
  assign _T_103 = _T_101 & _T_71; // @[branch_forward.scala 50:92]
  assign _T_109 = _T_59 & io_EX_MEM_memoryread; // @[branch_forward.scala 56:55]
  assign _T_117 = _T_109 & _T_69; // @[branch_forward.scala 56:87]
  assign _T_119 = _T_117 & _T_71; // @[branch_forward.scala 57:135]
  assign _T_121 = _T_119 & _T_73; // @[branch_forward.scala 58:50]
  assign _T_134 = _T_109 & _T_86; // @[branch_forward.scala 62:87]
  assign _T_136 = _T_134 & _T_73; // @[branch_forward.scala 63:92]
  assign _T_142 = io_control_branch & _T_59; // @[branch_forward.scala 68:45]
  assign _T_145 = _T_142 & io_EX_MEM_memoryread; // @[branch_forward.scala 68:84]
  assign _T_151 = _T_145 & _T_100; // @[branch_forward.scala 68:116]
  assign _T_153 = _T_151 & _T_71; // @[branch_forward.scala 69:92]
  assign _GEN_5 = _T_153 ? 3'h4 : {{2'd0}, _GEN_3}; // @[branch_forward.scala 70:51]
  assign _GEN_6 = _T_136 ? 3'h4 : {{2'd0}, _GEN_4}; // @[branch_forward.scala 64:51]
  assign _GEN_7 = _T_136 ? {{2'd0}, _GEN_3} : _GEN_5; // @[branch_forward.scala 64:51]
  assign _GEN_8 = _T_121 ? 3'h4 : _GEN_7; // @[branch_forward.scala 58:95]
  assign _GEN_9 = _T_121 ? 3'h4 : _GEN_6; // @[branch_forward.scala 58:95]
  assign _GEN_10 = _T_103 ? 3'h2 : _GEN_8; // @[branch_forward.scala 51:51]
  assign _GEN_11 = _T_103 ? {{2'd0}, _GEN_4} : _GEN_9; // @[branch_forward.scala 51:51]
  assign _GEN_12 = _T_89 ? 3'h2 : _GEN_11; // @[branch_forward.scala 45:51]
  assign _GEN_13 = _T_89 ? {{2'd0}, _GEN_3} : _GEN_10; // @[branch_forward.scala 45:51]
  assign _GEN_14 = _T_74 ? 3'h2 : _GEN_13; // @[branch_forward.scala 38:95]
  assign _GEN_15 = _T_74 ? 3'h2 : _GEN_12; // @[branch_forward.scala 38:95]
  assign _T_156 = io_MEM_WB_registerrd != 5'h0; // @[branch_forward.scala 77:33]
  assign _T_158 = io_MEM_WB_memoryread != 1'h1; // @[branch_forward.scala 77:72]
  assign _T_159 = _T_156 & _T_158; // @[branch_forward.scala 77:48]
  assign _T_167 = _T_159 & _T_69; // @[branch_forward.scala 77:80]
  assign _T_171 = _T_59 & _T_71; // @[branch_forward.scala 81:49]
  assign _T_173 = _T_171 & _T_73; // @[branch_forward.scala 81:93]
  assign _T_174 = ~ _T_173; // @[branch_forward.scala 81:9]
  assign _T_175 = _T_167 & _T_174; // @[branch_forward.scala 79:135]
  assign _T_176 = io_MEM_WB_registerrd == io_rs1_select; // @[branch_forward.scala 82:31]
  assign _T_177 = _T_175 & _T_176; // @[branch_forward.scala 81:138]
  assign _T_178 = io_MEM_WB_registerrd == io_rs2_select; // @[branch_forward.scala 82:75]
  assign _T_179 = _T_177 & _T_178; // @[branch_forward.scala 82:50]
  assign _T_192 = _T_159 & _T_86; // @[branch_forward.scala 88:87]
  assign _T_196 = _T_59 & _T_73; // @[branch_forward.scala 92:51]
  assign _T_197 = ~ _T_196; // @[branch_forward.scala 92:11]
  assign _T_198 = _T_192 & _T_197; // @[branch_forward.scala 90:94]
  assign _T_200 = _T_198 & _T_178; // @[branch_forward.scala 92:96]
  assign _T_212 = _T_159 & _T_100; // @[branch_forward.scala 98:87]
  assign _T_217 = ~ _T_171; // @[branch_forward.scala 102:11]
  assign _T_218 = _T_212 & _T_217; // @[branch_forward.scala 100:94]
  assign _T_220 = _T_218 & _T_176; // @[branch_forward.scala 102:96]
  assign _T_226 = _T_156 & io_MEM_WB_memoryread; // @[branch_forward.scala 107:57]
  assign _T_234 = _T_226 & _T_69; // @[branch_forward.scala 107:89]
  assign _T_242 = _T_234 & _T_174; // @[branch_forward.scala 109:135]
  assign _T_244 = _T_242 & _T_176; // @[branch_forward.scala 111:138]
  assign _T_246 = _T_244 & _T_178; // @[branch_forward.scala 112:50]
  assign _T_259 = _T_226 & _T_86; // @[branch_forward.scala 118:87]
  assign _T_265 = _T_259 & _T_197; // @[branch_forward.scala 120:94]
  assign _T_267 = _T_265 & _T_178; // @[branch_forward.scala 122:96]
  assign _T_279 = _T_226 & _T_100; // @[branch_forward.scala 128:87]
  assign _T_285 = _T_279 & _T_217; // @[branch_forward.scala 130:94]
  assign _T_287 = _T_285 & _T_176; // @[branch_forward.scala 132:95]
  assign _GEN_16 = _T_287 ? 3'h5 : _GEN_14; // @[branch_forward.scala 133:53]
  assign _GEN_17 = _T_267 ? 3'h5 : _GEN_15; // @[branch_forward.scala 123:53]
  assign _GEN_18 = _T_267 ? _GEN_14 : _GEN_16; // @[branch_forward.scala 123:53]
  assign _GEN_19 = _T_246 ? 3'h5 : _GEN_18; // @[branch_forward.scala 112:95]
  assign _GEN_20 = _T_246 ? 3'h5 : _GEN_17; // @[branch_forward.scala 112:95]
  assign _GEN_21 = _T_220 ? 3'h3 : _GEN_19; // @[branch_forward.scala 103:53]
  assign _GEN_22 = _T_220 ? _GEN_15 : _GEN_20; // @[branch_forward.scala 103:53]
  assign _GEN_23 = _T_200 ? 3'h3 : _GEN_22; // @[branch_forward.scala 93:53]
  assign _GEN_24 = _T_200 ? _GEN_14 : _GEN_21; // @[branch_forward.scala 93:53]
  assign _GEN_25 = _T_179 ? 3'h3 : _GEN_24; // @[branch_forward.scala 82:95]
  assign _GEN_26 = _T_179 ? 3'h3 : _GEN_23; // @[branch_forward.scala 82:95]
  assign _T_290 = io_control_branch == 1'h0; // @[branch_forward.scala 143:35]
  assign _GEN_27 = _T_37 ? 3'h6 : 3'h0; // @[branch_forward.scala 145:131]
  assign _T_323 = _T_109 & _T_100; // @[branch_forward.scala 156:96]
  assign _T_325 = _T_323 & _T_71; // @[branch_forward.scala 157:104]
  assign _GEN_28 = _T_325 ? 4'h9 : {{1'd0}, _GEN_27}; // @[branch_forward.scala 158:63]
  assign _GEN_29 = _T_103 ? 4'h7 : _GEN_28; // @[branch_forward.scala 152:61]
  assign _T_350 = io_MEM_WB_registerrd == 5'h1; // @[branch_forward.scala 172:88]
  assign _T_351 = _T_156 & _T_350; // @[branch_forward.scala 172:64]
  assign _T_357 = _T_351 & _T_100; // @[branch_forward.scala 172:96]
  assign _T_363 = _T_357 & _T_217; // @[branch_forward.scala 174:102]
  assign _T_365 = _T_363 & _T_176; // @[branch_forward.scala 176:104]
  assign _GEN_30 = _T_365 ? 4'ha : _GEN_29; // @[branch_forward.scala 177:61]
  assign _GEN_31 = _T_220 ? 4'h8 : _GEN_30; // @[branch_forward.scala 168:61]
  assign _GEN_32 = _T_290 ? _GEN_31 : 4'h0; // @[branch_forward.scala 143:44]
  assign _GEN_34 = io_control_branch ? _GEN_26 : 3'h0; // @[branch_forward.scala 24:37]
  assign io_forward_rs1 = io_control_branch ? {{1'd0}, _GEN_25} : _GEN_32; // @[branch_forward.scala 18:20 branch_forward.scala 27:24 branch_forward.scala 30:24 branch_forward.scala 40:24 branch_forward.scala 53:24 branch_forward.scala 59:24 branch_forward.scala 72:24 branch_forward.scala 84:24 branch_forward.scala 105:26 branch_forward.scala 114:24 branch_forward.scala 135:26 branch_forward.scala 146:34 branch_forward.scala 153:34 branch_forward.scala 159:36 branch_forward.scala 169:34 branch_forward.scala 178:34]
  assign io_forward_rs2 = {{1'd0}, _GEN_34}; // @[branch_forward.scala 19:20 branch_forward.scala 28:24 branch_forward.scala 32:24 branch_forward.scala 41:24 branch_forward.scala 47:24 branch_forward.scala 60:24 branch_forward.scala 66:24 branch_forward.scala 85:24 branch_forward.scala 95:26 branch_forward.scala 115:24 branch_forward.scala 125:26]
endmodule
module top(
  input         clock,
  input         reset,
  output [31:0] io_reg_out
);
  wire [6:0] control_io_opcode; // @[top.scala 10:25]
  wire  control_io_memory_write; // @[top.scala 10:25]
  wire  control_io_branch; // @[top.scala 10:25]
  wire  control_io_memory_read; // @[top.scala 10:25]
  wire  control_io_register_write; // @[top.scala 10:25]
  wire  control_io_memory_to_register; // @[top.scala 10:25]
  wire [2:0] control_io_alu_op; // @[top.scala 10:25]
  wire [1:0] control_io_operand_a_select; // @[top.scala 10:25]
  wire  control_io_operand_b_select; // @[top.scala 10:25]
  wire [1:0] control_io_extend_select; // @[top.scala 10:25]
  wire [1:0] control_io_next_pc_select; // @[top.scala 10:25]
  wire  register_file_clock; // @[top.scala 11:31]
  wire  register_file_reset; // @[top.scala 11:31]
  wire  register_file_io_register_write; // @[top.scala 11:31]
  wire [4:0] register_file_io_rd_select; // @[top.scala 11:31]
  wire [4:0] register_file_io_rs1_select; // @[top.scala 11:31]
  wire [4:0] register_file_io_rs2_select; // @[top.scala 11:31]
  wire [31:0] register_file_io_write_data; // @[top.scala 11:31]
  wire [31:0] register_file_io_rs1; // @[top.scala 11:31]
  wire [31:0] register_file_io_rs2; // @[top.scala 11:31]
  wire [31:0] alu_io_operand_a; // @[top.scala 12:21]
  wire [31:0] alu_io_operand_b; // @[top.scala 12:21]
  wire [4:0] alu_io_alu_control; // @[top.scala 12:21]
  wire [31:0] alu_io_output; // @[top.scala 12:21]
  wire [2:0] alu_control_io_alu_op; // @[top.scala 13:29]
  wire  alu_control_io_func7; // @[top.scala 13:29]
  wire [2:0] alu_control_io_func3; // @[top.scala 13:29]
  wire [4:0] alu_control_io_output; // @[top.scala 13:29]
  wire [31:0] immediate_generation_io_instruction; // @[top.scala 14:38]
  wire [31:0] immediate_generation_io_pc; // @[top.scala 14:38]
  wire [31:0] immediate_generation_io_s_immediate; // @[top.scala 14:38]
  wire [31:0] immediate_generation_io_sb_immediate; // @[top.scala 14:38]
  wire [31:0] immediate_generation_io_u_immediate; // @[top.scala 14:38]
  wire [31:0] immediate_generation_io_uj_immediate; // @[top.scala 14:38]
  wire [31:0] immediate_generation_io_i_immediate; // @[top.scala 14:38]
  wire [31:0] jalr_io_input_a; // @[top.scala 15:22]
  wire [31:0] jalr_io_input_b; // @[top.scala 15:22]
  wire [31:0] jalr_io_output; // @[top.scala 15:22]
  wire  pc_clock; // @[top.scala 16:20]
  wire  pc_reset; // @[top.scala 16:20]
  wire [31:0] pc_io_in; // @[top.scala 16:20]
  wire [31:0] pc_io_out; // @[top.scala 16:20]
  wire [31:0] pc_io_pc4; // @[top.scala 16:20]
  wire  instruction_memory_clock; // @[top.scala 17:36]
  wire [9:0] instruction_memory_io_write_address; // @[top.scala 17:36]
  wire [31:0] instruction_memory_io_read_data; // @[top.scala 17:36]
  wire  data_memory_clock; // @[top.scala 18:29]
  wire  data_memory_io_memory_write; // @[top.scala 18:29]
  wire  data_memory_io_memory_read; // @[top.scala 18:29]
  wire [9:0] data_memory_io_memory_address; // @[top.scala 18:29]
  wire [31:0] data_memory_io_memory_data; // @[top.scala 18:29]
  wire [31:0] data_memory_io_memory_out; // @[top.scala 18:29]
  wire  IF_ID_clock; // @[top.scala 19:23]
  wire  IF_ID_reset; // @[top.scala 19:23]
  wire [31:0] IF_ID_io_pc_in; // @[top.scala 19:23]
  wire [31:0] IF_ID_io_pc4_in; // @[top.scala 19:23]
  wire [31:0] IF_ID_io_instruction_in; // @[top.scala 19:23]
  wire [31:0] IF_ID_io_pc_out; // @[top.scala 19:23]
  wire [31:0] IF_ID_io_pc4_out; // @[top.scala 19:23]
  wire [31:0] IF_ID_io_instruction_out; // @[top.scala 19:23]
  wire  ID_EX_clock; // @[top.scala 20:23]
  wire  ID_EX_reset; // @[top.scala 20:23]
  wire [31:0] ID_EX_io_pc4_in; // @[top.scala 20:23]
  wire [4:0] ID_EX_io_rs1_select_in; // @[top.scala 20:23]
  wire [4:0] ID_EX_io_rs2_select_in; // @[top.scala 20:23]
  wire [31:0] ID_EX_io_rs1_in; // @[top.scala 20:23]
  wire [31:0] ID_EX_io_rs2_in; // @[top.scala 20:23]
  wire [31:0] ID_EX_io_immediate_in; // @[top.scala 20:23]
  wire [4:0] ID_EX_io_rd_select_in; // @[top.scala 20:23]
  wire [2:0] ID_EX_io_func3_in; // @[top.scala 20:23]
  wire  ID_EX_io_func7_in; // @[top.scala 20:23]
  wire  ID_EX_io_control_memorywrite_in; // @[top.scala 20:23]
  wire  ID_EX_io_control_memoryread_in; // @[top.scala 20:23]
  wire  ID_EX_io_control_registerwrite_in; // @[top.scala 20:23]
  wire  ID_EX_io_control_memorytoregister_in; // @[top.scala 20:23]
  wire [2:0] ID_EX_io_control_aluop_in; // @[top.scala 20:23]
  wire [1:0] ID_EX_io_control_opa_select_in; // @[top.scala 20:23]
  wire  ID_EX_io_control_opb_select_in; // @[top.scala 20:23]
  wire [31:0] ID_EX_io_pc4_out; // @[top.scala 20:23]
  wire [31:0] ID_EX_io_rs1_out; // @[top.scala 20:23]
  wire [31:0] ID_EX_io_rs2_out; // @[top.scala 20:23]
  wire [31:0] ID_EX_io_immediate_out; // @[top.scala 20:23]
  wire [2:0] ID_EX_io_func3_out; // @[top.scala 20:23]
  wire  ID_EX_io_func7_out; // @[top.scala 20:23]
  wire [4:0] ID_EX_io_rd_select_out; // @[top.scala 20:23]
  wire [4:0] ID_EX_io_rs1_select_out; // @[top.scala 20:23]
  wire [4:0] ID_EX_io_rs2_select_out; // @[top.scala 20:23]
  wire  ID_EX_io_control_memorywrite_out; // @[top.scala 20:23]
  wire  ID_EX_io_control_memoryread_out; // @[top.scala 20:23]
  wire  ID_EX_io_control_registerwrite_out; // @[top.scala 20:23]
  wire  ID_EX_io_control_memorytoregister_out; // @[top.scala 20:23]
  wire [2:0] ID_EX_io_control_aluop_out; // @[top.scala 20:23]
  wire [1:0] ID_EX_io_control_opa_select_out; // @[top.scala 20:23]
  wire  ID_EX_io_control_opb_select_out; // @[top.scala 20:23]
  wire  EX_MEM_clock; // @[top.scala 21:24]
  wire  EX_MEM_reset; // @[top.scala 21:24]
  wire  EX_MEM_io_memorywrite; // @[top.scala 21:24]
  wire  EX_MEM_io_memoryread; // @[top.scala 21:24]
  wire  EX_MEM_io_registerwrite; // @[top.scala 21:24]
  wire  EX_MEM_io_memorytoregister; // @[top.scala 21:24]
  wire [31:0] EX_MEM_io_rs2_in; // @[top.scala 21:24]
  wire [4:0] EX_MEM_io_rd_select; // @[top.scala 21:24]
  wire [31:0] EX_MEM_io_alu_out_in; // @[top.scala 21:24]
  wire  EX_MEM_io_memorywrite_out; // @[top.scala 21:24]
  wire  EX_MEM_io_memoryread_out; // @[top.scala 21:24]
  wire  EX_MEM_io_registerwrite_out; // @[top.scala 21:24]
  wire  EX_MEM_io_memorytoregister_out; // @[top.scala 21:24]
  wire [31:0] EX_MEM_io_rs2_out; // @[top.scala 21:24]
  wire [4:0] EX_MEM_io_rd_select_out; // @[top.scala 21:24]
  wire [31:0] EX_MEM_io_alu_out; // @[top.scala 21:24]
  wire  MEM_WB_clock; // @[top.scala 22:24]
  wire  MEM_WB_reset; // @[top.scala 22:24]
  wire  MEM_WB_io_registerwrite; // @[top.scala 22:24]
  wire  MEM_WB_io_memorytoregister; // @[top.scala 22:24]
  wire [4:0] MEM_WB_io_rd_select; // @[top.scala 22:24]
  wire  MEM_WB_io_memoryread; // @[top.scala 22:24]
  wire [31:0] MEM_WB_io_datamemory_data_in; // @[top.scala 22:24]
  wire [31:0] MEM_WB_io_alu_out_in; // @[top.scala 22:24]
  wire  MEM_WB_io_registerwrite_out; // @[top.scala 22:24]
  wire  MEM_WB_io_memorytoregister_out; // @[top.scala 22:24]
  wire  MEM_WB_io_memoryread_out; // @[top.scala 22:24]
  wire [4:0] MEM_WB_io_rd_select_out; // @[top.scala 22:24]
  wire [31:0] MEM_WB_io_datamemory_data_out; // @[top.scala 22:24]
  wire [31:0] MEM_WB_io_alu_out; // @[top.scala 22:24]
  wire [4:0] forward_unit_io_EX_MEM_registerrd; // @[top.scala 23:30]
  wire [4:0] forward_unit_io_MEM_WB_registerrd; // @[top.scala 23:30]
  wire [4:0] forward_unit_io_ID_EX_registerrs1; // @[top.scala 23:30]
  wire [4:0] forward_unit_io_ID_EX_registerrs2; // @[top.scala 23:30]
  wire  forward_unit_io_EX_MEM_registerwrite; // @[top.scala 23:30]
  wire  forward_unit_io_MEM_WB_registerwrite; // @[top.scala 23:30]
  wire [1:0] forward_unit_io_forward_a; // @[top.scala 23:30]
  wire [1:0] forward_unit_io_forward_b; // @[top.scala 23:30]
  wire [31:0] hazard_detection_io_pc_in; // @[top.scala 24:34]
  wire [31:0] hazard_detection_io_current_pc; // @[top.scala 24:34]
  wire  hazard_detection_io_ID_EX_memoryread; // @[top.scala 24:34]
  wire [31:0] hazard_detection_io_IF_ID_instruction; // @[top.scala 24:34]
  wire [4:0] hazard_detection_io_ID_EX_registerrd; // @[top.scala 24:34]
  wire  hazard_detection_io_instruction_forward; // @[top.scala 24:34]
  wire  hazard_detection_io_pc_forward; // @[top.scala 24:34]
  wire  hazard_detection_io_control_forward; // @[top.scala 24:34]
  wire [31:0] hazard_detection_io_instruction_out; // @[top.scala 24:34]
  wire [31:0] hazard_detection_io_pc_out; // @[top.scala 24:34]
  wire [31:0] hazard_detection_io_current_pc_out; // @[top.scala 24:34]
  wire [31:0] branch_logic_io_rs1; // @[top.scala 25:30]
  wire [31:0] branch_logic_io_rs2; // @[top.scala 25:30]
  wire [2:0] branch_logic_io_func3; // @[top.scala 25:30]
  wire  branch_logic_io_output; // @[top.scala 25:30]
  wire [4:0] branch_forward_io_ID_EX_registerrd; // @[top.scala 26:32]
  wire  branch_forward_io_ID_EX_memoryread; // @[top.scala 26:32]
  wire [4:0] branch_forward_io_EX_MEM_registerrd; // @[top.scala 26:32]
  wire  branch_forward_io_EX_MEM_memoryread; // @[top.scala 26:32]
  wire [4:0] branch_forward_io_MEM_WB_registerrd; // @[top.scala 26:32]
  wire  branch_forward_io_MEM_WB_memoryread; // @[top.scala 26:32]
  wire [4:0] branch_forward_io_rs1_select; // @[top.scala 26:32]
  wire [4:0] branch_forward_io_rs2_select; // @[top.scala 26:32]
  wire  branch_forward_io_control_branch; // @[top.scala 26:32]
  wire [3:0] branch_forward_io_forward_rs1; // @[top.scala 26:32]
  wire [3:0] branch_forward_io_forward_rs2; // @[top.scala 26:32]
  wire  _T_9; // @[top.scala 42:50]
  wire [31:0] _GEN_0; // @[top.scala 42:62]
  wire [31:0] _GEN_1; // @[top.scala 42:62]
  wire  _T_11; // @[top.scala 51:41]
  wire  _T_13; // @[top.scala 55:40]
  wire  _T_15; // @[top.scala 56:39]
  wire  _T_17; // @[top.scala 56:68]
  wire  _T_18; // @[top.scala 56:47]
  wire [31:0] _GEN_2; // @[top.scala 56:77]
  wire [31:0] _GEN_3; // @[top.scala 56:77]
  wire [31:0] _GEN_4; // @[top.scala 56:77]
  wire [31:0] _GEN_5; // @[top.scala 56:77]
  wire  _T_23; // @[top.scala 65:47]
  wire  _T_28; // @[top.scala 70:47]
  wire [31:0] _GEN_6; // @[top.scala 70:60]
  wire [31:0] _GEN_7; // @[top.scala 70:60]
  wire [31:0] _GEN_8; // @[top.scala 70:60]
  wire [31:0] _GEN_9; // @[top.scala 70:60]
  wire [31:0] _GEN_10; // @[top.scala 65:60]
  wire [31:0] _GEN_11; // @[top.scala 65:60]
  wire [31:0] _GEN_12; // @[top.scala 65:60]
  wire [31:0] _GEN_13; // @[top.scala 65:60]
  wire [31:0] _GEN_14; // @[top.scala 55:53]
  wire [31:0] _GEN_15; // @[top.scala 55:53]
  wire [31:0] _GEN_16; // @[top.scala 55:53]
  wire [31:0] _GEN_17; // @[top.scala 55:53]
  wire  _T_38; // @[top.scala 96:32]
  wire  _T_40; // @[top.scala 98:39]
  wire  _T_42; // @[top.scala 100:39]
  wire [31:0] _GEN_22; // @[top.scala 100:52]
  wire [31:0] _GEN_23; // @[top.scala 98:52]
  wire  _T_51; // @[top.scala 127:40]
  wire  _T_53; // @[top.scala 130:47]
  wire  _T_55; // @[top.scala 133:47]
  wire  _T_57; // @[top.scala 136:47]
  wire  _T_59; // @[top.scala 139:47]
  wire  _T_61; // @[top.scala 142:47]
  wire  _T_63; // @[top.scala 148:44]
  wire  _T_65; // @[top.scala 151:47]
  wire  _T_67; // @[top.scala 154:47]
  wire  _T_69; // @[top.scala 157:47]
  wire  _T_71; // @[top.scala 160:47]
  wire [31:0] _GEN_25; // @[top.scala 160:62]
  wire [31:0] _GEN_26; // @[top.scala 160:62]
  wire [31:0] _GEN_27; // @[top.scala 157:62]
  wire [31:0] _GEN_28; // @[top.scala 157:62]
  wire [31:0] _GEN_29; // @[top.scala 154:62]
  wire [31:0] _GEN_30; // @[top.scala 154:62]
  wire [31:0] _GEN_31; // @[top.scala 151:62]
  wire [31:0] _GEN_32; // @[top.scala 151:62]
  wire [31:0] _GEN_33; // @[top.scala 148:59]
  wire [31:0] _GEN_34; // @[top.scala 148:59]
  wire [31:0] _GEN_35; // @[top.scala 142:62]
  wire [31:0] _GEN_36; // @[top.scala 142:62]
  wire [31:0] _GEN_37; // @[top.scala 139:62]
  wire [31:0] _GEN_38; // @[top.scala 139:62]
  wire [31:0] _GEN_39; // @[top.scala 136:62]
  wire [31:0] _GEN_40; // @[top.scala 136:62]
  wire [31:0] _GEN_41; // @[top.scala 133:62]
  wire [31:0] _GEN_42; // @[top.scala 133:62]
  wire [31:0] _GEN_43; // @[top.scala 130:62]
  wire [31:0] _GEN_44; // @[top.scala 130:62]
  wire  _T_73; // @[top.scala 168:40]
  wire  _T_75; // @[top.scala 170:47]
  wire  _T_77; // @[top.scala 172:47]
  wire  _T_79; // @[top.scala 174:47]
  wire  _T_81; // @[top.scala 176:47]
  wire  _T_83; // @[top.scala 178:47]
  wire [31:0] _GEN_47; // @[top.scala 178:62]
  wire [31:0] _GEN_48; // @[top.scala 176:62]
  wire [31:0] _GEN_49; // @[top.scala 174:62]
  wire [31:0] _GEN_50; // @[top.scala 172:62]
  wire [31:0] _GEN_51; // @[top.scala 170:62]
  wire  _T_85; // @[top.scala 187:46]
  wire  _T_96; // @[top.scala 219:43]
  wire  _T_98; // @[top.scala 222:40]
  wire  _T_100; // @[top.scala 224:47]
  wire  _T_102; // @[top.scala 226:47]
  wire [31:0] _GEN_62; // @[top.scala 226:60]
  wire [31:0] _GEN_63; // @[top.scala 224:60]
  wire [31:0] _GEN_64; // @[top.scala 222:53]
  wire  _T_104; // @[top.scala 233:42]
  wire  _T_106; // @[top.scala 235:38]
  wire  _T_108; // @[top.scala 237:45]
  wire  _T_110; // @[top.scala 239:45]
  wire [31:0] _GEN_66; // @[top.scala 239:58]
  wire [31:0] _GEN_67; // @[top.scala 237:58]
  wire [31:0] _GEN_68; // @[top.scala 235:51]
  wire  _T_119; // @[top.scala 295:41]
  control control ( // @[top.scala 10:25]
    .io_opcode(control_io_opcode),
    .io_memory_write(control_io_memory_write),
    .io_branch(control_io_branch),
    .io_memory_read(control_io_memory_read),
    .io_register_write(control_io_register_write),
    .io_memory_to_register(control_io_memory_to_register),
    .io_alu_op(control_io_alu_op),
    .io_operand_a_select(control_io_operand_a_select),
    .io_operand_b_select(control_io_operand_b_select),
    .io_extend_select(control_io_extend_select),
    .io_next_pc_select(control_io_next_pc_select)
  );
  register_file register_file ( // @[top.scala 11:31]
    .clock(register_file_clock),
    .reset(register_file_reset),
    .io_register_write(register_file_io_register_write),
    .io_rd_select(register_file_io_rd_select),
    .io_rs1_select(register_file_io_rs1_select),
    .io_rs2_select(register_file_io_rs2_select),
    .io_write_data(register_file_io_write_data),
    .io_rs1(register_file_io_rs1),
    .io_rs2(register_file_io_rs2)
  );
  alu_module alu ( // @[top.scala 12:21]
    .io_operand_a(alu_io_operand_a),
    .io_operand_b(alu_io_operand_b),
    .io_alu_control(alu_io_alu_control),
    .io_output(alu_io_output)
  );
  alu_control alu_control ( // @[top.scala 13:29]
    .io_alu_op(alu_control_io_alu_op),
    .io_func7(alu_control_io_func7),
    .io_func3(alu_control_io_func3),
    .io_output(alu_control_io_output)
  );
  immediate_generation immediate_generation ( // @[top.scala 14:38]
    .io_instruction(immediate_generation_io_instruction),
    .io_pc(immediate_generation_io_pc),
    .io_s_immediate(immediate_generation_io_s_immediate),
    .io_sb_immediate(immediate_generation_io_sb_immediate),
    .io_u_immediate(immediate_generation_io_u_immediate),
    .io_uj_immediate(immediate_generation_io_uj_immediate),
    .io_i_immediate(immediate_generation_io_i_immediate)
  );
  jalr jalr ( // @[top.scala 15:22]
    .io_input_a(jalr_io_input_a),
    .io_input_b(jalr_io_input_b),
    .io_output(jalr_io_output)
  );
  pc pc ( // @[top.scala 16:20]
    .clock(pc_clock),
    .reset(pc_reset),
    .io_in(pc_io_in),
    .io_out(pc_io_out),
    .io_pc4(pc_io_pc4)
  );
  instruction_memory instruction_memory ( // @[top.scala 17:36]
    .clock(instruction_memory_clock),
    .io_write_address(instruction_memory_io_write_address),
    .io_read_data(instruction_memory_io_read_data)
  );
  data_memory data_memory ( // @[top.scala 18:29]
    .clock(data_memory_clock),
    .io_memory_write(data_memory_io_memory_write),
    .io_memory_read(data_memory_io_memory_read),
    .io_memory_address(data_memory_io_memory_address),
    .io_memory_data(data_memory_io_memory_data),
    .io_memory_out(data_memory_io_memory_out)
  );
  IF_ID IF_ID ( // @[top.scala 19:23]
    .clock(IF_ID_clock),
    .reset(IF_ID_reset),
    .io_pc_in(IF_ID_io_pc_in),
    .io_pc4_in(IF_ID_io_pc4_in),
    .io_instruction_in(IF_ID_io_instruction_in),
    .io_pc_out(IF_ID_io_pc_out),
    .io_pc4_out(IF_ID_io_pc4_out),
    .io_instruction_out(IF_ID_io_instruction_out)
  );
  ID_EX ID_EX ( // @[top.scala 20:23]
    .clock(ID_EX_clock),
    .reset(ID_EX_reset),
    .io_pc4_in(ID_EX_io_pc4_in),
    .io_rs1_select_in(ID_EX_io_rs1_select_in),
    .io_rs2_select_in(ID_EX_io_rs2_select_in),
    .io_rs1_in(ID_EX_io_rs1_in),
    .io_rs2_in(ID_EX_io_rs2_in),
    .io_immediate_in(ID_EX_io_immediate_in),
    .io_rd_select_in(ID_EX_io_rd_select_in),
    .io_func3_in(ID_EX_io_func3_in),
    .io_func7_in(ID_EX_io_func7_in),
    .io_control_memorywrite_in(ID_EX_io_control_memorywrite_in),
    .io_control_memoryread_in(ID_EX_io_control_memoryread_in),
    .io_control_registerwrite_in(ID_EX_io_control_registerwrite_in),
    .io_control_memorytoregister_in(ID_EX_io_control_memorytoregister_in),
    .io_control_aluop_in(ID_EX_io_control_aluop_in),
    .io_control_opa_select_in(ID_EX_io_control_opa_select_in),
    .io_control_opb_select_in(ID_EX_io_control_opb_select_in),
    .io_pc4_out(ID_EX_io_pc4_out),
    .io_rs1_out(ID_EX_io_rs1_out),
    .io_rs2_out(ID_EX_io_rs2_out),
    .io_immediate_out(ID_EX_io_immediate_out),
    .io_func3_out(ID_EX_io_func3_out),
    .io_func7_out(ID_EX_io_func7_out),
    .io_rd_select_out(ID_EX_io_rd_select_out),
    .io_rs1_select_out(ID_EX_io_rs1_select_out),
    .io_rs2_select_out(ID_EX_io_rs2_select_out),
    .io_control_memorywrite_out(ID_EX_io_control_memorywrite_out),
    .io_control_memoryread_out(ID_EX_io_control_memoryread_out),
    .io_control_registerwrite_out(ID_EX_io_control_registerwrite_out),
    .io_control_memorytoregister_out(ID_EX_io_control_memorytoregister_out),
    .io_control_aluop_out(ID_EX_io_control_aluop_out),
    .io_control_opa_select_out(ID_EX_io_control_opa_select_out),
    .io_control_opb_select_out(ID_EX_io_control_opb_select_out)
  );
  EX_MEM EX_MEM ( // @[top.scala 21:24]
    .clock(EX_MEM_clock),
    .reset(EX_MEM_reset),
    .io_memorywrite(EX_MEM_io_memorywrite),
    .io_memoryread(EX_MEM_io_memoryread),
    .io_registerwrite(EX_MEM_io_registerwrite),
    .io_memorytoregister(EX_MEM_io_memorytoregister),
    .io_rs2_in(EX_MEM_io_rs2_in),
    .io_rd_select(EX_MEM_io_rd_select),
    .io_alu_out_in(EX_MEM_io_alu_out_in),
    .io_memorywrite_out(EX_MEM_io_memorywrite_out),
    .io_memoryread_out(EX_MEM_io_memoryread_out),
    .io_registerwrite_out(EX_MEM_io_registerwrite_out),
    .io_memorytoregister_out(EX_MEM_io_memorytoregister_out),
    .io_rs2_out(EX_MEM_io_rs2_out),
    .io_rd_select_out(EX_MEM_io_rd_select_out),
    .io_alu_out(EX_MEM_io_alu_out)
  );
  MEM_WB MEM_WB ( // @[top.scala 22:24]
    .clock(MEM_WB_clock),
    .reset(MEM_WB_reset),
    .io_registerwrite(MEM_WB_io_registerwrite),
    .io_memorytoregister(MEM_WB_io_memorytoregister),
    .io_rd_select(MEM_WB_io_rd_select),
    .io_memoryread(MEM_WB_io_memoryread),
    .io_datamemory_data_in(MEM_WB_io_datamemory_data_in),
    .io_alu_out_in(MEM_WB_io_alu_out_in),
    .io_registerwrite_out(MEM_WB_io_registerwrite_out),
    .io_memorytoregister_out(MEM_WB_io_memorytoregister_out),
    .io_memoryread_out(MEM_WB_io_memoryread_out),
    .io_rd_select_out(MEM_WB_io_rd_select_out),
    .io_datamemory_data_out(MEM_WB_io_datamemory_data_out),
    .io_alu_out(MEM_WB_io_alu_out)
  );
  forward_unit forward_unit ( // @[top.scala 23:30]
    .io_EX_MEM_registerrd(forward_unit_io_EX_MEM_registerrd),
    .io_MEM_WB_registerrd(forward_unit_io_MEM_WB_registerrd),
    .io_ID_EX_registerrs1(forward_unit_io_ID_EX_registerrs1),
    .io_ID_EX_registerrs2(forward_unit_io_ID_EX_registerrs2),
    .io_EX_MEM_registerwrite(forward_unit_io_EX_MEM_registerwrite),
    .io_MEM_WB_registerwrite(forward_unit_io_MEM_WB_registerwrite),
    .io_forward_a(forward_unit_io_forward_a),
    .io_forward_b(forward_unit_io_forward_b)
  );
  hazard_detection hazard_detection ( // @[top.scala 24:34]
    .io_pc_in(hazard_detection_io_pc_in),
    .io_current_pc(hazard_detection_io_current_pc),
    .io_ID_EX_memoryread(hazard_detection_io_ID_EX_memoryread),
    .io_IF_ID_instruction(hazard_detection_io_IF_ID_instruction),
    .io_ID_EX_registerrd(hazard_detection_io_ID_EX_registerrd),
    .io_instruction_forward(hazard_detection_io_instruction_forward),
    .io_pc_forward(hazard_detection_io_pc_forward),
    .io_control_forward(hazard_detection_io_control_forward),
    .io_instruction_out(hazard_detection_io_instruction_out),
    .io_pc_out(hazard_detection_io_pc_out),
    .io_current_pc_out(hazard_detection_io_current_pc_out)
  );
  branch_logic branch_logic ( // @[top.scala 25:30]
    .io_rs1(branch_logic_io_rs1),
    .io_rs2(branch_logic_io_rs2),
    .io_func3(branch_logic_io_func3),
    .io_output(branch_logic_io_output)
  );
  branch_forward branch_forward ( // @[top.scala 26:32]
    .io_ID_EX_registerrd(branch_forward_io_ID_EX_registerrd),
    .io_ID_EX_memoryread(branch_forward_io_ID_EX_memoryread),
    .io_EX_MEM_registerrd(branch_forward_io_EX_MEM_registerrd),
    .io_EX_MEM_memoryread(branch_forward_io_EX_MEM_memoryread),
    .io_MEM_WB_registerrd(branch_forward_io_MEM_WB_registerrd),
    .io_MEM_WB_memoryread(branch_forward_io_MEM_WB_memoryread),
    .io_rs1_select(branch_forward_io_rs1_select),
    .io_rs2_select(branch_forward_io_rs2_select),
    .io_control_branch(branch_forward_io_control_branch),
    .io_forward_rs1(branch_forward_io_forward_rs1),
    .io_forward_rs2(branch_forward_io_forward_rs2)
  );
  assign _T_9 = hazard_detection_io_instruction_forward; // @[top.scala 42:50]
  assign _GEN_0 = _T_9 ? hazard_detection_io_instruction_out : instruction_memory_io_read_data; // @[top.scala 42:62]
  assign _GEN_1 = _T_9 ? $signed(hazard_detection_io_current_pc_out) : $signed(pc_io_out); // @[top.scala 42:62]
  assign _T_11 = hazard_detection_io_pc_forward; // @[top.scala 51:41]
  assign _T_13 = control_io_next_pc_select == 2'h1; // @[top.scala 55:40]
  assign _T_15 = branch_logic_io_output; // @[top.scala 56:39]
  assign _T_17 = control_io_branch; // @[top.scala 56:68]
  assign _T_18 = _T_15 & _T_17; // @[top.scala 56:47]
  assign _GEN_2 = _T_18 ? $signed(immediate_generation_io_sb_immediate) : $signed(pc_io_pc4); // @[top.scala 56:77]
  assign _GEN_3 = _T_18 ? $signed(32'sh0) : $signed(_GEN_1); // @[top.scala 56:77]
  assign _GEN_4 = _T_18 ? $signed(32'sh0) : $signed(pc_io_pc4); // @[top.scala 56:77]
  assign _GEN_5 = _T_18 ? 32'h0 : _GEN_0; // @[top.scala 56:77]
  assign _T_23 = control_io_next_pc_select == 2'h2; // @[top.scala 65:47]
  assign _T_28 = control_io_next_pc_select == 2'h3; // @[top.scala 70:47]
  assign _GEN_6 = _T_28 ? $signed(jalr_io_output) : $signed(pc_io_pc4); // @[top.scala 70:60]
  assign _GEN_7 = _T_28 ? $signed(32'sh0) : $signed(_GEN_1); // @[top.scala 70:60]
  assign _GEN_8 = _T_28 ? $signed(32'sh0) : $signed(pc_io_pc4); // @[top.scala 70:60]
  assign _GEN_9 = _T_28 ? 32'h0 : _GEN_0; // @[top.scala 70:60]
  assign _GEN_10 = _T_23 ? $signed(immediate_generation_io_uj_immediate) : $signed(_GEN_6); // @[top.scala 65:60]
  assign _GEN_11 = _T_23 ? $signed(32'sh0) : $signed(_GEN_7); // @[top.scala 65:60]
  assign _GEN_12 = _T_23 ? $signed(32'sh0) : $signed(_GEN_8); // @[top.scala 65:60]
  assign _GEN_13 = _T_23 ? 32'h0 : _GEN_9; // @[top.scala 65:60]
  assign _GEN_14 = _T_13 ? $signed(_GEN_2) : $signed(_GEN_10); // @[top.scala 55:53]
  assign _GEN_15 = _T_13 ? $signed(_GEN_3) : $signed(_GEN_11); // @[top.scala 55:53]
  assign _GEN_16 = _T_13 ? $signed(_GEN_4) : $signed(_GEN_12); // @[top.scala 55:53]
  assign _GEN_17 = _T_13 ? _GEN_5 : _GEN_13; // @[top.scala 55:53]
  assign _T_38 = control_io_extend_select == 2'h0; // @[top.scala 96:32]
  assign _T_40 = control_io_extend_select == 2'h1; // @[top.scala 98:39]
  assign _T_42 = control_io_extend_select == 2'h2; // @[top.scala 100:39]
  assign _GEN_22 = _T_42 ? $signed(immediate_generation_io_u_immediate) : $signed(32'sh0); // @[top.scala 100:52]
  assign _GEN_23 = _T_40 ? $signed(immediate_generation_io_s_immediate) : $signed(_GEN_22); // @[top.scala 98:52]
  assign _T_51 = branch_forward_io_forward_rs1 == 4'h0; // @[top.scala 127:40]
  assign _T_53 = branch_forward_io_forward_rs1 == 4'h1; // @[top.scala 130:47]
  assign _T_55 = branch_forward_io_forward_rs1 == 4'h2; // @[top.scala 133:47]
  assign _T_57 = branch_forward_io_forward_rs1 == 4'h3; // @[top.scala 136:47]
  assign _T_59 = branch_forward_io_forward_rs1 == 4'h4; // @[top.scala 139:47]
  assign _T_61 = branch_forward_io_forward_rs1 == 4'h5; // @[top.scala 142:47]
  assign _T_63 = branch_forward_io_forward_rs1 == 4'h6; // @[top.scala 148:44]
  assign _T_65 = branch_forward_io_forward_rs1 == 4'h7; // @[top.scala 151:47]
  assign _T_67 = branch_forward_io_forward_rs1 == 4'h8; // @[top.scala 154:47]
  assign _T_69 = branch_forward_io_forward_rs1 == 4'h9; // @[top.scala 157:47]
  assign _T_71 = branch_forward_io_forward_rs1 == 4'ha; // @[top.scala 160:47]
  assign _GEN_25 = _T_71 ? $signed(register_file_io_write_data) : $signed(register_file_io_rs1); // @[top.scala 160:62]
  assign _GEN_26 = register_file_io_rs1; // @[top.scala 160:62]
  assign _GEN_27 = _T_69 ? $signed(data_memory_io_memory_out) : $signed(_GEN_25); // @[top.scala 157:62]
  assign _GEN_28 = _T_69 ? $signed(register_file_io_rs1) : $signed(_GEN_26); // @[top.scala 157:62]
  assign _GEN_29 = _T_67 ? $signed(register_file_io_write_data) : $signed(_GEN_27); // @[top.scala 154:62]
  assign _GEN_30 = _T_67 ? $signed(register_file_io_rs1) : $signed(_GEN_28); // @[top.scala 154:62]
  assign _GEN_31 = _T_65 ? $signed(EX_MEM_io_alu_out_in) : $signed(_GEN_29); // @[top.scala 151:62]
  assign _GEN_32 = _T_65 ? $signed(register_file_io_rs1) : $signed(_GEN_30); // @[top.scala 151:62]
  assign _GEN_33 = _T_63 ? $signed(alu_io_output) : $signed(_GEN_31); // @[top.scala 148:59]
  assign _GEN_34 = _T_63 ? $signed(register_file_io_rs1) : $signed(_GEN_32); // @[top.scala 148:59]
  assign _GEN_35 = _T_61 ? $signed(register_file_io_write_data) : $signed(_GEN_34); // @[top.scala 142:62]
  assign _GEN_36 = _T_61 ? $signed(register_file_io_rs1) : $signed(_GEN_33); // @[top.scala 142:62]
  assign _GEN_37 = _T_59 ? $signed(data_memory_io_memory_out) : $signed(_GEN_35); // @[top.scala 139:62]
  assign _GEN_38 = _T_59 ? $signed(register_file_io_rs1) : $signed(_GEN_36); // @[top.scala 139:62]
  assign _GEN_39 = _T_57 ? $signed(register_file_io_write_data) : $signed(_GEN_37); // @[top.scala 136:62]
  assign _GEN_40 = _T_57 ? $signed(register_file_io_rs1) : $signed(_GEN_38); // @[top.scala 136:62]
  assign _GEN_41 = _T_55 ? $signed(EX_MEM_io_alu_out) : $signed(_GEN_39); // @[top.scala 133:62]
  assign _GEN_42 = _T_55 ? $signed(register_file_io_rs1) : $signed(_GEN_40); // @[top.scala 133:62]
  assign _GEN_43 = _T_53 ? $signed(alu_io_output) : $signed(_GEN_41); // @[top.scala 130:62]
  assign _GEN_44 = _T_53 ? $signed(register_file_io_rs1) : $signed(_GEN_42); // @[top.scala 130:62]
  assign _T_73 = branch_forward_io_forward_rs2 == 4'h0; // @[top.scala 168:40]
  assign _T_75 = branch_forward_io_forward_rs2 == 4'h1; // @[top.scala 170:47]
  assign _T_77 = branch_forward_io_forward_rs2 == 4'h2; // @[top.scala 172:47]
  assign _T_79 = branch_forward_io_forward_rs2 == 4'h3; // @[top.scala 174:47]
  assign _T_81 = branch_forward_io_forward_rs2 == 4'h4; // @[top.scala 176:47]
  assign _T_83 = branch_forward_io_forward_rs2 == 4'h5; // @[top.scala 178:47]
  assign _GEN_47 = _T_83 ? $signed(register_file_io_write_data) : $signed(register_file_io_rs2); // @[top.scala 178:62]
  assign _GEN_48 = _T_81 ? $signed(data_memory_io_memory_out) : $signed(_GEN_47); // @[top.scala 176:62]
  assign _GEN_49 = _T_79 ? $signed(register_file_io_write_data) : $signed(_GEN_48); // @[top.scala 174:62]
  assign _GEN_50 = _T_77 ? $signed(EX_MEM_io_alu_out) : $signed(_GEN_49); // @[top.scala 172:62]
  assign _GEN_51 = _T_75 ? $signed(alu_io_output) : $signed(_GEN_50); // @[top.scala 170:62]
  assign _T_85 = hazard_detection_io_control_forward; // @[top.scala 187:46]
  assign _T_96 = ID_EX_io_control_opa_select_out == 2'h2; // @[top.scala 219:43]
  assign _T_98 = forward_unit_io_forward_a == 2'h0; // @[top.scala 222:40]
  assign _T_100 = forward_unit_io_forward_a == 2'h1; // @[top.scala 224:47]
  assign _T_102 = forward_unit_io_forward_a == 2'h2; // @[top.scala 226:47]
  assign _GEN_62 = _T_102 ? $signed(register_file_io_write_data) : $signed(ID_EX_io_rs1_out); // @[top.scala 226:60]
  assign _GEN_63 = _T_100 ? $signed(EX_MEM_io_alu_out) : $signed(_GEN_62); // @[top.scala 224:60]
  assign _GEN_64 = _T_98 ? $signed(ID_EX_io_rs1_out) : $signed(_GEN_63); // @[top.scala 222:53]
  assign _T_104 = ID_EX_io_control_opb_select_out; // @[top.scala 233:42]
  assign _T_106 = forward_unit_io_forward_b == 2'h0; // @[top.scala 235:38]
  assign _T_108 = forward_unit_io_forward_b == 2'h1; // @[top.scala 237:45]
  assign _T_110 = forward_unit_io_forward_b == 2'h2; // @[top.scala 239:45]
  assign _GEN_66 = _T_110 ? $signed(register_file_io_write_data) : $signed(ID_EX_io_rs2_out); // @[top.scala 239:58]
  assign _GEN_67 = _T_108 ? $signed(EX_MEM_io_alu_out) : $signed(_GEN_66); // @[top.scala 237:58]
  assign _GEN_68 = _T_106 ? $signed(ID_EX_io_rs2_out) : $signed(_GEN_67); // @[top.scala 235:51]
  assign _T_119 = MEM_WB_io_memorytoregister_out; // @[top.scala 295:41]
  assign io_reg_out = register_file_io_write_data; // @[top.scala 303:12]
  assign control_io_opcode = IF_ID_io_instruction_out[6:0]; // @[top.scala 106:27]
  assign register_file_clock = clock;
  assign register_file_reset = reset;
  assign register_file_io_register_write = MEM_WB_io_registerwrite_out; // @[top.scala 110:38]
  assign register_file_io_rd_select = MEM_WB_io_rd_select_out; // @[top.scala 111:33]
  assign register_file_io_rs1_select = IF_ID_io_instruction_out[19:15]; // @[top.scala 108:34]
  assign register_file_io_rs2_select = IF_ID_io_instruction_out[24:20]; // @[top.scala 109:34]
  assign register_file_io_write_data = _T_119 ? $signed(MEM_WB_io_datamemory_data_out) : $signed(MEM_WB_io_alu_out); // @[top.scala 296:37 top.scala 298:37]
  assign alu_io_operand_a = _T_96 ? $signed(ID_EX_io_pc4_out) : $signed(_GEN_64); // @[top.scala 220:24 top.scala 223:28 top.scala 225:28 top.scala 227:28 top.scala 229:28]
  assign alu_io_operand_b = _T_104 ? $signed(ID_EX_io_immediate_out) : $signed(_GEN_68); // @[top.scala 234:24 top.scala 246:26 top.scala 249:26 top.scala 252:26 top.scala 255:26]
  assign alu_io_alu_control = alu_control_io_output; // @[top.scala 264:24]
  assign alu_control_io_alu_op = ID_EX_io_control_aluop_out; // @[top.scala 260:31]
  assign alu_control_io_func7 = ID_EX_io_func7_out; // @[top.scala 261:30]
  assign alu_control_io_func3 = ID_EX_io_func3_out; // @[top.scala 262:30]
  assign immediate_generation_io_instruction = IF_ID_io_instruction_out; // @[top.scala 94:45]
  assign immediate_generation_io_pc = IF_ID_io_pc_out; // @[top.scala 95:36]
  assign jalr_io_input_a = _T_51 ? $signed(register_file_io_rs1) : $signed(_GEN_44); // @[top.scala 129:23 top.scala 132:23 top.scala 135:23 top.scala 138:23 top.scala 141:23 top.scala 144:23 top.scala 149:25 top.scala 152:25 top.scala 155:25 top.scala 158:25 top.scala 161:25 top.scala 165:25]
  assign jalr_io_input_b = immediate_generation_io_i_immediate; // @[top.scala 184:21]
  assign pc_clock = clock;
  assign pc_reset = reset;
  assign pc_io_in = _T_11 ? $signed(hazard_detection_io_pc_out) : $signed(_GEN_14); // @[top.scala 52:16 top.scala 57:22 top.scala 62:22 top.scala 66:20 top.scala 71:20 top.scala 77:20]
  assign instruction_memory_clock = clock;
  assign instruction_memory_io_write_address = pc_io_out[11:2]; // @[top.scala 31:41]
  assign data_memory_clock = clock;
  assign data_memory_io_memory_write = EX_MEM_io_memorywrite_out; // @[top.scala 287:35]
  assign data_memory_io_memory_read = EX_MEM_io_memoryread_out; // @[top.scala 288:34]
  assign data_memory_io_memory_address = EX_MEM_io_alu_out[11:2]; // @[top.scala 286:37]
  assign data_memory_io_memory_data = EX_MEM_io_rs2_out; // @[top.scala 289:34]
  assign IF_ID_clock = clock;
  assign IF_ID_reset = reset;
  assign IF_ID_io_pc_in = _T_11 ? $signed(_GEN_1) : $signed(_GEN_15); // @[top.scala 32:20 top.scala 44:22 top.scala 58:28 top.scala 67:26 top.scala 72:26]
  assign IF_ID_io_pc4_in = _T_11 ? $signed(pc_io_pc4) : $signed(_GEN_16); // @[top.scala 33:21 top.scala 59:29 top.scala 68:27 top.scala 73:27]
  assign IF_ID_io_instruction_in = _T_11 ? _GEN_0 : _GEN_17; // @[top.scala 43:31 top.scala 46:33 top.scala 60:37 top.scala 69:35 top.scala 74:35]
  assign ID_EX_clock = clock;
  assign ID_EX_reset = reset;
  assign ID_EX_io_pc4_in = IF_ID_io_pc4_out; // @[top.scala 85:22]
  assign ID_EX_io_rs1_select_in = IF_ID_io_instruction_out[19:15]; // @[top.scala 89:29]
  assign ID_EX_io_rs2_select_in = IF_ID_io_instruction_out[24:20]; // @[top.scala 90:29]
  assign ID_EX_io_rs1_in = register_file_io_rs1; // @[top.scala 92:22]
  assign ID_EX_io_rs2_in = register_file_io_rs2; // @[top.scala 91:22]
  assign ID_EX_io_immediate_in = _T_38 ? $signed(immediate_generation_io_i_immediate) : $signed(_GEN_23); // @[top.scala 97:28 top.scala 99:28 top.scala 101:28 top.scala 103:28]
  assign ID_EX_io_rd_select_in = IF_ID_io_instruction_out[11:7]; // @[top.scala 88:28]
  assign ID_EX_io_func3_in = IF_ID_io_instruction_out[14:12]; // @[top.scala 86:24]
  assign ID_EX_io_func7_in = IF_ID_io_instruction_out[30]; // @[top.scala 87:24]
  assign ID_EX_io_control_memorywrite_in = _T_85 ? 1'h0 : control_io_memory_write; // @[top.scala 188:41 top.scala 198:41]
  assign ID_EX_io_control_memoryread_in = _T_85 ? 1'h0 : control_io_memory_read; // @[top.scala 189:40 top.scala 199:40]
  assign ID_EX_io_control_registerwrite_in = _T_85 ? 1'h0 : control_io_register_write; // @[top.scala 191:43 top.scala 201:43]
  assign ID_EX_io_control_memorytoregister_in = _T_85 ? 1'h0 : control_io_memory_to_register; // @[top.scala 192:46 top.scala 202:46]
  assign ID_EX_io_control_aluop_in = _T_85 ? 3'h0 : control_io_alu_op; // @[top.scala 193:35 top.scala 203:35]
  assign ID_EX_io_control_opa_select_in = _T_85 ? 2'h0 : control_io_operand_a_select; // @[top.scala 194:40 top.scala 204:40]
  assign ID_EX_io_control_opb_select_in = _T_85 ? 1'h0 : control_io_operand_b_select; // @[top.scala 195:40 top.scala 205:40]
  assign EX_MEM_clock = clock;
  assign EX_MEM_reset = reset;
  assign EX_MEM_io_memorywrite = ID_EX_io_control_memorywrite_out; // @[top.scala 269:31]
  assign EX_MEM_io_memoryread = ID_EX_io_control_memoryread_out; // @[top.scala 270:30]
  assign EX_MEM_io_registerwrite = ID_EX_io_control_registerwrite_out; // @[top.scala 271:33]
  assign EX_MEM_io_memorytoregister = ID_EX_io_control_memorytoregister_out; // @[top.scala 272:36]
  assign EX_MEM_io_rs2_in = _T_104 ? $signed(_GEN_68) : $signed(_GEN_68); // @[top.scala 236:26 top.scala 238:26 top.scala 240:26 top.scala 242:26 top.scala 247:26 top.scala 250:26 top.scala 253:26 top.scala 256:26]
  assign EX_MEM_io_rd_select = ID_EX_io_rd_select_out; // @[top.scala 267:29]
  assign EX_MEM_io_alu_out_in = alu_io_output; // @[top.scala 266:30]
  assign MEM_WB_clock = clock;
  assign MEM_WB_reset = reset;
  assign MEM_WB_io_registerwrite = EX_MEM_io_registerwrite_out; // @[top.scala 282:31]
  assign MEM_WB_io_memorytoregister = EX_MEM_io_memorytoregister_out; // @[top.scala 284:34]
  assign MEM_WB_io_rd_select = EX_MEM_io_rd_select_out; // @[top.scala 281:27]
  assign MEM_WB_io_memoryread = EX_MEM_io_memoryread_out; // @[top.scala 283:28]
  assign MEM_WB_io_datamemory_data_in = data_memory_io_memory_out; // @[top.scala 280:36]
  assign MEM_WB_io_alu_out_in = EX_MEM_io_alu_out; // @[top.scala 279:28]
  assign forward_unit_io_EX_MEM_registerrd = EX_MEM_io_rd_select_out; // @[top.scala 210:43]
  assign forward_unit_io_MEM_WB_registerrd = MEM_WB_io_rd_select_out; // @[top.scala 211:43]
  assign forward_unit_io_ID_EX_registerrs1 = ID_EX_io_rs1_select_out; // @[top.scala 212:43]
  assign forward_unit_io_ID_EX_registerrs2 = ID_EX_io_rs2_select_out; // @[top.scala 213:43]
  assign forward_unit_io_EX_MEM_registerwrite = EX_MEM_io_registerwrite_out; // @[top.scala 214:46]
  assign forward_unit_io_MEM_WB_registerwrite = MEM_WB_io_registerwrite_out; // @[top.scala 215:46]
  assign hazard_detection_io_pc_in = IF_ID_io_pc4_out; // @[top.scala 38:32]
  assign hazard_detection_io_current_pc = IF_ID_io_pc_out; // @[top.scala 39:37]
  assign hazard_detection_io_ID_EX_memoryread = ID_EX_io_control_memoryread_out; // @[top.scala 36:43]
  assign hazard_detection_io_IF_ID_instruction = IF_ID_io_instruction_out; // @[top.scala 35:44]
  assign hazard_detection_io_ID_EX_registerrd = ID_EX_io_rd_select_out; // @[top.scala 37:43]
  assign branch_logic_io_rs1 = _T_51 ? $signed(register_file_io_rs1) : $signed(_GEN_43); // @[top.scala 128:27 top.scala 131:27 top.scala 134:27 top.scala 137:27 top.scala 140:27 top.scala 143:27 top.scala 150:29 top.scala 153:29 top.scala 156:29 top.scala 159:29 top.scala 162:29 top.scala 164:29]
  assign branch_logic_io_rs2 = _T_73 ? $signed(register_file_io_rs2) : $signed(_GEN_51); // @[top.scala 169:27 top.scala 171:27 top.scala 173:27 top.scala 175:27 top.scala 177:27 top.scala 179:27 top.scala 181:29]
  assign branch_logic_io_func3 = IF_ID_io_instruction_out[14:12]; // @[top.scala 124:27]
  assign branch_forward_io_ID_EX_registerrd = ID_EX_io_rd_select_out; // @[top.scala 113:40]
  assign branch_forward_io_ID_EX_memoryread = ID_EX_io_control_memoryread_out; // @[top.scala 116:40]
  assign branch_forward_io_EX_MEM_registerrd = EX_MEM_io_rd_select_out; // @[top.scala 114:41]
  assign branch_forward_io_EX_MEM_memoryread = EX_MEM_io_memoryread_out; // @[top.scala 117:41]
  assign branch_forward_io_MEM_WB_registerrd = MEM_WB_io_rd_select_out; // @[top.scala 115:41]
  assign branch_forward_io_MEM_WB_memoryread = MEM_WB_io_memoryread_out; // @[top.scala 118:41]
  assign branch_forward_io_rs1_select = IF_ID_io_instruction_out[19:15]; // @[top.scala 119:34]
  assign branch_forward_io_rs2_select = IF_ID_io_instruction_out[24:20]; // @[top.scala 120:34]
  assign branch_forward_io_control_branch = control_io_branch; // @[top.scala 121:38]
endmodule
