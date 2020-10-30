module Alu(
  input  [4:0]  io_AluControl,
  input  [31:0] io_in1,
  input  [31:0] io_in2,
  output [31:0] io_out
);
  wire  _T_16; // @[Alu.scala 15:29]
  wire [32:0] _T_17; // @[Alu.scala 15:62]
  wire [31:0] _T_18; // @[Alu.scala 15:62]
  wire [31:0] _T_19; // @[Alu.scala 15:62]
  wire  _T_21; // @[Alu.scala 17:34]
  wire [4:0] _T_22; // @[Alu.scala 17:76]
  wire [62:0] _GEN_21; // @[Alu.scala 17:67]
  wire [62:0] _T_23; // @[Alu.scala 17:67]
  wire  _T_25; // @[Alu.scala 19:34]
  wire [31:0] _T_26; // @[Alu.scala 19:67]
  wire [31:0] _T_27; // @[Alu.scala 19:67]
  wire  _T_29; // @[Alu.scala 21:34]
  wire  _T_31; // @[Alu.scala 21:66]
  wire  _T_32; // @[Alu.scala 21:49]
  wire [31:0] _T_34; // @[Alu.scala 21:99]
  wire  _T_36; // @[Alu.scala 23:34]
  wire [31:0] _T_37; // @[Alu.scala 23:67]
  wire [31:0] _T_38; // @[Alu.scala 23:67]
  wire  _T_40; // @[Alu.scala 25:34]
  wire [31:0] _T_41; // @[Alu.scala 25:67]
  wire [31:0] _T_42; // @[Alu.scala 25:67]
  wire  _T_44; // @[Alu.scala 27:34]
  wire [32:0] _T_45; // @[Alu.scala 27:67]
  wire [31:0] _T_46; // @[Alu.scala 27:67]
  wire [31:0] _T_47; // @[Alu.scala 27:67]
  wire  _T_49; // @[Alu.scala 29:34]
  wire  _T_51; // @[Alu.scala 31:34]
  wire  _T_52; // @[Alu.scala 32:30]
  wire [1:0] _GEN_0; // @[Alu.scala 32:40]
  wire  _T_56; // @[Alu.scala 35:34]
  wire [31:0] _T_57; // @[Alu.scala 36:30]
  wire [31:0] _T_58; // @[Alu.scala 36:47]
  wire  _T_59; // @[Alu.scala 36:37]
  wire [1:0] _GEN_1; // @[Alu.scala 36:54]
  wire  _T_63; // @[Alu.scala 39:34]
  wire  _T_65; // @[Alu.scala 39:66]
  wire  _T_66; // @[Alu.scala 39:49]
  wire  _T_69; // @[Alu.scala 40:37]
  wire [1:0] _GEN_2; // @[Alu.scala 40:53]
  wire  _T_73; // @[Alu.scala 43:34]
  wire  _T_74; // @[Alu.scala 44:30]
  wire [1:0] _GEN_3; // @[Alu.scala 44:41]
  wire  _T_78; // @[Alu.scala 47:34]
  wire  _T_80; // @[Alu.scala 47:66]
  wire  _T_81; // @[Alu.scala 47:49]
  wire  _T_82; // @[Alu.scala 48:30]
  wire [1:0] _GEN_4; // @[Alu.scala 48:39]
  wire  _T_87; // @[Alu.scala 52:30]
  wire [1:0] _GEN_5; // @[Alu.scala 52:41]
  wire [1:0] _GEN_7; // @[Alu.scala 47:81]
  wire [1:0] _GEN_8; // @[Alu.scala 43:49]
  wire [1:0] _GEN_9; // @[Alu.scala 39:81]
  wire [1:0] _GEN_10; // @[Alu.scala 35:49]
  wire [1:0] _GEN_11; // @[Alu.scala 31:49]
  wire [31:0] _GEN_12; // @[Alu.scala 29:49]
  wire [31:0] _GEN_13; // @[Alu.scala 27:49]
  wire [31:0] _GEN_14; // @[Alu.scala 25:49]
  wire [31:0] _GEN_15; // @[Alu.scala 23:49]
  wire [31:0] _GEN_16; // @[Alu.scala 21:81]
  wire [31:0] _GEN_17; // @[Alu.scala 19:49]
  wire [62:0] _GEN_18; // @[Alu.scala 17:49]
  wire [62:0] _GEN_19; // @[Alu.scala 15:44]
  wire [31:0] _GEN_22; // @[Alu.scala 15:52 Alu.scala 17:57 Alu.scala 19:57 Alu.scala 21:89 Alu.scala 23:57 Alu.scala 25:57 Alu.scala 27:57 Alu.scala 29:57 Alu.scala 32:48 Alu.scala 33:36 Alu.scala 36:62 Alu.scala 37:36 Alu.scala 40:61 Alu.scala 41:36 Alu.scala 44:49 Alu.scala 45:36 Alu.scala 48:47 Alu.scala 49:36 Alu.scala 52:49 Alu.scala 53:36]
  assign _T_16 = io_AluControl == 5'h0; // @[Alu.scala 15:29]
  assign _T_17 = $signed(io_in1) + $signed(io_in2); // @[Alu.scala 15:62]
  assign _T_18 = $signed(io_in1) + $signed(io_in2); // @[Alu.scala 15:62]
  assign _T_19 = $signed(_T_18); // @[Alu.scala 15:62]
  assign _T_21 = io_AluControl == 5'h1; // @[Alu.scala 17:34]
  assign _T_22 = io_in2[4:0]; // @[Alu.scala 17:76]
  assign _GEN_21 = {{31{io_in1[31]}},io_in1}; // @[Alu.scala 17:67]
  assign _T_23 = $signed(_GEN_21) << _T_22; // @[Alu.scala 17:67]
  assign _T_25 = io_AluControl == 5'h4; // @[Alu.scala 19:34]
  assign _T_26 = $signed(io_in1) ^ $signed(io_in2); // @[Alu.scala 19:67]
  assign _T_27 = $signed(_T_26); // @[Alu.scala 19:67]
  assign _T_29 = io_AluControl == 5'h5; // @[Alu.scala 21:34]
  assign _T_31 = io_AluControl == 5'hd; // @[Alu.scala 21:66]
  assign _T_32 = _T_29 | _T_31; // @[Alu.scala 21:49]
  assign _T_34 = $signed(io_in1) >>> _T_22; // @[Alu.scala 21:99]
  assign _T_36 = io_AluControl == 5'h6; // @[Alu.scala 23:34]
  assign _T_37 = $signed(io_in1) | $signed(io_in2); // @[Alu.scala 23:67]
  assign _T_38 = $signed(_T_37); // @[Alu.scala 23:67]
  assign _T_40 = io_AluControl == 5'h7; // @[Alu.scala 25:34]
  assign _T_41 = $signed(io_in1) & $signed(io_in2); // @[Alu.scala 25:67]
  assign _T_42 = $signed(_T_41); // @[Alu.scala 25:67]
  assign _T_44 = io_AluControl == 5'h8; // @[Alu.scala 27:34]
  assign _T_45 = $signed(io_in1) - $signed(io_in2); // @[Alu.scala 27:67]
  assign _T_46 = $signed(io_in1) - $signed(io_in2); // @[Alu.scala 27:67]
  assign _T_47 = $signed(_T_46); // @[Alu.scala 27:67]
  assign _T_49 = io_AluControl == 5'h1f; // @[Alu.scala 29:34]
  assign _T_51 = io_AluControl == 5'h15; // @[Alu.scala 31:34]
  assign _T_52 = $signed(io_in1) >= $signed(io_in2); // @[Alu.scala 32:30]
  assign _GEN_0 = _T_52 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 32:40]
  assign _T_56 = io_AluControl == 5'h17; // @[Alu.scala 35:34]
  assign _T_57 = $unsigned(io_in1); // @[Alu.scala 36:30]
  assign _T_58 = $unsigned(io_in2); // @[Alu.scala 36:47]
  assign _T_59 = _T_57 >= _T_58; // @[Alu.scala 36:37]
  assign _GEN_1 = _T_59 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 36:54]
  assign _T_63 = io_AluControl == 5'h3; // @[Alu.scala 39:34]
  assign _T_65 = io_AluControl == 5'h16; // @[Alu.scala 39:66]
  assign _T_66 = _T_63 | _T_65; // @[Alu.scala 39:49]
  assign _T_69 = _T_57 < _T_58; // @[Alu.scala 40:37]
  assign _GEN_2 = _T_69 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 40:53]
  assign _T_73 = io_AluControl == 5'h10; // @[Alu.scala 43:34]
  assign _T_74 = $signed(io_in1) == $signed(io_in2); // @[Alu.scala 44:30]
  assign _GEN_3 = _T_74 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 44:41]
  assign _T_78 = io_AluControl == 5'h2; // @[Alu.scala 47:34]
  assign _T_80 = io_AluControl == 5'h14; // @[Alu.scala 47:66]
  assign _T_81 = _T_78 | _T_80; // @[Alu.scala 47:49]
  assign _T_82 = $signed(io_in1) < $signed(io_in2); // @[Alu.scala 48:30]
  assign _GEN_4 = _T_82 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 48:39]
  assign _T_87 = $signed(io_in1) != $signed(io_in2); // @[Alu.scala 52:30]
  assign _GEN_5 = _T_87 ? $signed(2'sh1) : $signed(2'sh0); // @[Alu.scala 52:41]
  assign _GEN_7 = _T_81 ? $signed(_GEN_4) : $signed(_GEN_5); // @[Alu.scala 47:81]
  assign _GEN_8 = _T_73 ? $signed(_GEN_3) : $signed(_GEN_7); // @[Alu.scala 43:49]
  assign _GEN_9 = _T_66 ? $signed(_GEN_2) : $signed(_GEN_8); // @[Alu.scala 39:81]
  assign _GEN_10 = _T_56 ? $signed(_GEN_1) : $signed(_GEN_9); // @[Alu.scala 35:49]
  assign _GEN_11 = _T_51 ? $signed(_GEN_0) : $signed(_GEN_10); // @[Alu.scala 31:49]
  assign _GEN_12 = _T_49 ? $signed(io_in1) : $signed({{30{_GEN_11[1]}},_GEN_11}); // @[Alu.scala 29:49]
  assign _GEN_13 = _T_44 ? $signed(_T_47) : $signed(_GEN_12); // @[Alu.scala 27:49]
  assign _GEN_14 = _T_40 ? $signed(_T_42) : $signed(_GEN_13); // @[Alu.scala 25:49]
  assign _GEN_15 = _T_36 ? $signed(_T_38) : $signed(_GEN_14); // @[Alu.scala 23:49]
  assign _GEN_16 = _T_32 ? $signed(_T_34) : $signed(_GEN_15); // @[Alu.scala 21:81]
  assign _GEN_17 = _T_25 ? $signed(_T_27) : $signed(_GEN_16); // @[Alu.scala 19:49]
  assign _GEN_18 = _T_21 ? $signed(_T_23) : $signed({{31{_GEN_17[31]}},_GEN_17}); // @[Alu.scala 17:49]
  assign _GEN_19 = _T_16 ? $signed({{31{_T_19[31]}},_T_19}) : $signed(_GEN_18); // @[Alu.scala 15:44]
  assign _GEN_22 = _GEN_19[31:0]; // @[Alu.scala 15:52 Alu.scala 17:57 Alu.scala 19:57 Alu.scala 21:89 Alu.scala 23:57 Alu.scala 25:57 Alu.scala 27:57 Alu.scala 29:57 Alu.scala 32:48 Alu.scala 33:36 Alu.scala 36:62 Alu.scala 37:36 Alu.scala 40:61 Alu.scala 41:36 Alu.scala 44:49 Alu.scala 45:36 Alu.scala 48:47 Alu.scala 49:36 Alu.scala 52:49 Alu.scala 53:36]
  assign io_out = $signed(_GEN_22); // @[Alu.scala 15:52 Alu.scala 17:57 Alu.scala 19:57 Alu.scala 21:89 Alu.scala 23:57 Alu.scala 25:57 Alu.scala 27:57 Alu.scala 29:57 Alu.scala 32:48 Alu.scala 33:36 Alu.scala 36:62 Alu.scala 37:36 Alu.scala 40:61 Alu.scala 41:36 Alu.scala 44:49 Alu.scala 45:36 Alu.scala 48:47 Alu.scala 49:36 Alu.scala 52:49 Alu.scala 53:36]
endmodule
module InstTypeDeco(
  input  [6:0] io_opcode,
  output       io_R,
  output       io_Load,
  output       io_Store,
  output       io_Branch,
  output       io_I,
  output       io_Jal,
  output       io_Jalr,
  output       io_Lui
);
  wire  _T_24; // @[InstTypeDeco.scala 18:25]
  wire  _T_34; // @[InstTypeDeco.scala 28:30]
  wire  _T_44; // @[InstTypeDeco.scala 38:30]
  wire  _T_54; // @[InstTypeDeco.scala 48:30]
  wire  _T_64; // @[InstTypeDeco.scala 58:30]
  wire  _T_74; // @[InstTypeDeco.scala 68:30]
  wire  _T_84; // @[InstTypeDeco.scala 78:30]
  wire  _T_94; // @[InstTypeDeco.scala 88:30]
  wire  _GEN_4; // @[InstTypeDeco.scala 78:42]
  wire  _GEN_6; // @[InstTypeDeco.scala 68:42]
  wire  _GEN_8; // @[InstTypeDeco.scala 68:42]
  wire  _GEN_11; // @[InstTypeDeco.scala 58:42]
  wire  _GEN_12; // @[InstTypeDeco.scala 58:42]
  wire  _GEN_13; // @[InstTypeDeco.scala 58:42]
  wire  _GEN_16; // @[InstTypeDeco.scala 48:42]
  wire  _GEN_17; // @[InstTypeDeco.scala 48:42]
  wire  _GEN_18; // @[InstTypeDeco.scala 48:42]
  wire  _GEN_19; // @[InstTypeDeco.scala 48:42]
  wire  _GEN_22; // @[InstTypeDeco.scala 38:42]
  wire  _GEN_23; // @[InstTypeDeco.scala 38:42]
  wire  _GEN_24; // @[InstTypeDeco.scala 38:42]
  wire  _GEN_25; // @[InstTypeDeco.scala 38:42]
  wire  _GEN_26; // @[InstTypeDeco.scala 38:42]
  wire  _GEN_29; // @[InstTypeDeco.scala 28:41]
  wire  _GEN_30; // @[InstTypeDeco.scala 28:41]
  wire  _GEN_31; // @[InstTypeDeco.scala 28:41]
  wire  _GEN_32; // @[InstTypeDeco.scala 28:41]
  wire  _GEN_33; // @[InstTypeDeco.scala 28:41]
  wire  _GEN_34; // @[InstTypeDeco.scala 28:41]
  assign _T_24 = io_opcode == 7'h33; // @[InstTypeDeco.scala 18:25]
  assign _T_34 = io_opcode == 7'h3; // @[InstTypeDeco.scala 28:30]
  assign _T_44 = io_opcode == 7'h23; // @[InstTypeDeco.scala 38:30]
  assign _T_54 = io_opcode == 7'h63; // @[InstTypeDeco.scala 48:30]
  assign _T_64 = io_opcode == 7'h13; // @[InstTypeDeco.scala 58:30]
  assign _T_74 = io_opcode == 7'h67; // @[InstTypeDeco.scala 68:30]
  assign _T_84 = io_opcode == 7'h6f; // @[InstTypeDeco.scala 78:30]
  assign _T_94 = io_opcode == 7'h37; // @[InstTypeDeco.scala 88:30]
  assign _GEN_4 = _T_84 ? 1'h0 : _T_94; // @[InstTypeDeco.scala 78:42]
  assign _GEN_6 = _T_74 ? 1'h0 : _T_84; // @[InstTypeDeco.scala 68:42]
  assign _GEN_8 = _T_74 ? 1'h0 : _GEN_4; // @[InstTypeDeco.scala 68:42]
  assign _GEN_11 = _T_64 ? 1'h0 : _GEN_6; // @[InstTypeDeco.scala 58:42]
  assign _GEN_12 = _T_64 ? 1'h0 : _T_74; // @[InstTypeDeco.scala 58:42]
  assign _GEN_13 = _T_64 ? 1'h0 : _GEN_8; // @[InstTypeDeco.scala 58:42]
  assign _GEN_16 = _T_54 ? 1'h0 : _T_64; // @[InstTypeDeco.scala 48:42]
  assign _GEN_17 = _T_54 ? 1'h0 : _GEN_11; // @[InstTypeDeco.scala 48:42]
  assign _GEN_18 = _T_54 ? 1'h0 : _GEN_12; // @[InstTypeDeco.scala 48:42]
  assign _GEN_19 = _T_54 ? 1'h0 : _GEN_13; // @[InstTypeDeco.scala 48:42]
  assign _GEN_22 = _T_44 ? 1'h0 : _T_54; // @[InstTypeDeco.scala 38:42]
  assign _GEN_23 = _T_44 ? 1'h0 : _GEN_16; // @[InstTypeDeco.scala 38:42]
  assign _GEN_24 = _T_44 ? 1'h0 : _GEN_17; // @[InstTypeDeco.scala 38:42]
  assign _GEN_25 = _T_44 ? 1'h0 : _GEN_18; // @[InstTypeDeco.scala 38:42]
  assign _GEN_26 = _T_44 ? 1'h0 : _GEN_19; // @[InstTypeDeco.scala 38:42]
  assign _GEN_29 = _T_34 ? 1'h0 : _T_44; // @[InstTypeDeco.scala 28:41]
  assign _GEN_30 = _T_34 ? 1'h0 : _GEN_22; // @[InstTypeDeco.scala 28:41]
  assign _GEN_31 = _T_34 ? 1'h0 : _GEN_23; // @[InstTypeDeco.scala 28:41]
  assign _GEN_32 = _T_34 ? 1'h0 : _GEN_24; // @[InstTypeDeco.scala 28:41]
  assign _GEN_33 = _T_34 ? 1'h0 : _GEN_25; // @[InstTypeDeco.scala 28:41]
  assign _GEN_34 = _T_34 ? 1'h0 : _GEN_26; // @[InstTypeDeco.scala 28:41]
  assign io_R = io_opcode == 7'h33; // @[InstTypeDeco.scala 19:22 InstTypeDeco.scala 29:22 InstTypeDeco.scala 39:22 InstTypeDeco.scala 49:22 InstTypeDeco.scala 59:22 InstTypeDeco.scala 69:22 InstTypeDeco.scala 79:22 InstTypeDeco.scala 89:22 InstTypeDeco.scala 99:22]
  assign io_Load = _T_24 ? 1'h0 : _T_34; // @[InstTypeDeco.scala 20:25 InstTypeDeco.scala 30:25 InstTypeDeco.scala 40:25 InstTypeDeco.scala 50:25 InstTypeDeco.scala 60:25 InstTypeDeco.scala 70:25 InstTypeDeco.scala 80:25 InstTypeDeco.scala 90:25 InstTypeDeco.scala 100:25]
  assign io_Store = _T_24 ? 1'h0 : _GEN_29; // @[InstTypeDeco.scala 21:26 InstTypeDeco.scala 31:26 InstTypeDeco.scala 41:26 InstTypeDeco.scala 51:26 InstTypeDeco.scala 61:26 InstTypeDeco.scala 71:26 InstTypeDeco.scala 81:26 InstTypeDeco.scala 91:26 InstTypeDeco.scala 101:26]
  assign io_Branch = _T_24 ? 1'h0 : _GEN_30; // @[InstTypeDeco.scala 22:27 InstTypeDeco.scala 32:27 InstTypeDeco.scala 42:27 InstTypeDeco.scala 52:27 InstTypeDeco.scala 62:27 InstTypeDeco.scala 72:27 InstTypeDeco.scala 82:27 InstTypeDeco.scala 92:27 InstTypeDeco.scala 102:27]
  assign io_I = _T_24 ? 1'h0 : _GEN_31; // @[InstTypeDeco.scala 23:22 InstTypeDeco.scala 33:22 InstTypeDeco.scala 43:22 InstTypeDeco.scala 53:22 InstTypeDeco.scala 63:22 InstTypeDeco.scala 73:22 InstTypeDeco.scala 83:22 InstTypeDeco.scala 93:22 InstTypeDeco.scala 103:22]
  assign io_Jal = _T_24 ? 1'h0 : _GEN_32; // @[InstTypeDeco.scala 24:24 InstTypeDeco.scala 34:24 InstTypeDeco.scala 44:24 InstTypeDeco.scala 54:24 InstTypeDeco.scala 64:24 InstTypeDeco.scala 74:24 InstTypeDeco.scala 84:24 InstTypeDeco.scala 94:24 InstTypeDeco.scala 104:24]
  assign io_Jalr = _T_24 ? 1'h0 : _GEN_33; // @[InstTypeDeco.scala 25:25 InstTypeDeco.scala 35:25 InstTypeDeco.scala 45:25 InstTypeDeco.scala 55:25 InstTypeDeco.scala 65:25 InstTypeDeco.scala 75:25 InstTypeDeco.scala 85:25 InstTypeDeco.scala 95:25 InstTypeDeco.scala 105:25]
  assign io_Lui = _T_24 ? 1'h0 : _GEN_34; // @[InstTypeDeco.scala 26:24 InstTypeDeco.scala 36:24 InstTypeDeco.scala 46:24 InstTypeDeco.scala 56:24 InstTypeDeco.scala 66:24 InstTypeDeco.scala 76:24 InstTypeDeco.scala 86:24 InstTypeDeco.scala 96:24 InstTypeDeco.scala 106:24]
endmodule
module CntrlDecode(
  input        io_R,
  input        io_Load,
  input        io_Store,
  input        io_Branch1,
  input        io_I,
  input        io_Jal,
  input        io_Jalr,
  input        io_Lui,
  output       io_MemWrite,
  output       io_Branch,
  output       io_MemRead,
  output       io_RegWrite,
  output       io_MemtoReg,
  output [2:0] io_AluOp,
  output [1:0] io_OpA,
  output       io_OpB,
  output [1:0] io_ExtSel,
  output [1:0] io_NextPc
);
  wire [2:0] _GEN_2; // @[CntrlDecode.scala 111:38]
  wire [1:0] _GEN_3; // @[CntrlDecode.scala 111:38]
  wire  _GEN_5; // @[CntrlDecode.scala 99:39]
  wire [2:0] _GEN_6; // @[CntrlDecode.scala 99:39]
  wire [1:0] _GEN_7; // @[CntrlDecode.scala 99:39]
  wire  _GEN_8; // @[CntrlDecode.scala 99:39]
  wire [1:0] _GEN_9; // @[CntrlDecode.scala 99:39]
  wire  _GEN_11; // @[CntrlDecode.scala 87:38]
  wire [2:0] _GEN_12; // @[CntrlDecode.scala 87:38]
  wire [1:0] _GEN_13; // @[CntrlDecode.scala 87:38]
  wire  _GEN_14; // @[CntrlDecode.scala 87:38]
  wire [1:0] _GEN_15; // @[CntrlDecode.scala 87:38]
  wire  _GEN_17; // @[CntrlDecode.scala 75:36]
  wire [2:0] _GEN_18; // @[CntrlDecode.scala 75:36]
  wire [1:0] _GEN_19; // @[CntrlDecode.scala 75:36]
  wire  _GEN_20; // @[CntrlDecode.scala 75:36]
  wire  _GEN_21; // @[CntrlDecode.scala 75:36]
  wire [1:0] _GEN_22; // @[CntrlDecode.scala 75:36]
  wire  _GEN_25; // @[CntrlDecode.scala 63:39]
  wire [2:0] _GEN_26; // @[CntrlDecode.scala 63:39]
  wire [1:0] _GEN_27; // @[CntrlDecode.scala 63:39]
  wire  _GEN_28; // @[CntrlDecode.scala 63:39]
  wire  _GEN_29; // @[CntrlDecode.scala 63:39]
  wire [1:0] _GEN_30; // @[CntrlDecode.scala 63:39]
  wire  _GEN_32; // @[CntrlDecode.scala 51:40]
  wire  _GEN_34; // @[CntrlDecode.scala 51:40]
  wire [2:0] _GEN_35; // @[CntrlDecode.scala 51:40]
  wire [1:0] _GEN_36; // @[CntrlDecode.scala 51:40]
  wire  _GEN_37; // @[CntrlDecode.scala 51:40]
  wire [1:0] _GEN_38; // @[CntrlDecode.scala 51:40]
  wire [1:0] _GEN_39; // @[CntrlDecode.scala 51:40]
  wire  _GEN_40; // @[CntrlDecode.scala 39:39]
  wire  _GEN_41; // @[CntrlDecode.scala 39:39]
  wire  _GEN_43; // @[CntrlDecode.scala 39:39]
  wire [2:0] _GEN_44; // @[CntrlDecode.scala 39:39]
  wire [1:0] _GEN_45; // @[CntrlDecode.scala 39:39]
  wire  _GEN_46; // @[CntrlDecode.scala 39:39]
  wire [1:0] _GEN_47; // @[CntrlDecode.scala 39:39]
  wire [1:0] _GEN_48; // @[CntrlDecode.scala 39:39]
  assign _GEN_2 = io_Lui ? 3'h6 : 3'h7; // @[CntrlDecode.scala 111:38]
  assign _GEN_3 = io_Lui ? 2'h3 : 2'h0; // @[CntrlDecode.scala 111:38]
  assign _GEN_5 = io_Jalr ? 1'h1 : io_Lui; // @[CntrlDecode.scala 99:39]
  assign _GEN_6 = io_Jalr ? 3'h3 : _GEN_2; // @[CntrlDecode.scala 99:39]
  assign _GEN_7 = io_Jalr ? 2'h2 : _GEN_3; // @[CntrlDecode.scala 99:39]
  assign _GEN_8 = io_Jalr ? 1'h0 : io_Lui; // @[CntrlDecode.scala 99:39]
  assign _GEN_9 = io_Jalr ? 2'h3 : 2'h0; // @[CntrlDecode.scala 99:39]
  assign _GEN_11 = io_Jal ? 1'h1 : _GEN_5; // @[CntrlDecode.scala 87:38]
  assign _GEN_12 = io_Jal ? 3'h3 : _GEN_6; // @[CntrlDecode.scala 87:38]
  assign _GEN_13 = io_Jal ? 2'h2 : _GEN_7; // @[CntrlDecode.scala 87:38]
  assign _GEN_14 = io_Jal ? 1'h0 : _GEN_8; // @[CntrlDecode.scala 87:38]
  assign _GEN_15 = io_Jal ? 2'h2 : _GEN_9; // @[CntrlDecode.scala 87:38]
  assign _GEN_17 = io_I ? 1'h1 : _GEN_11; // @[CntrlDecode.scala 75:36]
  assign _GEN_18 = io_I ? 3'h1 : _GEN_12; // @[CntrlDecode.scala 75:36]
  assign _GEN_19 = io_I ? 2'h0 : _GEN_13; // @[CntrlDecode.scala 75:36]
  assign _GEN_20 = io_I ? 1'h1 : _GEN_14; // @[CntrlDecode.scala 75:36]
  assign _GEN_21 = io_I ? 1'h0 : _GEN_14; // @[CntrlDecode.scala 75:36]
  assign _GEN_22 = io_I ? 2'h0 : _GEN_15; // @[CntrlDecode.scala 75:36]
  assign _GEN_25 = io_Branch1 ? 1'h0 : _GEN_17; // @[CntrlDecode.scala 63:39]
  assign _GEN_26 = io_Branch1 ? 3'h2 : _GEN_18; // @[CntrlDecode.scala 63:39]
  assign _GEN_27 = io_Branch1 ? 2'h0 : _GEN_19; // @[CntrlDecode.scala 63:39]
  assign _GEN_28 = io_Branch1 ? 1'h0 : _GEN_20; // @[CntrlDecode.scala 63:39]
  assign _GEN_29 = io_Branch1 ? 1'h0 : _GEN_21; // @[CntrlDecode.scala 63:39]
  assign _GEN_30 = io_Branch1 ? 2'h1 : _GEN_22; // @[CntrlDecode.scala 63:39]
  assign _GEN_32 = io_Store ? 1'h0 : io_Branch1; // @[CntrlDecode.scala 51:40]
  assign _GEN_34 = io_Store ? 1'h0 : _GEN_25; // @[CntrlDecode.scala 51:40]
  assign _GEN_35 = io_Store ? 3'h5 : _GEN_26; // @[CntrlDecode.scala 51:40]
  assign _GEN_36 = io_Store ? 2'h0 : _GEN_27; // @[CntrlDecode.scala 51:40]
  assign _GEN_37 = io_Store ? 1'h1 : _GEN_28; // @[CntrlDecode.scala 51:40]
  assign _GEN_38 = io_Store ? 2'h2 : {{1'd0}, _GEN_29}; // @[CntrlDecode.scala 51:40]
  assign _GEN_39 = io_Store ? 2'h0 : _GEN_30; // @[CntrlDecode.scala 51:40]
  assign _GEN_40 = io_Load ? 1'h0 : io_Store; // @[CntrlDecode.scala 39:39]
  assign _GEN_41 = io_Load ? 1'h0 : _GEN_32; // @[CntrlDecode.scala 39:39]
  assign _GEN_43 = io_Load ? 1'h1 : _GEN_34; // @[CntrlDecode.scala 39:39]
  assign _GEN_44 = io_Load ? 3'h4 : _GEN_35; // @[CntrlDecode.scala 39:39]
  assign _GEN_45 = io_Load ? 2'h0 : _GEN_36; // @[CntrlDecode.scala 39:39]
  assign _GEN_46 = io_Load ? 1'h1 : _GEN_37; // @[CntrlDecode.scala 39:39]
  assign _GEN_47 = io_Load ? 2'h0 : _GEN_38; // @[CntrlDecode.scala 39:39]
  assign _GEN_48 = io_Load ? 2'h0 : _GEN_39; // @[CntrlDecode.scala 39:39]
  assign io_MemWrite = io_R ? 1'h0 : _GEN_40; // @[CntrlDecode.scala 28:29 CntrlDecode.scala 40:29 CntrlDecode.scala 52:29 CntrlDecode.scala 64:29 CntrlDecode.scala 76:29 CntrlDecode.scala 88:29 CntrlDecode.scala 100:29 CntrlDecode.scala 112:29 CntrlDecode.scala 124:29]
  assign io_Branch = io_R ? 1'h0 : _GEN_41; // @[CntrlDecode.scala 29:27 CntrlDecode.scala 41:27 CntrlDecode.scala 53:27 CntrlDecode.scala 65:27 CntrlDecode.scala 77:27 CntrlDecode.scala 89:27 CntrlDecode.scala 101:27 CntrlDecode.scala 113:27 CntrlDecode.scala 125:27]
  assign io_MemRead = io_R ? 1'h0 : io_Load; // @[CntrlDecode.scala 30:28 CntrlDecode.scala 42:28 CntrlDecode.scala 54:28 CntrlDecode.scala 66:28 CntrlDecode.scala 78:28 CntrlDecode.scala 90:28 CntrlDecode.scala 102:28 CntrlDecode.scala 114:28 CntrlDecode.scala 126:28]
  assign io_RegWrite = io_R ? 1'h1 : _GEN_43; // @[CntrlDecode.scala 31:29 CntrlDecode.scala 43:29 CntrlDecode.scala 55:29 CntrlDecode.scala 67:29 CntrlDecode.scala 79:29 CntrlDecode.scala 91:29 CntrlDecode.scala 103:29 CntrlDecode.scala 115:29 CntrlDecode.scala 127:29]
  assign io_MemtoReg = io_R ? 1'h0 : io_Load; // @[CntrlDecode.scala 32:29 CntrlDecode.scala 44:29 CntrlDecode.scala 56:29 CntrlDecode.scala 68:29 CntrlDecode.scala 80:29 CntrlDecode.scala 92:29 CntrlDecode.scala 104:29 CntrlDecode.scala 116:29 CntrlDecode.scala 128:29]
  assign io_AluOp = io_R ? 3'h0 : _GEN_44; // @[CntrlDecode.scala 33:26 CntrlDecode.scala 45:26 CntrlDecode.scala 57:26 CntrlDecode.scala 69:26 CntrlDecode.scala 81:26 CntrlDecode.scala 93:26 CntrlDecode.scala 105:26 CntrlDecode.scala 117:26 CntrlDecode.scala 129:26]
  assign io_OpA = io_R ? 2'h0 : _GEN_45; // @[CntrlDecode.scala 34:24 CntrlDecode.scala 46:24 CntrlDecode.scala 58:24 CntrlDecode.scala 70:24 CntrlDecode.scala 82:24 CntrlDecode.scala 94:24 CntrlDecode.scala 106:24 CntrlDecode.scala 118:24 CntrlDecode.scala 130:24]
  assign io_OpB = io_R ? 1'h0 : _GEN_46; // @[CntrlDecode.scala 35:24 CntrlDecode.scala 47:24 CntrlDecode.scala 59:24 CntrlDecode.scala 71:24 CntrlDecode.scala 83:24 CntrlDecode.scala 95:24 CntrlDecode.scala 107:24 CntrlDecode.scala 119:24 CntrlDecode.scala 131:24]
  assign io_ExtSel = io_R ? 2'h0 : _GEN_47; // @[CntrlDecode.scala 36:27 CntrlDecode.scala 48:27 CntrlDecode.scala 60:27 CntrlDecode.scala 72:27 CntrlDecode.scala 84:27 CntrlDecode.scala 96:27 CntrlDecode.scala 108:27 CntrlDecode.scala 120:27 CntrlDecode.scala 132:27]
  assign io_NextPc = io_R ? 2'h0 : _GEN_48; // @[CntrlDecode.scala 37:27 CntrlDecode.scala 49:27 CntrlDecode.scala 61:27 CntrlDecode.scala 73:27 CntrlDecode.scala 85:27 CntrlDecode.scala 97:27 CntrlDecode.scala 109:27 CntrlDecode.scala 121:27 CntrlDecode.scala 133:27]
endmodule
module Control(
  input  [6:0] io_opcode,
  output       io_MemWrite,
  output       io_Branch,
  output       io_MemRead,
  output       io_RegWrite,
  output       io_MemtoReg,
  output [2:0] io_AluOp,
  output [1:0] io_OpA,
  output       io_OpB,
  output [1:0] io_ExtSel,
  output [1:0] io_NextPc
);
  wire [6:0] c1_io_opcode; // @[Control.scala 20:24]
  wire  c1_io_R; // @[Control.scala 20:24]
  wire  c1_io_Load; // @[Control.scala 20:24]
  wire  c1_io_Store; // @[Control.scala 20:24]
  wire  c1_io_Branch; // @[Control.scala 20:24]
  wire  c1_io_I; // @[Control.scala 20:24]
  wire  c1_io_Jal; // @[Control.scala 20:24]
  wire  c1_io_Jalr; // @[Control.scala 20:24]
  wire  c1_io_Lui; // @[Control.scala 20:24]
  wire  c2_io_R; // @[Control.scala 21:24]
  wire  c2_io_Load; // @[Control.scala 21:24]
  wire  c2_io_Store; // @[Control.scala 21:24]
  wire  c2_io_Branch1; // @[Control.scala 21:24]
  wire  c2_io_I; // @[Control.scala 21:24]
  wire  c2_io_Jal; // @[Control.scala 21:24]
  wire  c2_io_Jalr; // @[Control.scala 21:24]
  wire  c2_io_Lui; // @[Control.scala 21:24]
  wire  c2_io_MemWrite; // @[Control.scala 21:24]
  wire  c2_io_Branch; // @[Control.scala 21:24]
  wire  c2_io_MemRead; // @[Control.scala 21:24]
  wire  c2_io_RegWrite; // @[Control.scala 21:24]
  wire  c2_io_MemtoReg; // @[Control.scala 21:24]
  wire [2:0] c2_io_AluOp; // @[Control.scala 21:24]
  wire [1:0] c2_io_OpA; // @[Control.scala 21:24]
  wire  c2_io_OpB; // @[Control.scala 21:24]
  wire [1:0] c2_io_ExtSel; // @[Control.scala 21:24]
  wire [1:0] c2_io_NextPc; // @[Control.scala 21:24]
  InstTypeDeco c1 ( // @[Control.scala 20:24]
    .io_opcode(c1_io_opcode),
    .io_R(c1_io_R),
    .io_Load(c1_io_Load),
    .io_Store(c1_io_Store),
    .io_Branch(c1_io_Branch),
    .io_I(c1_io_I),
    .io_Jal(c1_io_Jal),
    .io_Jalr(c1_io_Jalr),
    .io_Lui(c1_io_Lui)
  );
  CntrlDecode c2 ( // @[Control.scala 21:24]
    .io_R(c2_io_R),
    .io_Load(c2_io_Load),
    .io_Store(c2_io_Store),
    .io_Branch1(c2_io_Branch1),
    .io_I(c2_io_I),
    .io_Jal(c2_io_Jal),
    .io_Jalr(c2_io_Jalr),
    .io_Lui(c2_io_Lui),
    .io_MemWrite(c2_io_MemWrite),
    .io_Branch(c2_io_Branch),
    .io_MemRead(c2_io_MemRead),
    .io_RegWrite(c2_io_RegWrite),
    .io_MemtoReg(c2_io_MemtoReg),
    .io_AluOp(c2_io_AluOp),
    .io_OpA(c2_io_OpA),
    .io_OpB(c2_io_OpB),
    .io_ExtSel(c2_io_ExtSel),
    .io_NextPc(c2_io_NextPc)
  );
  assign io_MemWrite = c2_io_MemWrite; // @[Control.scala 34:21]
  assign io_Branch = c2_io_Branch; // @[Control.scala 35:19]
  assign io_MemRead = c2_io_MemRead; // @[Control.scala 36:20]
  assign io_RegWrite = c2_io_RegWrite; // @[Control.scala 37:21]
  assign io_MemtoReg = c2_io_MemtoReg; // @[Control.scala 38:21]
  assign io_AluOp = c2_io_AluOp; // @[Control.scala 39:18]
  assign io_OpA = c2_io_OpA; // @[Control.scala 40:16]
  assign io_OpB = c2_io_OpB; // @[Control.scala 41:16]
  assign io_ExtSel = c2_io_ExtSel; // @[Control.scala 42:19]
  assign io_NextPc = c2_io_NextPc; // @[Control.scala 43:19]
  assign c1_io_opcode = io_opcode; // @[Control.scala 23:22]
  assign c2_io_R = c1_io_R; // @[Control.scala 25:17]
  assign c2_io_Load = c1_io_Load; // @[Control.scala 26:20]
  assign c2_io_Store = c1_io_Store; // @[Control.scala 27:21]
  assign c2_io_Branch1 = c1_io_Branch; // @[Control.scala 28:23]
  assign c2_io_I = c1_io_I; // @[Control.scala 29:17]
  assign c2_io_Jal = c1_io_Jal; // @[Control.scala 30:19]
  assign c2_io_Jalr = c1_io_Jalr; // @[Control.scala 31:20]
  assign c2_io_Lui = c1_io_Lui; // @[Control.scala 32:19]
endmodule
module ImmGen(
  input  [31:0] io_instruction,
  input  [31:0] io_pc,
  output [31:0] io_s_imm,
  output [31:0] io_sb_imm,
  output [31:0] io_uj_imm,
  output [31:0] io_u_imm,
  output [31:0] io_i_imm
);
  wire [6:0] _T_19; // @[ImmGen.scala 18:42]
  wire [4:0] _T_20; // @[ImmGen.scala 18:64]
  wire [11:0] s_imm13; // @[Cat.scala 30:58]
  wire  _T_21; // @[ImmGen.scala 19:41]
  wire [19:0] _T_25; // @[Bitwise.scala 72:12]
  wire [31:0] _T_26; // @[Cat.scala 30:58]
  wire  _T_28; // @[ImmGen.scala 21:43]
  wire  _T_29; // @[ImmGen.scala 21:62]
  wire [5:0] _T_30; // @[ImmGen.scala 21:80]
  wire [3:0] _T_31; // @[ImmGen.scala 21:102]
  wire [12:0] sb_imm13; // @[Cat.scala 30:58]
  wire  _T_36; // @[ImmGen.scala 22:44]
  wire [18:0] _T_40; // @[Bitwise.scala 72:12]
  wire [31:0] _T_41; // @[Cat.scala 30:58]
  wire [32:0] _T_42; // @[ImmGen.scala 22:61]
  wire [31:0] _T_43; // @[ImmGen.scala 22:61]
  wire [7:0] _T_46; // @[ImmGen.scala 24:62]
  wire  _T_47; // @[ImmGen.scala 24:84]
  wire [9:0] _T_48; // @[ImmGen.scala 24:103]
  wire [20:0] uj_imm21; // @[Cat.scala 30:58]
  wire  _T_53; // @[ImmGen.scala 25:44]
  wire [11:0] _T_57; // @[Bitwise.scala 72:12]
  wire [32:0] _T_58; // @[Cat.scala 30:58]
  wire [32:0] _GEN_0; // @[ImmGen.scala 25:61]
  wire [33:0] _T_59; // @[ImmGen.scala 25:61]
  wire [32:0] _T_60; // @[ImmGen.scala 25:61]
  wire [32:0] _T_61; // @[ImmGen.scala 25:70]
  wire [11:0] _T_66; // @[Bitwise.scala 72:12]
  wire [19:0] _T_67; // @[ImmGen.scala 27:69]
  wire [31:0] _T_68; // @[Cat.scala 30:58]
  wire [43:0] _GEN_1; // @[ImmGen.scala 27:79]
  wire [43:0] _T_69; // @[ImmGen.scala 27:79]
  wire [43:0] _T_70; // @[ImmGen.scala 27:86]
  wire [19:0] _T_75; // @[Bitwise.scala 72:12]
  wire [11:0] _T_76; // @[ImmGen.scala 29:68]
  wire [31:0] _T_77; // @[Cat.scala 30:58]
  wire [31:0] _GEN_2; // @[ImmGen.scala 25:19]
  wire [31:0] _GEN_3; // @[ImmGen.scala 27:18]
  assign _T_19 = io_instruction[31:25]; // @[ImmGen.scala 18:42]
  assign _T_20 = io_instruction[11:7]; // @[ImmGen.scala 18:64]
  assign s_imm13 = {_T_19,_T_20}; // @[Cat.scala 30:58]
  assign _T_21 = s_imm13[11]; // @[ImmGen.scala 19:41]
  assign _T_25 = _T_21 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  assign _T_26 = {_T_25,_T_19,_T_20}; // @[Cat.scala 30:58]
  assign _T_28 = io_instruction[31]; // @[ImmGen.scala 21:43]
  assign _T_29 = io_instruction[7]; // @[ImmGen.scala 21:62]
  assign _T_30 = io_instruction[30:25]; // @[ImmGen.scala 21:80]
  assign _T_31 = io_instruction[11:8]; // @[ImmGen.scala 21:102]
  assign sb_imm13 = {_T_28,_T_29,_T_30,_T_31,1'h0}; // @[Cat.scala 30:58]
  assign _T_36 = sb_imm13[12]; // @[ImmGen.scala 22:44]
  assign _T_40 = _T_36 ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12]
  assign _T_41 = {_T_40,_T_28,_T_29,_T_30,_T_31,1'h0}; // @[Cat.scala 30:58]
  assign _T_42 = _T_41 + io_pc; // @[ImmGen.scala 22:61]
  assign _T_43 = _T_41 + io_pc; // @[ImmGen.scala 22:61]
  assign _T_46 = io_instruction[19:12]; // @[ImmGen.scala 24:62]
  assign _T_47 = io_instruction[20]; // @[ImmGen.scala 24:84]
  assign _T_48 = io_instruction[30:21]; // @[ImmGen.scala 24:103]
  assign uj_imm21 = {_T_28,_T_46,_T_47,_T_48,1'h0}; // @[Cat.scala 30:58]
  assign _T_53 = uj_imm21[20]; // @[ImmGen.scala 25:44]
  assign _T_57 = _T_53 ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  assign _T_58 = {_T_57,_T_28,_T_46,_T_47,_T_48,1'h0}; // @[Cat.scala 30:58]
  assign _GEN_0 = {{1'd0}, io_pc}; // @[ImmGen.scala 25:61]
  assign _T_59 = _T_58 + _GEN_0; // @[ImmGen.scala 25:61]
  assign _T_60 = _T_58 + _GEN_0; // @[ImmGen.scala 25:61]
  assign _T_61 = $signed(_T_60); // @[ImmGen.scala 25:70]
  assign _T_66 = _T_28 ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  assign _T_67 = io_instruction[31:12]; // @[ImmGen.scala 27:69]
  assign _T_68 = {_T_66,_T_67}; // @[Cat.scala 30:58]
  assign _GEN_1 = {{12'd0}, _T_68}; // @[ImmGen.scala 27:79]
  assign _T_69 = _GEN_1 << 12; // @[ImmGen.scala 27:79]
  assign _T_70 = $signed(_T_69); // @[ImmGen.scala 27:86]
  assign _T_75 = _T_28 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  assign _T_76 = io_instruction[31:20]; // @[ImmGen.scala 29:68]
  assign _T_77 = {_T_75,_T_76}; // @[Cat.scala 30:58]
  assign io_s_imm = $signed(_T_26); // @[ImmGen.scala 19:18]
  assign io_sb_imm = $signed(_T_43); // @[ImmGen.scala 22:19]
  assign _GEN_2 = _T_61[31:0]; // @[ImmGen.scala 25:19]
  assign io_uj_imm = $signed(_GEN_2); // @[ImmGen.scala 25:19]
  assign _GEN_3 = _T_70[31:0]; // @[ImmGen.scala 27:18]
  assign io_u_imm = $signed(_GEN_3); // @[ImmGen.scala 27:18]
  assign io_i_imm = $signed(_T_77); // @[ImmGen.scala 29:18]
endmodule
module AluCntrl(
  input  [2:0] io_aluOp,
  input  [2:0] io_funct3,
  input        io_funct7,
  output [4:0] io_out
);
  wire  _T_14; // @[AluCntrl.scala 11:24]
  wire  _T_16; // @[AluCntrl.scala 11:49]
  wire  _T_17; // @[AluCntrl.scala 11:37]
  wire [4:0] _T_20; // @[Cat.scala 30:58]
  wire  _T_22; // @[AluCntrl.scala 12:29]
  wire  _T_24; // @[AluCntrl.scala 12:54]
  wire  _T_25; // @[AluCntrl.scala 12:42]
  wire  _T_28; // @[AluCntrl.scala 13:29]
  wire  _T_31; // @[AluCntrl.scala 14:29]
  wire [4:0] _T_33; // @[Cat.scala 30:58]
  wire [4:0] _GEN_1; // @[AluCntrl.scala 14:42]
  wire [4:0] _GEN_2; // @[AluCntrl.scala 13:42]
  wire [4:0] _GEN_3; // @[AluCntrl.scala 12:67]
  assign _T_14 = io_aluOp == 3'h0; // @[AluCntrl.scala 11:24]
  assign _T_16 = io_aluOp == 3'h1; // @[AluCntrl.scala 11:49]
  assign _T_17 = _T_14 | _T_16; // @[AluCntrl.scala 11:37]
  assign _T_20 = {1'h0,io_funct7,io_funct3}; // @[Cat.scala 30:58]
  assign _T_22 = io_aluOp == 3'h5; // @[AluCntrl.scala 12:29]
  assign _T_24 = io_aluOp == 3'h4; // @[AluCntrl.scala 12:54]
  assign _T_25 = _T_22 | _T_24; // @[AluCntrl.scala 12:42]
  assign _T_28 = io_aluOp == 3'h3; // @[AluCntrl.scala 13:29]
  assign _T_31 = io_aluOp == 3'h2; // @[AluCntrl.scala 14:29]
  assign _T_33 = {2'h2,io_funct3}; // @[Cat.scala 30:58]
  assign _GEN_1 = _T_31 ? _T_33 : 5'h0; // @[AluCntrl.scala 14:42]
  assign _GEN_2 = _T_28 ? 5'h1f : _GEN_1; // @[AluCntrl.scala 13:42]
  assign _GEN_3 = _T_25 ? 5'h0 : _GEN_2; // @[AluCntrl.scala 12:67]
  assign io_out = _T_17 ? _T_20 : _GEN_3; // @[AluCntrl.scala 11:70 AluCntrl.scala 12:75 AluCntrl.scala 13:50 AluCntrl.scala 14:50 AluCntrl.scala 15:50]
endmodule
module Register(
  input         clock,
  input         io_RegWrite,
  input  [4:0]  io_rs1_s,
  input  [4:0]  io_rs2_s,
  input  [4:0]  io_rd,
  input  [31:0] io_WriteData,
  output [31:0] io_rs1,
  output [31:0] io_rs2
);
  reg [31:0] register_0; // @[Register.scala 16:27]
  reg [31:0] _RAND_0;
  reg [31:0] register_1; // @[Register.scala 16:27]
  reg [31:0] _RAND_1;
  reg [31:0] register_2; // @[Register.scala 16:27]
  reg [31:0] _RAND_2;
  reg [31:0] register_3; // @[Register.scala 16:27]
  reg [31:0] _RAND_3;
  reg [31:0] register_4; // @[Register.scala 16:27]
  reg [31:0] _RAND_4;
  reg [31:0] register_5; // @[Register.scala 16:27]
  reg [31:0] _RAND_5;
  reg [31:0] register_6; // @[Register.scala 16:27]
  reg [31:0] _RAND_6;
  reg [31:0] register_7; // @[Register.scala 16:27]
  reg [31:0] _RAND_7;
  reg [31:0] register_8; // @[Register.scala 16:27]
  reg [31:0] _RAND_8;
  reg [31:0] register_9; // @[Register.scala 16:27]
  reg [31:0] _RAND_9;
  reg [31:0] register_10; // @[Register.scala 16:27]
  reg [31:0] _RAND_10;
  reg [31:0] register_11; // @[Register.scala 16:27]
  reg [31:0] _RAND_11;
  reg [31:0] register_12; // @[Register.scala 16:27]
  reg [31:0] _RAND_12;
  reg [31:0] register_13; // @[Register.scala 16:27]
  reg [31:0] _RAND_13;
  reg [31:0] register_14; // @[Register.scala 16:27]
  reg [31:0] _RAND_14;
  reg [31:0] register_15; // @[Register.scala 16:27]
  reg [31:0] _RAND_15;
  reg [31:0] register_16; // @[Register.scala 16:27]
  reg [31:0] _RAND_16;
  reg [31:0] register_17; // @[Register.scala 16:27]
  reg [31:0] _RAND_17;
  reg [31:0] register_18; // @[Register.scala 16:27]
  reg [31:0] _RAND_18;
  reg [31:0] register_19; // @[Register.scala 16:27]
  reg [31:0] _RAND_19;
  reg [31:0] register_20; // @[Register.scala 16:27]
  reg [31:0] _RAND_20;
  reg [31:0] register_21; // @[Register.scala 16:27]
  reg [31:0] _RAND_21;
  reg [31:0] register_22; // @[Register.scala 16:27]
  reg [31:0] _RAND_22;
  reg [31:0] register_23; // @[Register.scala 16:27]
  reg [31:0] _RAND_23;
  reg [31:0] register_24; // @[Register.scala 16:27]
  reg [31:0] _RAND_24;
  reg [31:0] register_25; // @[Register.scala 16:27]
  reg [31:0] _RAND_25;
  reg [31:0] register_26; // @[Register.scala 16:27]
  reg [31:0] _RAND_26;
  reg [31:0] register_27; // @[Register.scala 16:27]
  reg [31:0] _RAND_27;
  reg [31:0] register_28; // @[Register.scala 16:27]
  reg [31:0] _RAND_28;
  reg [31:0] register_29; // @[Register.scala 16:27]
  reg [31:0] _RAND_29;
  reg [31:0] register_30; // @[Register.scala 16:27]
  reg [31:0] _RAND_30;
  reg [31:0] register_31; // @[Register.scala 16:27]
  reg [31:0] _RAND_31;
  wire [31:0] _GEN_1; // @[Register.scala 19:16]
  wire [31:0] _GEN_2; // @[Register.scala 19:16]
  wire [31:0] _GEN_3; // @[Register.scala 19:16]
  wire [31:0] _GEN_4; // @[Register.scala 19:16]
  wire [31:0] _GEN_5; // @[Register.scala 19:16]
  wire [31:0] _GEN_6; // @[Register.scala 19:16]
  wire [31:0] _GEN_7; // @[Register.scala 19:16]
  wire [31:0] _GEN_8; // @[Register.scala 19:16]
  wire [31:0] _GEN_9; // @[Register.scala 19:16]
  wire [31:0] _GEN_10; // @[Register.scala 19:16]
  wire [31:0] _GEN_11; // @[Register.scala 19:16]
  wire [31:0] _GEN_12; // @[Register.scala 19:16]
  wire [31:0] _GEN_13; // @[Register.scala 19:16]
  wire [31:0] _GEN_14; // @[Register.scala 19:16]
  wire [31:0] _GEN_15; // @[Register.scala 19:16]
  wire [31:0] _GEN_16; // @[Register.scala 19:16]
  wire [31:0] _GEN_17; // @[Register.scala 19:16]
  wire [31:0] _GEN_18; // @[Register.scala 19:16]
  wire [31:0] _GEN_19; // @[Register.scala 19:16]
  wire [31:0] _GEN_20; // @[Register.scala 19:16]
  wire [31:0] _GEN_21; // @[Register.scala 19:16]
  wire [31:0] _GEN_22; // @[Register.scala 19:16]
  wire [31:0] _GEN_23; // @[Register.scala 19:16]
  wire [31:0] _GEN_24; // @[Register.scala 19:16]
  wire [31:0] _GEN_25; // @[Register.scala 19:16]
  wire [31:0] _GEN_26; // @[Register.scala 19:16]
  wire [31:0] _GEN_27; // @[Register.scala 19:16]
  wire [31:0] _GEN_28; // @[Register.scala 19:16]
  wire [31:0] _GEN_29; // @[Register.scala 19:16]
  wire [31:0] _GEN_30; // @[Register.scala 19:16]
  wire [31:0] _GEN_33; // @[Register.scala 20:16]
  wire [31:0] _GEN_34; // @[Register.scala 20:16]
  wire [31:0] _GEN_35; // @[Register.scala 20:16]
  wire [31:0] _GEN_36; // @[Register.scala 20:16]
  wire [31:0] _GEN_37; // @[Register.scala 20:16]
  wire [31:0] _GEN_38; // @[Register.scala 20:16]
  wire [31:0] _GEN_39; // @[Register.scala 20:16]
  wire [31:0] _GEN_40; // @[Register.scala 20:16]
  wire [31:0] _GEN_41; // @[Register.scala 20:16]
  wire [31:0] _GEN_42; // @[Register.scala 20:16]
  wire [31:0] _GEN_43; // @[Register.scala 20:16]
  wire [31:0] _GEN_44; // @[Register.scala 20:16]
  wire [31:0] _GEN_45; // @[Register.scala 20:16]
  wire [31:0] _GEN_46; // @[Register.scala 20:16]
  wire [31:0] _GEN_47; // @[Register.scala 20:16]
  wire [31:0] _GEN_48; // @[Register.scala 20:16]
  wire [31:0] _GEN_49; // @[Register.scala 20:16]
  wire [31:0] _GEN_50; // @[Register.scala 20:16]
  wire [31:0] _GEN_51; // @[Register.scala 20:16]
  wire [31:0] _GEN_52; // @[Register.scala 20:16]
  wire [31:0] _GEN_53; // @[Register.scala 20:16]
  wire [31:0] _GEN_54; // @[Register.scala 20:16]
  wire [31:0] _GEN_55; // @[Register.scala 20:16]
  wire [31:0] _GEN_56; // @[Register.scala 20:16]
  wire [31:0] _GEN_57; // @[Register.scala 20:16]
  wire [31:0] _GEN_58; // @[Register.scala 20:16]
  wire [31:0] _GEN_59; // @[Register.scala 20:16]
  wire [31:0] _GEN_60; // @[Register.scala 20:16]
  wire [31:0] _GEN_61; // @[Register.scala 20:16]
  wire [31:0] _GEN_62; // @[Register.scala 20:16]
  wire  _T_63; // @[Register.scala 22:28]
  wire [31:0] _GEN_65; // @[Register.scala 22:60]
  wire [31:0] _GEN_66; // @[Register.scala 22:60]
  wire [31:0] _GEN_67; // @[Register.scala 22:60]
  wire [31:0] _GEN_68; // @[Register.scala 22:60]
  wire [31:0] _GEN_69; // @[Register.scala 22:60]
  wire [31:0] _GEN_70; // @[Register.scala 22:60]
  wire [31:0] _GEN_71; // @[Register.scala 22:60]
  wire [31:0] _GEN_72; // @[Register.scala 22:60]
  wire [31:0] _GEN_73; // @[Register.scala 22:60]
  wire [31:0] _GEN_74; // @[Register.scala 22:60]
  wire [31:0] _GEN_75; // @[Register.scala 22:60]
  wire [31:0] _GEN_76; // @[Register.scala 22:60]
  wire [31:0] _GEN_77; // @[Register.scala 22:60]
  wire [31:0] _GEN_78; // @[Register.scala 22:60]
  wire [31:0] _GEN_79; // @[Register.scala 22:60]
  wire [31:0] _GEN_80; // @[Register.scala 22:60]
  wire [31:0] _GEN_81; // @[Register.scala 22:60]
  wire [31:0] _GEN_82; // @[Register.scala 22:60]
  wire [31:0] _GEN_83; // @[Register.scala 22:60]
  wire [31:0] _GEN_84; // @[Register.scala 22:60]
  wire [31:0] _GEN_85; // @[Register.scala 22:60]
  wire [31:0] _GEN_86; // @[Register.scala 22:60]
  wire [31:0] _GEN_87; // @[Register.scala 22:60]
  wire [31:0] _GEN_88; // @[Register.scala 22:60]
  wire [31:0] _GEN_89; // @[Register.scala 22:60]
  wire [31:0] _GEN_90; // @[Register.scala 22:60]
  wire [31:0] _GEN_91; // @[Register.scala 22:60]
  wire [31:0] _GEN_92; // @[Register.scala 22:60]
  wire [31:0] _GEN_93; // @[Register.scala 22:60]
  wire [31:0] _GEN_94; // @[Register.scala 22:60]
  wire [31:0] _GEN_95; // @[Register.scala 22:60]
  wire [31:0] _GEN_96; // @[Register.scala 23:45]
  wire [31:0] _GEN_97; // @[Register.scala 23:45]
  wire [31:0] _GEN_98; // @[Register.scala 23:45]
  wire [31:0] _GEN_99; // @[Register.scala 23:45]
  wire [31:0] _GEN_100; // @[Register.scala 23:45]
  wire [31:0] _GEN_101; // @[Register.scala 23:45]
  wire [31:0] _GEN_102; // @[Register.scala 23:45]
  wire [31:0] _GEN_103; // @[Register.scala 23:45]
  wire [31:0] _GEN_104; // @[Register.scala 23:45]
  wire [31:0] _GEN_105; // @[Register.scala 23:45]
  wire [31:0] _GEN_106; // @[Register.scala 23:45]
  wire [31:0] _GEN_107; // @[Register.scala 23:45]
  wire [31:0] _GEN_108; // @[Register.scala 23:45]
  wire [31:0] _GEN_109; // @[Register.scala 23:45]
  wire [31:0] _GEN_110; // @[Register.scala 23:45]
  wire [31:0] _GEN_111; // @[Register.scala 23:45]
  wire [31:0] _GEN_112; // @[Register.scala 23:45]
  wire [31:0] _GEN_113; // @[Register.scala 23:45]
  wire [31:0] _GEN_114; // @[Register.scala 23:45]
  wire [31:0] _GEN_115; // @[Register.scala 23:45]
  wire [31:0] _GEN_116; // @[Register.scala 23:45]
  wire [31:0] _GEN_117; // @[Register.scala 23:45]
  wire [31:0] _GEN_118; // @[Register.scala 23:45]
  wire [31:0] _GEN_119; // @[Register.scala 23:45]
  wire [31:0] _GEN_120; // @[Register.scala 23:45]
  wire [31:0] _GEN_121; // @[Register.scala 23:45]
  wire [31:0] _GEN_122; // @[Register.scala 23:45]
  wire [31:0] _GEN_123; // @[Register.scala 23:45]
  wire [31:0] _GEN_124; // @[Register.scala 23:45]
  wire [31:0] _GEN_125; // @[Register.scala 23:45]
  wire [31:0] _GEN_126; // @[Register.scala 23:45]
  wire [31:0] _GEN_127; // @[Register.scala 23:45]
  wire [31:0] _GEN_129; // @[Register.scala 22:43]
  wire [31:0] _GEN_130; // @[Register.scala 22:43]
  wire [31:0] _GEN_131; // @[Register.scala 22:43]
  wire [31:0] _GEN_132; // @[Register.scala 22:43]
  wire [31:0] _GEN_133; // @[Register.scala 22:43]
  wire [31:0] _GEN_134; // @[Register.scala 22:43]
  wire [31:0] _GEN_135; // @[Register.scala 22:43]
  wire [31:0] _GEN_136; // @[Register.scala 22:43]
  wire [31:0] _GEN_137; // @[Register.scala 22:43]
  wire [31:0] _GEN_138; // @[Register.scala 22:43]
  wire [31:0] _GEN_139; // @[Register.scala 22:43]
  wire [31:0] _GEN_140; // @[Register.scala 22:43]
  wire [31:0] _GEN_141; // @[Register.scala 22:43]
  wire [31:0] _GEN_142; // @[Register.scala 22:43]
  wire [31:0] _GEN_143; // @[Register.scala 22:43]
  wire [31:0] _GEN_144; // @[Register.scala 22:43]
  wire [31:0] _GEN_145; // @[Register.scala 22:43]
  wire [31:0] _GEN_146; // @[Register.scala 22:43]
  wire [31:0] _GEN_147; // @[Register.scala 22:43]
  wire [31:0] _GEN_148; // @[Register.scala 22:43]
  wire [31:0] _GEN_149; // @[Register.scala 22:43]
  wire [31:0] _GEN_150; // @[Register.scala 22:43]
  wire [31:0] _GEN_151; // @[Register.scala 22:43]
  wire [31:0] _GEN_152; // @[Register.scala 22:43]
  wire [31:0] _GEN_153; // @[Register.scala 22:43]
  wire [31:0] _GEN_154; // @[Register.scala 22:43]
  wire [31:0] _GEN_155; // @[Register.scala 22:43]
  wire [31:0] _GEN_156; // @[Register.scala 22:43]
  wire [31:0] _GEN_157; // @[Register.scala 22:43]
  wire [31:0] _GEN_158; // @[Register.scala 22:43]
  wire [31:0] _GEN_159; // @[Register.scala 22:43]
  wire [31:0] _GEN_160; // @[Register.scala 22:43]
  assign _GEN_1 = 5'h1 == io_rs1_s ? $signed(register_1) : $signed(register_0); // @[Register.scala 19:16]
  assign _GEN_2 = 5'h2 == io_rs1_s ? $signed(register_2) : $signed(_GEN_1); // @[Register.scala 19:16]
  assign _GEN_3 = 5'h3 == io_rs1_s ? $signed(register_3) : $signed(_GEN_2); // @[Register.scala 19:16]
  assign _GEN_4 = 5'h4 == io_rs1_s ? $signed(register_4) : $signed(_GEN_3); // @[Register.scala 19:16]
  assign _GEN_5 = 5'h5 == io_rs1_s ? $signed(register_5) : $signed(_GEN_4); // @[Register.scala 19:16]
  assign _GEN_6 = 5'h6 == io_rs1_s ? $signed(register_6) : $signed(_GEN_5); // @[Register.scala 19:16]
  assign _GEN_7 = 5'h7 == io_rs1_s ? $signed(register_7) : $signed(_GEN_6); // @[Register.scala 19:16]
  assign _GEN_8 = 5'h8 == io_rs1_s ? $signed(register_8) : $signed(_GEN_7); // @[Register.scala 19:16]
  assign _GEN_9 = 5'h9 == io_rs1_s ? $signed(register_9) : $signed(_GEN_8); // @[Register.scala 19:16]
  assign _GEN_10 = 5'ha == io_rs1_s ? $signed(register_10) : $signed(_GEN_9); // @[Register.scala 19:16]
  assign _GEN_11 = 5'hb == io_rs1_s ? $signed(register_11) : $signed(_GEN_10); // @[Register.scala 19:16]
  assign _GEN_12 = 5'hc == io_rs1_s ? $signed(register_12) : $signed(_GEN_11); // @[Register.scala 19:16]
  assign _GEN_13 = 5'hd == io_rs1_s ? $signed(register_13) : $signed(_GEN_12); // @[Register.scala 19:16]
  assign _GEN_14 = 5'he == io_rs1_s ? $signed(register_14) : $signed(_GEN_13); // @[Register.scala 19:16]
  assign _GEN_15 = 5'hf == io_rs1_s ? $signed(register_15) : $signed(_GEN_14); // @[Register.scala 19:16]
  assign _GEN_16 = 5'h10 == io_rs1_s ? $signed(register_16) : $signed(_GEN_15); // @[Register.scala 19:16]
  assign _GEN_17 = 5'h11 == io_rs1_s ? $signed(register_17) : $signed(_GEN_16); // @[Register.scala 19:16]
  assign _GEN_18 = 5'h12 == io_rs1_s ? $signed(register_18) : $signed(_GEN_17); // @[Register.scala 19:16]
  assign _GEN_19 = 5'h13 == io_rs1_s ? $signed(register_19) : $signed(_GEN_18); // @[Register.scala 19:16]
  assign _GEN_20 = 5'h14 == io_rs1_s ? $signed(register_20) : $signed(_GEN_19); // @[Register.scala 19:16]
  assign _GEN_21 = 5'h15 == io_rs1_s ? $signed(register_21) : $signed(_GEN_20); // @[Register.scala 19:16]
  assign _GEN_22 = 5'h16 == io_rs1_s ? $signed(register_22) : $signed(_GEN_21); // @[Register.scala 19:16]
  assign _GEN_23 = 5'h17 == io_rs1_s ? $signed(register_23) : $signed(_GEN_22); // @[Register.scala 19:16]
  assign _GEN_24 = 5'h18 == io_rs1_s ? $signed(register_24) : $signed(_GEN_23); // @[Register.scala 19:16]
  assign _GEN_25 = 5'h19 == io_rs1_s ? $signed(register_25) : $signed(_GEN_24); // @[Register.scala 19:16]
  assign _GEN_26 = 5'h1a == io_rs1_s ? $signed(register_26) : $signed(_GEN_25); // @[Register.scala 19:16]
  assign _GEN_27 = 5'h1b == io_rs1_s ? $signed(register_27) : $signed(_GEN_26); // @[Register.scala 19:16]
  assign _GEN_28 = 5'h1c == io_rs1_s ? $signed(register_28) : $signed(_GEN_27); // @[Register.scala 19:16]
  assign _GEN_29 = 5'h1d == io_rs1_s ? $signed(register_29) : $signed(_GEN_28); // @[Register.scala 19:16]
  assign _GEN_30 = 5'h1e == io_rs1_s ? $signed(register_30) : $signed(_GEN_29); // @[Register.scala 19:16]
  assign _GEN_33 = 5'h1 == io_rs2_s ? $signed(register_1) : $signed(register_0); // @[Register.scala 20:16]
  assign _GEN_34 = 5'h2 == io_rs2_s ? $signed(register_2) : $signed(_GEN_33); // @[Register.scala 20:16]
  assign _GEN_35 = 5'h3 == io_rs2_s ? $signed(register_3) : $signed(_GEN_34); // @[Register.scala 20:16]
  assign _GEN_36 = 5'h4 == io_rs2_s ? $signed(register_4) : $signed(_GEN_35); // @[Register.scala 20:16]
  assign _GEN_37 = 5'h5 == io_rs2_s ? $signed(register_5) : $signed(_GEN_36); // @[Register.scala 20:16]
  assign _GEN_38 = 5'h6 == io_rs2_s ? $signed(register_6) : $signed(_GEN_37); // @[Register.scala 20:16]
  assign _GEN_39 = 5'h7 == io_rs2_s ? $signed(register_7) : $signed(_GEN_38); // @[Register.scala 20:16]
  assign _GEN_40 = 5'h8 == io_rs2_s ? $signed(register_8) : $signed(_GEN_39); // @[Register.scala 20:16]
  assign _GEN_41 = 5'h9 == io_rs2_s ? $signed(register_9) : $signed(_GEN_40); // @[Register.scala 20:16]
  assign _GEN_42 = 5'ha == io_rs2_s ? $signed(register_10) : $signed(_GEN_41); // @[Register.scala 20:16]
  assign _GEN_43 = 5'hb == io_rs2_s ? $signed(register_11) : $signed(_GEN_42); // @[Register.scala 20:16]
  assign _GEN_44 = 5'hc == io_rs2_s ? $signed(register_12) : $signed(_GEN_43); // @[Register.scala 20:16]
  assign _GEN_45 = 5'hd == io_rs2_s ? $signed(register_13) : $signed(_GEN_44); // @[Register.scala 20:16]
  assign _GEN_46 = 5'he == io_rs2_s ? $signed(register_14) : $signed(_GEN_45); // @[Register.scala 20:16]
  assign _GEN_47 = 5'hf == io_rs2_s ? $signed(register_15) : $signed(_GEN_46); // @[Register.scala 20:16]
  assign _GEN_48 = 5'h10 == io_rs2_s ? $signed(register_16) : $signed(_GEN_47); // @[Register.scala 20:16]
  assign _GEN_49 = 5'h11 == io_rs2_s ? $signed(register_17) : $signed(_GEN_48); // @[Register.scala 20:16]
  assign _GEN_50 = 5'h12 == io_rs2_s ? $signed(register_18) : $signed(_GEN_49); // @[Register.scala 20:16]
  assign _GEN_51 = 5'h13 == io_rs2_s ? $signed(register_19) : $signed(_GEN_50); // @[Register.scala 20:16]
  assign _GEN_52 = 5'h14 == io_rs2_s ? $signed(register_20) : $signed(_GEN_51); // @[Register.scala 20:16]
  assign _GEN_53 = 5'h15 == io_rs2_s ? $signed(register_21) : $signed(_GEN_52); // @[Register.scala 20:16]
  assign _GEN_54 = 5'h16 == io_rs2_s ? $signed(register_22) : $signed(_GEN_53); // @[Register.scala 20:16]
  assign _GEN_55 = 5'h17 == io_rs2_s ? $signed(register_23) : $signed(_GEN_54); // @[Register.scala 20:16]
  assign _GEN_56 = 5'h18 == io_rs2_s ? $signed(register_24) : $signed(_GEN_55); // @[Register.scala 20:16]
  assign _GEN_57 = 5'h19 == io_rs2_s ? $signed(register_25) : $signed(_GEN_56); // @[Register.scala 20:16]
  assign _GEN_58 = 5'h1a == io_rs2_s ? $signed(register_26) : $signed(_GEN_57); // @[Register.scala 20:16]
  assign _GEN_59 = 5'h1b == io_rs2_s ? $signed(register_27) : $signed(_GEN_58); // @[Register.scala 20:16]
  assign _GEN_60 = 5'h1c == io_rs2_s ? $signed(register_28) : $signed(_GEN_59); // @[Register.scala 20:16]
  assign _GEN_61 = 5'h1d == io_rs2_s ? $signed(register_29) : $signed(_GEN_60); // @[Register.scala 20:16]
  assign _GEN_62 = 5'h1e == io_rs2_s ? $signed(register_30) : $signed(_GEN_61); // @[Register.scala 20:16]
  assign _T_63 = io_rd == 5'h0; // @[Register.scala 22:28]
  assign _GEN_65 = 5'h1 == io_rd ? $signed(32'sh0) : $signed(register_1); // @[Register.scala 22:60]
  assign _GEN_66 = 5'h2 == io_rd ? $signed(32'sh0) : $signed(32'sh200); // @[Register.scala 22:60]
  assign _GEN_67 = 5'h3 == io_rd ? $signed(32'sh0) : $signed(register_3); // @[Register.scala 22:60]
  assign _GEN_68 = 5'h4 == io_rd ? $signed(32'sh0) : $signed(register_4); // @[Register.scala 22:60]
  assign _GEN_69 = 5'h5 == io_rd ? $signed(32'sh0) : $signed(register_5); // @[Register.scala 22:60]
  assign _GEN_70 = 5'h6 == io_rd ? $signed(32'sh0) : $signed(register_6); // @[Register.scala 22:60]
  assign _GEN_71 = 5'h7 == io_rd ? $signed(32'sh0) : $signed(register_7); // @[Register.scala 22:60]
  assign _GEN_72 = 5'h8 == io_rd ? $signed(32'sh0) : $signed(register_8); // @[Register.scala 22:60]
  assign _GEN_73 = 5'h9 == io_rd ? $signed(32'sh0) : $signed(register_9); // @[Register.scala 22:60]
  assign _GEN_74 = 5'ha == io_rd ? $signed(32'sh0) : $signed(register_10); // @[Register.scala 22:60]
  assign _GEN_75 = 5'hb == io_rd ? $signed(32'sh0) : $signed(register_11); // @[Register.scala 22:60]
  assign _GEN_76 = 5'hc == io_rd ? $signed(32'sh0) : $signed(register_12); // @[Register.scala 22:60]
  assign _GEN_77 = 5'hd == io_rd ? $signed(32'sh0) : $signed(register_13); // @[Register.scala 22:60]
  assign _GEN_78 = 5'he == io_rd ? $signed(32'sh0) : $signed(register_14); // @[Register.scala 22:60]
  assign _GEN_79 = 5'hf == io_rd ? $signed(32'sh0) : $signed(register_15); // @[Register.scala 22:60]
  assign _GEN_80 = 5'h10 == io_rd ? $signed(32'sh0) : $signed(register_16); // @[Register.scala 22:60]
  assign _GEN_81 = 5'h11 == io_rd ? $signed(32'sh0) : $signed(register_17); // @[Register.scala 22:60]
  assign _GEN_82 = 5'h12 == io_rd ? $signed(32'sh0) : $signed(register_18); // @[Register.scala 22:60]
  assign _GEN_83 = 5'h13 == io_rd ? $signed(32'sh0) : $signed(register_19); // @[Register.scala 22:60]
  assign _GEN_84 = 5'h14 == io_rd ? $signed(32'sh0) : $signed(register_20); // @[Register.scala 22:60]
  assign _GEN_85 = 5'h15 == io_rd ? $signed(32'sh0) : $signed(register_21); // @[Register.scala 22:60]
  assign _GEN_86 = 5'h16 == io_rd ? $signed(32'sh0) : $signed(register_22); // @[Register.scala 22:60]
  assign _GEN_87 = 5'h17 == io_rd ? $signed(32'sh0) : $signed(register_23); // @[Register.scala 22:60]
  assign _GEN_88 = 5'h18 == io_rd ? $signed(32'sh0) : $signed(register_24); // @[Register.scala 22:60]
  assign _GEN_89 = 5'h19 == io_rd ? $signed(32'sh0) : $signed(register_25); // @[Register.scala 22:60]
  assign _GEN_90 = 5'h1a == io_rd ? $signed(32'sh0) : $signed(register_26); // @[Register.scala 22:60]
  assign _GEN_91 = 5'h1b == io_rd ? $signed(32'sh0) : $signed(register_27); // @[Register.scala 22:60]
  assign _GEN_92 = 5'h1c == io_rd ? $signed(32'sh0) : $signed(register_28); // @[Register.scala 22:60]
  assign _GEN_93 = 5'h1d == io_rd ? $signed(32'sh0) : $signed(register_29); // @[Register.scala 22:60]
  assign _GEN_94 = 5'h1e == io_rd ? $signed(32'sh0) : $signed(register_30); // @[Register.scala 22:60]
  assign _GEN_95 = 5'h1f == io_rd ? $signed(32'sh0) : $signed(register_31); // @[Register.scala 22:60]
  assign _GEN_96 = 5'h0 == io_rd ? $signed(io_WriteData) : $signed(32'sh0); // @[Register.scala 23:45]
  assign _GEN_97 = 5'h1 == io_rd ? $signed(io_WriteData) : $signed(register_1); // @[Register.scala 23:45]
  assign _GEN_98 = 5'h2 == io_rd ? $signed(io_WriteData) : $signed(32'sh200); // @[Register.scala 23:45]
  assign _GEN_99 = 5'h3 == io_rd ? $signed(io_WriteData) : $signed(register_3); // @[Register.scala 23:45]
  assign _GEN_100 = 5'h4 == io_rd ? $signed(io_WriteData) : $signed(register_4); // @[Register.scala 23:45]
  assign _GEN_101 = 5'h5 == io_rd ? $signed(io_WriteData) : $signed(register_5); // @[Register.scala 23:45]
  assign _GEN_102 = 5'h6 == io_rd ? $signed(io_WriteData) : $signed(register_6); // @[Register.scala 23:45]
  assign _GEN_103 = 5'h7 == io_rd ? $signed(io_WriteData) : $signed(register_7); // @[Register.scala 23:45]
  assign _GEN_104 = 5'h8 == io_rd ? $signed(io_WriteData) : $signed(register_8); // @[Register.scala 23:45]
  assign _GEN_105 = 5'h9 == io_rd ? $signed(io_WriteData) : $signed(register_9); // @[Register.scala 23:45]
  assign _GEN_106 = 5'ha == io_rd ? $signed(io_WriteData) : $signed(register_10); // @[Register.scala 23:45]
  assign _GEN_107 = 5'hb == io_rd ? $signed(io_WriteData) : $signed(register_11); // @[Register.scala 23:45]
  assign _GEN_108 = 5'hc == io_rd ? $signed(io_WriteData) : $signed(register_12); // @[Register.scala 23:45]
  assign _GEN_109 = 5'hd == io_rd ? $signed(io_WriteData) : $signed(register_13); // @[Register.scala 23:45]
  assign _GEN_110 = 5'he == io_rd ? $signed(io_WriteData) : $signed(register_14); // @[Register.scala 23:45]
  assign _GEN_111 = 5'hf == io_rd ? $signed(io_WriteData) : $signed(register_15); // @[Register.scala 23:45]
  assign _GEN_112 = 5'h10 == io_rd ? $signed(io_WriteData) : $signed(register_16); // @[Register.scala 23:45]
  assign _GEN_113 = 5'h11 == io_rd ? $signed(io_WriteData) : $signed(register_17); // @[Register.scala 23:45]
  assign _GEN_114 = 5'h12 == io_rd ? $signed(io_WriteData) : $signed(register_18); // @[Register.scala 23:45]
  assign _GEN_115 = 5'h13 == io_rd ? $signed(io_WriteData) : $signed(register_19); // @[Register.scala 23:45]
  assign _GEN_116 = 5'h14 == io_rd ? $signed(io_WriteData) : $signed(register_20); // @[Register.scala 23:45]
  assign _GEN_117 = 5'h15 == io_rd ? $signed(io_WriteData) : $signed(register_21); // @[Register.scala 23:45]
  assign _GEN_118 = 5'h16 == io_rd ? $signed(io_WriteData) : $signed(register_22); // @[Register.scala 23:45]
  assign _GEN_119 = 5'h17 == io_rd ? $signed(io_WriteData) : $signed(register_23); // @[Register.scala 23:45]
  assign _GEN_120 = 5'h18 == io_rd ? $signed(io_WriteData) : $signed(register_24); // @[Register.scala 23:45]
  assign _GEN_121 = 5'h19 == io_rd ? $signed(io_WriteData) : $signed(register_25); // @[Register.scala 23:45]
  assign _GEN_122 = 5'h1a == io_rd ? $signed(io_WriteData) : $signed(register_26); // @[Register.scala 23:45]
  assign _GEN_123 = 5'h1b == io_rd ? $signed(io_WriteData) : $signed(register_27); // @[Register.scala 23:45]
  assign _GEN_124 = 5'h1c == io_rd ? $signed(io_WriteData) : $signed(register_28); // @[Register.scala 23:45]
  assign _GEN_125 = 5'h1d == io_rd ? $signed(io_WriteData) : $signed(register_29); // @[Register.scala 23:45]
  assign _GEN_126 = 5'h1e == io_rd ? $signed(io_WriteData) : $signed(register_30); // @[Register.scala 23:45]
  assign _GEN_127 = 5'h1f == io_rd ? $signed(io_WriteData) : $signed(register_31); // @[Register.scala 23:45]
  assign _GEN_129 = _T_63 ? $signed(32'sh0) : $signed(_GEN_96); // @[Register.scala 22:43]
  assign _GEN_130 = _T_63 ? $signed(_GEN_65) : $signed(_GEN_97); // @[Register.scala 22:43]
  assign _GEN_131 = _T_63 ? $signed(_GEN_66) : $signed(_GEN_98); // @[Register.scala 22:43]
  assign _GEN_132 = _T_63 ? $signed(_GEN_67) : $signed(_GEN_99); // @[Register.scala 22:43]
  assign _GEN_133 = _T_63 ? $signed(_GEN_68) : $signed(_GEN_100); // @[Register.scala 22:43]
  assign _GEN_134 = _T_63 ? $signed(_GEN_69) : $signed(_GEN_101); // @[Register.scala 22:43]
  assign _GEN_135 = _T_63 ? $signed(_GEN_70) : $signed(_GEN_102); // @[Register.scala 22:43]
  assign _GEN_136 = _T_63 ? $signed(_GEN_71) : $signed(_GEN_103); // @[Register.scala 22:43]
  assign _GEN_137 = _T_63 ? $signed(_GEN_72) : $signed(_GEN_104); // @[Register.scala 22:43]
  assign _GEN_138 = _T_63 ? $signed(_GEN_73) : $signed(_GEN_105); // @[Register.scala 22:43]
  assign _GEN_139 = _T_63 ? $signed(_GEN_74) : $signed(_GEN_106); // @[Register.scala 22:43]
  assign _GEN_140 = _T_63 ? $signed(_GEN_75) : $signed(_GEN_107); // @[Register.scala 22:43]
  assign _GEN_141 = _T_63 ? $signed(_GEN_76) : $signed(_GEN_108); // @[Register.scala 22:43]
  assign _GEN_142 = _T_63 ? $signed(_GEN_77) : $signed(_GEN_109); // @[Register.scala 22:43]
  assign _GEN_143 = _T_63 ? $signed(_GEN_78) : $signed(_GEN_110); // @[Register.scala 22:43]
  assign _GEN_144 = _T_63 ? $signed(_GEN_79) : $signed(_GEN_111); // @[Register.scala 22:43]
  assign _GEN_145 = _T_63 ? $signed(_GEN_80) : $signed(_GEN_112); // @[Register.scala 22:43]
  assign _GEN_146 = _T_63 ? $signed(_GEN_81) : $signed(_GEN_113); // @[Register.scala 22:43]
  assign _GEN_147 = _T_63 ? $signed(_GEN_82) : $signed(_GEN_114); // @[Register.scala 22:43]
  assign _GEN_148 = _T_63 ? $signed(_GEN_83) : $signed(_GEN_115); // @[Register.scala 22:43]
  assign _GEN_149 = _T_63 ? $signed(_GEN_84) : $signed(_GEN_116); // @[Register.scala 22:43]
  assign _GEN_150 = _T_63 ? $signed(_GEN_85) : $signed(_GEN_117); // @[Register.scala 22:43]
  assign _GEN_151 = _T_63 ? $signed(_GEN_86) : $signed(_GEN_118); // @[Register.scala 22:43]
  assign _GEN_152 = _T_63 ? $signed(_GEN_87) : $signed(_GEN_119); // @[Register.scala 22:43]
  assign _GEN_153 = _T_63 ? $signed(_GEN_88) : $signed(_GEN_120); // @[Register.scala 22:43]
  assign _GEN_154 = _T_63 ? $signed(_GEN_89) : $signed(_GEN_121); // @[Register.scala 22:43]
  assign _GEN_155 = _T_63 ? $signed(_GEN_90) : $signed(_GEN_122); // @[Register.scala 22:43]
  assign _GEN_156 = _T_63 ? $signed(_GEN_91) : $signed(_GEN_123); // @[Register.scala 22:43]
  assign _GEN_157 = _T_63 ? $signed(_GEN_92) : $signed(_GEN_124); // @[Register.scala 22:43]
  assign _GEN_158 = _T_63 ? $signed(_GEN_93) : $signed(_GEN_125); // @[Register.scala 22:43]
  assign _GEN_159 = _T_63 ? $signed(_GEN_94) : $signed(_GEN_126); // @[Register.scala 22:43]
  assign _GEN_160 = _T_63 ? $signed(_GEN_95) : $signed(_GEN_127); // @[Register.scala 22:43]
  assign io_rs1 = 5'h1f == io_rs1_s ? $signed(register_31) : $signed(_GEN_30); // @[Register.scala 19:16]
  assign io_rs2 = 5'h1f == io_rs2_s ? $signed(register_31) : $signed(_GEN_62); // @[Register.scala 20:16]
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
  register_0 = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  register_1 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  register_2 = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  register_3 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  register_4 = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  register_5 = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  register_6 = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  register_7 = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  register_8 = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  register_9 = _RAND_9[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  register_10 = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  register_11 = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  register_12 = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  register_13 = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  register_14 = _RAND_14[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  register_15 = _RAND_15[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  register_16 = _RAND_16[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  register_17 = _RAND_17[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  register_18 = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  register_19 = _RAND_19[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  register_20 = _RAND_20[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  register_21 = _RAND_21[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {1{`RANDOM}};
  register_22 = _RAND_22[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  register_23 = _RAND_23[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  register_24 = _RAND_24[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {1{`RANDOM}};
  register_25 = _RAND_25[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_26 = {1{`RANDOM}};
  register_26 = _RAND_26[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_27 = {1{`RANDOM}};
  register_27 = _RAND_27[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_28 = {1{`RANDOM}};
  register_28 = _RAND_28[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_29 = {1{`RANDOM}};
  register_29 = _RAND_29[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_30 = {1{`RANDOM}};
  register_30 = _RAND_30[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_31 = {1{`RANDOM}};
  register_31 = _RAND_31[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (io_RegWrite) begin
      if (_T_63) begin
        register_0 <= 32'sh0;
      end else begin
        if (5'h0 == io_rd) begin
          register_0 <= io_WriteData;
        end else begin
          register_0 <= 32'sh0;
        end
      end
    end else begin
      register_0 <= 32'sh0;
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h1 == io_rd) begin
          register_1 <= 32'sh0;
        end
      end else begin
        if (5'h1 == io_rd) begin
          register_1 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h2 == io_rd) begin
          register_2 <= 32'sh0;
        end else begin
          register_2 <= 32'sh200;
        end
      end else begin
        if (5'h2 == io_rd) begin
          register_2 <= io_WriteData;
        end else begin
          register_2 <= 32'sh200;
        end
      end
    end else begin
      register_2 <= 32'sh200;
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h3 == io_rd) begin
          register_3 <= 32'sh0;
        end
      end else begin
        if (5'h3 == io_rd) begin
          register_3 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h4 == io_rd) begin
          register_4 <= 32'sh0;
        end
      end else begin
        if (5'h4 == io_rd) begin
          register_4 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h5 == io_rd) begin
          register_5 <= 32'sh0;
        end
      end else begin
        if (5'h5 == io_rd) begin
          register_5 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h6 == io_rd) begin
          register_6 <= 32'sh0;
        end
      end else begin
        if (5'h6 == io_rd) begin
          register_6 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h7 == io_rd) begin
          register_7 <= 32'sh0;
        end
      end else begin
        if (5'h7 == io_rd) begin
          register_7 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h8 == io_rd) begin
          register_8 <= 32'sh0;
        end
      end else begin
        if (5'h8 == io_rd) begin
          register_8 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h9 == io_rd) begin
          register_9 <= 32'sh0;
        end
      end else begin
        if (5'h9 == io_rd) begin
          register_9 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'ha == io_rd) begin
          register_10 <= 32'sh0;
        end
      end else begin
        if (5'ha == io_rd) begin
          register_10 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'hb == io_rd) begin
          register_11 <= 32'sh0;
        end
      end else begin
        if (5'hb == io_rd) begin
          register_11 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'hc == io_rd) begin
          register_12 <= 32'sh0;
        end
      end else begin
        if (5'hc == io_rd) begin
          register_12 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'hd == io_rd) begin
          register_13 <= 32'sh0;
        end
      end else begin
        if (5'hd == io_rd) begin
          register_13 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'he == io_rd) begin
          register_14 <= 32'sh0;
        end
      end else begin
        if (5'he == io_rd) begin
          register_14 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'hf == io_rd) begin
          register_15 <= 32'sh0;
        end
      end else begin
        if (5'hf == io_rd) begin
          register_15 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h10 == io_rd) begin
          register_16 <= 32'sh0;
        end
      end else begin
        if (5'h10 == io_rd) begin
          register_16 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h11 == io_rd) begin
          register_17 <= 32'sh0;
        end
      end else begin
        if (5'h11 == io_rd) begin
          register_17 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h12 == io_rd) begin
          register_18 <= 32'sh0;
        end
      end else begin
        if (5'h12 == io_rd) begin
          register_18 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h13 == io_rd) begin
          register_19 <= 32'sh0;
        end
      end else begin
        if (5'h13 == io_rd) begin
          register_19 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h14 == io_rd) begin
          register_20 <= 32'sh0;
        end
      end else begin
        if (5'h14 == io_rd) begin
          register_20 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h15 == io_rd) begin
          register_21 <= 32'sh0;
        end
      end else begin
        if (5'h15 == io_rd) begin
          register_21 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h16 == io_rd) begin
          register_22 <= 32'sh0;
        end
      end else begin
        if (5'h16 == io_rd) begin
          register_22 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h17 == io_rd) begin
          register_23 <= 32'sh0;
        end
      end else begin
        if (5'h17 == io_rd) begin
          register_23 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h18 == io_rd) begin
          register_24 <= 32'sh0;
        end
      end else begin
        if (5'h18 == io_rd) begin
          register_24 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h19 == io_rd) begin
          register_25 <= 32'sh0;
        end
      end else begin
        if (5'h19 == io_rd) begin
          register_25 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h1a == io_rd) begin
          register_26 <= 32'sh0;
        end
      end else begin
        if (5'h1a == io_rd) begin
          register_26 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h1b == io_rd) begin
          register_27 <= 32'sh0;
        end
      end else begin
        if (5'h1b == io_rd) begin
          register_27 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h1c == io_rd) begin
          register_28 <= 32'sh0;
        end
      end else begin
        if (5'h1c == io_rd) begin
          register_28 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h1d == io_rd) begin
          register_29 <= 32'sh0;
        end
      end else begin
        if (5'h1d == io_rd) begin
          register_29 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h1e == io_rd) begin
          register_30 <= 32'sh0;
        end
      end else begin
        if (5'h1e == io_rd) begin
          register_30 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_63) begin
        if (5'h1f == io_rd) begin
          register_31 <= 32'sh0;
        end
      end else begin
        if (5'h1f == io_rd) begin
          register_31 <= io_WriteData;
        end
      end
    end
  end
endmodule
module Memory(
  input         clock,
  input  [9:0]  io_wrAddr,
  output [31:0] io_rdData
);
  reg [31:0] mem [0:1023]; // @[Memory.scala 11:22]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_11_data; // @[Memory.scala 11:22]
  wire [9:0] mem__T_11_addr; // @[Memory.scala 11:22]
  assign mem__T_11_addr = io_wrAddr;
  assign mem__T_11_data = mem[mem__T_11_addr]; // @[Memory.scala 11:22]
  assign io_rdData = mem__T_11_data; // @[Memory.scala 12:19]
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
    mem[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  end
`endif // RANDOMIZE
endmodule
module Pc(
  input         clock,
  input         reset,
  input  [31:0] io_input,
  output [31:0] io_pc4,
  output [31:0] io_pc
);
  reg [31:0] reg$; // @[Pc.scala 10:26]
  reg [31:0] _RAND_0;
  wire [32:0] _T_14; // @[Pc.scala 12:23]
  assign _T_14 = reg$ + 32'h4; // @[Pc.scala 12:23]
  assign io_pc4 = reg$ + 32'h4; // @[Pc.scala 12:16]
  assign io_pc = reg$; // @[Pc.scala 13:15]
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
  reg$ = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg$ <= 32'h0;
    end else begin
      reg$ <= io_input;
    end
  end
endmodule
module Jalr(
  input  [31:0] io_in1,
  input  [31:0] io_in2,
  output [31:0] io_out
);
  wire [32:0] _T_11; // @[Jalr.scala 11:24]
  wire [31:0] _T_12; // @[Jalr.scala 11:24]
  wire [31:0] a; // @[Jalr.scala 11:24]
  wire [32:0] _GEN_0; // @[Jalr.scala 12:21]
  wire [32:0] _T_14; // @[Jalr.scala 12:21]
  wire [32:0] _T_15; // @[Jalr.scala 12:21]
  wire [31:0] _GEN_1; // @[Jalr.scala 12:16]
  assign _T_11 = $signed(io_in1) + $signed(io_in2); // @[Jalr.scala 11:24]
  assign _T_12 = $signed(io_in1) + $signed(io_in2); // @[Jalr.scala 11:24]
  assign a = $signed(_T_12); // @[Jalr.scala 11:24]
  assign _GEN_0 = {{1{a[31]}},a}; // @[Jalr.scala 12:21]
  assign _T_14 = $signed(_GEN_0) & $signed(33'shfffffffe); // @[Jalr.scala 12:21]
  assign _T_15 = $signed(_T_14); // @[Jalr.scala 12:21]
  assign _GEN_1 = _T_15[31:0]; // @[Jalr.scala 12:16]
  assign io_out = $signed(_GEN_1); // @[Jalr.scala 12:16]
endmodule
module MemoryD(
  input         clock,
  input  [7:0]  io_Addr,
  input  [31:0] io_Data,
  input         io_MemWrite,
  input         io_MemRead,
  output [31:0] io_out
);
  reg [31:0] mem [0:1023]; // @[MemoryD.scala 15:22]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_22_data; // @[MemoryD.scala 15:22]
  wire [9:0] mem__T_22_addr; // @[MemoryD.scala 15:22]
  wire [31:0] mem__T_19_data; // @[MemoryD.scala 15:22]
  wire [9:0] mem__T_19_addr; // @[MemoryD.scala 15:22]
  wire  mem__T_19_mask; // @[MemoryD.scala 15:22]
  wire  mem__T_19_en; // @[MemoryD.scala 15:22]
  assign mem__T_22_addr = {{2'd0}, io_Addr};
  assign mem__T_22_data = mem[mem__T_22_addr]; // @[MemoryD.scala 15:22]
  assign mem__T_19_data = io_Data;
  assign mem__T_19_addr = {{2'd0}, io_Addr};
  assign mem__T_19_mask = 1'h1;
  assign mem__T_19_en = io_MemWrite;
  assign io_out = mem__T_22_data; // @[MemoryD.scala 22:24]
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
    mem[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if(mem__T_19_en & mem__T_19_mask) begin
      mem[mem__T_19_addr] <= mem__T_19_data; // @[MemoryD.scala 15:22]
    end
  end
endmodule
module IF_ID_Reg(
  input         clock,
  input         reset,
  input  [31:0] io_pc_in,
  output [31:0] io_pc_out,
  input  [31:0] io_pc4_in,
  output [31:0] io_pc4_out,
  input  [31:0] io_inst_in,
  output [31:0] io_inst_out
);
  reg [31:0] pcreg; // @[IF_ID_Reg.scala 17:28]
  reg [31:0] _RAND_0;
  reg [31:0] pc4reg; // @[IF_ID_Reg.scala 18:29]
  reg [31:0] _RAND_1;
  reg [31:0] instreg; // @[IF_ID_Reg.scala 19:30]
  reg [31:0] _RAND_2;
  assign io_pc_out = pcreg; // @[IF_ID_Reg.scala 21:19]
  assign io_pc4_out = pc4reg; // @[IF_ID_Reg.scala 23:20]
  assign io_inst_out = instreg; // @[IF_ID_Reg.scala 25:21]
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
  pcreg = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  pc4reg = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  instreg = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      pcreg <= 32'h0;
    end else begin
      pcreg <= io_pc_in;
    end
    if (reset) begin
      pc4reg <= 32'h0;
    end else begin
      pc4reg <= io_pc4_in;
    end
    if (reset) begin
      instreg <= 32'h0;
    end else begin
      instreg <= io_inst_in;
    end
  end
endmodule
module ID_EX_Reg(
  input         clock,
  input         reset,
  input  [31:0] io_pc_in,
  output [31:0] io_pc_out,
  input  [31:0] io_pc4_in,
  output [31:0] io_pc4_out,
  input         io_MemWrite_in,
  input         io_MemRead_in,
  input         io_RegWrite_in,
  input         io_MemtoReg_in,
  input  [2:0]  io_AluOp_in,
  input  [1:0]  io_OpA_in,
  input         io_OpB_in,
  output        io_MemWrite_out,
  output        io_MemRead_out,
  output        io_RegWrite_out,
  output        io_MemtoReg_out,
  output [2:0]  io_AluOp_out,
  output [1:0]  io_OpA_out,
  output        io_OpB_out,
  input  [31:0] io_imm_in,
  output [31:0] io_imm_out,
  input  [2:0]  io_func3_in,
  input         io_func7_in,
  output [2:0]  io_func3_out,
  output        io_func7_out,
  input  [31:0] io_rs1_in,
  input  [31:0] io_rs2_in,
  output [31:0] io_rs1_out,
  output [31:0] io_rs2_out,
  input  [4:0]  io_rs1_s_in,
  input  [4:0]  io_rs2_s_in,
  output [4:0]  io_rs1_s_out,
  output [4:0]  io_rs2_s_out,
  input  [4:0]  io_rd_in,
  output [4:0]  io_rd_out
);
  reg [31:0] pcreg; // @[ID_EX_Reg.scala 54:28]
  reg [31:0] _RAND_0;
  reg [31:0] pc4reg; // @[ID_EX_Reg.scala 55:29]
  reg [31:0] _RAND_1;
  reg [31:0] immreg; // @[ID_EX_Reg.scala 62:29]
  reg [31:0] _RAND_2;
  reg [2:0] func3reg; // @[ID_EX_Reg.scala 66:31]
  reg [31:0] _RAND_3;
  reg  func7reg; // @[ID_EX_Reg.scala 69:31]
  reg [31:0] _RAND_4;
  reg [31:0] rs1reg; // @[ID_EX_Reg.scala 73:29]
  reg [31:0] _RAND_5;
  reg [31:0] rs2reg; // @[ID_EX_Reg.scala 76:29]
  reg [31:0] _RAND_6;
  reg [4:0] rs1sreg; // @[ID_EX_Reg.scala 79:30]
  reg [31:0] _RAND_7;
  reg [4:0] rs2sreg; // @[ID_EX_Reg.scala 82:30]
  reg [31:0] _RAND_8;
  reg [4:0] rdreg; // @[ID_EX_Reg.scala 85:28]
  reg [31:0] _RAND_9;
  reg  MemWritereg; // @[ID_EX_Reg.scala 89:34]
  reg [31:0] _RAND_10;
  reg  MemReadreg; // @[ID_EX_Reg.scala 91:33]
  reg [31:0] _RAND_11;
  reg  RegWritereg; // @[ID_EX_Reg.scala 92:34]
  reg [31:0] _RAND_12;
  reg  MemtoRegreg; // @[ID_EX_Reg.scala 93:34]
  reg [31:0] _RAND_13;
  reg [2:0] AluOpreg; // @[ID_EX_Reg.scala 94:31]
  reg [31:0] _RAND_14;
  reg [1:0] OpAreg; // @[ID_EX_Reg.scala 95:29]
  reg [31:0] _RAND_15;
  reg  OpBreg; // @[ID_EX_Reg.scala 96:29]
  reg [31:0] _RAND_16;
  assign io_pc_out = pcreg; // @[ID_EX_Reg.scala 58:19]
  assign io_pc4_out = pc4reg; // @[ID_EX_Reg.scala 60:20]
  assign io_MemWrite_out = MemWritereg; // @[ID_EX_Reg.scala 100:25]
  assign io_MemRead_out = MemReadreg; // @[ID_EX_Reg.scala 104:24]
  assign io_RegWrite_out = RegWritereg; // @[ID_EX_Reg.scala 106:25]
  assign io_MemtoReg_out = MemtoRegreg; // @[ID_EX_Reg.scala 108:25]
  assign io_AluOp_out = AluOpreg; // @[ID_EX_Reg.scala 110:22]
  assign io_OpA_out = OpAreg; // @[ID_EX_Reg.scala 112:20]
  assign io_OpB_out = OpBreg; // @[ID_EX_Reg.scala 114:20]
  assign io_imm_out = immreg; // @[ID_EX_Reg.scala 64:20]
  assign io_func3_out = func3reg; // @[ID_EX_Reg.scala 68:22]
  assign io_func7_out = func7reg; // @[ID_EX_Reg.scala 71:22]
  assign io_rs1_out = rs1reg; // @[ID_EX_Reg.scala 75:20]
  assign io_rs2_out = rs2reg; // @[ID_EX_Reg.scala 78:20]
  assign io_rs1_s_out = rs1sreg; // @[ID_EX_Reg.scala 81:22]
  assign io_rs2_s_out = rs2sreg; // @[ID_EX_Reg.scala 84:22]
  assign io_rd_out = rdreg; // @[ID_EX_Reg.scala 87:19]
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
  pcreg = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  pc4reg = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  immreg = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  func3reg = _RAND_3[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  func7reg = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  rs1reg = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  rs2reg = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  rs1sreg = _RAND_7[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  rs2sreg = _RAND_8[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  rdreg = _RAND_9[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  MemWritereg = _RAND_10[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  MemReadreg = _RAND_11[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  RegWritereg = _RAND_12[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  MemtoRegreg = _RAND_13[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  AluOpreg = _RAND_14[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  OpAreg = _RAND_15[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  OpBreg = _RAND_16[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      pcreg <= 32'h0;
    end else begin
      pcreg <= io_pc_in;
    end
    if (reset) begin
      pc4reg <= 32'h0;
    end else begin
      pc4reg <= io_pc4_in;
    end
    if (reset) begin
      immreg <= 32'sh0;
    end else begin
      immreg <= io_imm_in;
    end
    if (reset) begin
      func3reg <= 3'h0;
    end else begin
      func3reg <= io_func3_in;
    end
    if (reset) begin
      func7reg <= 1'h0;
    end else begin
      func7reg <= io_func7_in;
    end
    if (reset) begin
      rs1reg <= 32'sh0;
    end else begin
      rs1reg <= io_rs1_in;
    end
    if (reset) begin
      rs2reg <= 32'sh0;
    end else begin
      rs2reg <= io_rs2_in;
    end
    if (reset) begin
      rs1sreg <= 5'h0;
    end else begin
      rs1sreg <= io_rs1_s_in;
    end
    if (reset) begin
      rs2sreg <= 5'h0;
    end else begin
      rs2sreg <= io_rs2_s_in;
    end
    if (reset) begin
      rdreg <= 5'h0;
    end else begin
      rdreg <= io_rd_in;
    end
    if (reset) begin
      MemWritereg <= 1'h0;
    end else begin
      MemWritereg <= io_MemWrite_in;
    end
    if (reset) begin
      MemReadreg <= 1'h0;
    end else begin
      MemReadreg <= io_MemRead_in;
    end
    if (reset) begin
      RegWritereg <= 1'h0;
    end else begin
      RegWritereg <= io_RegWrite_in;
    end
    if (reset) begin
      MemtoRegreg <= 1'h0;
    end else begin
      MemtoRegreg <= io_MemtoReg_in;
    end
    if (reset) begin
      AluOpreg <= 3'h0;
    end else begin
      AluOpreg <= io_AluOp_in;
    end
    if (reset) begin
      OpAreg <= 2'h0;
    end else begin
      OpAreg <= io_OpA_in;
    end
    if (reset) begin
      OpBreg <= 1'h0;
    end else begin
      OpBreg <= io_OpB_in;
    end
  end
endmodule
module EX_MEM_Reg(
  input         clock,
  input         reset,
  input  [31:0] io_rs2_in,
  output [31:0] io_rs2_out,
  input  [31:0] io_alu_in,
  output [31:0] io_alu_out,
  input  [4:0]  io_rd_in,
  output [4:0]  io_rd_out,
  input         io_MemWrite_in,
  input         io_MemRead_in,
  input         io_RegWrite_in,
  input         io_MemtoReg_in,
  output        io_MemWrite_out,
  output        io_MemRead_out,
  output        io_RegWrite_out,
  output        io_MemtoReg_out
);
  reg [31:0] rs2reg; // @[EX_MEM_Reg.scala 26:29]
  reg [31:0] _RAND_0;
  reg [31:0] alureg; // @[EX_MEM_Reg.scala 30:29]
  reg [31:0] _RAND_1;
  reg [4:0] rdreg; // @[EX_MEM_Reg.scala 34:28]
  reg [31:0] _RAND_2;
  reg  MemWritereg; // @[EX_MEM_Reg.scala 38:34]
  reg [31:0] _RAND_3;
  reg  MemReadreg; // @[EX_MEM_Reg.scala 39:33]
  reg [31:0] _RAND_4;
  reg  RegWritereg; // @[EX_MEM_Reg.scala 40:34]
  reg [31:0] _RAND_5;
  reg  MemtoRegreg; // @[EX_MEM_Reg.scala 41:34]
  reg [31:0] _RAND_6;
  assign io_rs2_out = rs2reg; // @[EX_MEM_Reg.scala 28:20]
  assign io_alu_out = alureg; // @[EX_MEM_Reg.scala 32:20]
  assign io_rd_out = rdreg; // @[EX_MEM_Reg.scala 36:19]
  assign io_MemWrite_out = MemWritereg; // @[EX_MEM_Reg.scala 44:25]
  assign io_MemRead_out = MemReadreg; // @[EX_MEM_Reg.scala 46:24]
  assign io_RegWrite_out = RegWritereg; // @[EX_MEM_Reg.scala 48:25]
  assign io_MemtoReg_out = MemtoRegreg; // @[EX_MEM_Reg.scala 50:25]
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
  rs2reg = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  alureg = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  rdreg = _RAND_2[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  MemWritereg = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  MemReadreg = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  RegWritereg = _RAND_5[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  MemtoRegreg = _RAND_6[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      rs2reg <= 32'sh0;
    end else begin
      rs2reg <= io_rs2_in;
    end
    if (reset) begin
      alureg <= 32'sh0;
    end else begin
      alureg <= io_alu_in;
    end
    if (reset) begin
      rdreg <= 5'h0;
    end else begin
      rdreg <= io_rd_in;
    end
    if (reset) begin
      MemWritereg <= 1'h0;
    end else begin
      MemWritereg <= io_MemWrite_in;
    end
    if (reset) begin
      MemReadreg <= 1'h0;
    end else begin
      MemReadreg <= io_MemRead_in;
    end
    if (reset) begin
      RegWritereg <= 1'h0;
    end else begin
      RegWritereg <= io_RegWrite_in;
    end
    if (reset) begin
      MemtoRegreg <= 1'h0;
    end else begin
      MemtoRegreg <= io_MemtoReg_in;
    end
  end
endmodule
module MEM_WB_Reg(
  input         clock,
  input         reset,
  input  [31:0] io_mem_in,
  output [31:0] io_mem_out,
  input  [31:0] io_alu_in,
  output [31:0] io_alu_out,
  input  [4:0]  io_rd_in,
  output [4:0]  io_rd_out,
  input         io_RegWrite_in,
  output        io_RegWrite_out,
  input         io_MemtoReg_in,
  output        io_MemtoReg_out
);
  reg [31:0] memreg; // @[MEM_WB_Reg.scala 20:29]
  reg [31:0] _RAND_0;
  reg [31:0] alureg; // @[MEM_WB_Reg.scala 24:29]
  reg [31:0] _RAND_1;
  reg [4:0] rdreg; // @[MEM_WB_Reg.scala 28:28]
  reg [31:0] _RAND_2;
  reg  RegWritereg; // @[MEM_WB_Reg.scala 32:34]
  reg [31:0] _RAND_3;
  reg  MemtoRegreg; // @[MEM_WB_Reg.scala 33:34]
  reg [31:0] _RAND_4;
  assign io_mem_out = memreg; // @[MEM_WB_Reg.scala 22:20]
  assign io_alu_out = alureg; // @[MEM_WB_Reg.scala 26:20]
  assign io_rd_out = rdreg; // @[MEM_WB_Reg.scala 30:19]
  assign io_RegWrite_out = RegWritereg; // @[MEM_WB_Reg.scala 35:25]
  assign io_MemtoReg_out = MemtoRegreg; // @[MEM_WB_Reg.scala 37:25]
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
  memreg = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  alureg = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  rdreg = _RAND_2[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  RegWritereg = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  MemtoRegreg = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      memreg <= 32'sh0;
    end else begin
      memreg <= io_mem_in;
    end
    if (reset) begin
      alureg <= 32'sh0;
    end else begin
      alureg <= io_alu_in;
    end
    if (reset) begin
      rdreg <= 5'h0;
    end else begin
      rdreg <= io_rd_in;
    end
    if (reset) begin
      RegWritereg <= 1'h0;
    end else begin
      RegWritereg <= io_RegWrite_in;
    end
    if (reset) begin
      MemtoRegreg <= 1'h0;
    end else begin
      MemtoRegreg <= io_MemtoReg_in;
    end
  end
endmodule
module StallingUnit(
  input  [31:0] io_inst_in,
  output [31:0] io_inst_out,
  input         io_MemRead,
  input  [4:0]  io_rd,
  input  [4:0]  io_rs1_s,
  input  [4:0]  io_rs2_s,
  output        io_stall
);
  wire  _T_31; // @[StallingUnit.scala 22:48]
  wire  _T_32; // @[StallingUnit.scala 22:72]
  wire  _T_33; // @[StallingUnit.scala 22:62]
  wire  _T_34; // @[StallingUnit.scala 22:37]
  assign _T_31 = io_rd == io_rs1_s; // @[StallingUnit.scala 22:48]
  assign _T_32 = io_rd == io_rs2_s; // @[StallingUnit.scala 22:72]
  assign _T_33 = _T_31 | _T_32; // @[StallingUnit.scala 22:62]
  assign _T_34 = io_MemRead & _T_33; // @[StallingUnit.scala 22:37]
  assign io_inst_out = _T_34 ? io_inst_in : 32'h0; // @[StallingUnit.scala 26:29 StallingUnit.scala 32:29]
  assign io_stall = io_MemRead & _T_33; // @[StallingUnit.scala 23:26 StallingUnit.scala 31:26]
endmodule
module ForwardingUnit(
  input        io_RegWrite,
  input        io_RegWrite1,
  input  [4:0] io_EX_MEM_rd,
  input  [4:0] io_MEM_WB_rd,
  input  [4:0] io_ID_EX_rs1_s,
  input  [4:0] io_ID_EX_rs2_s,
  output [1:0] io_forwardA,
  output [1:0] io_forwardB
);
  wire  _T_26; // @[ForwardingUnit.scala 20:54]
  wire  _T_27; // @[ForwardingUnit.scala 20:38]
  wire  _T_28; // @[ForwardingUnit.scala 21:37]
  wire  _T_29; // @[ForwardingUnit.scala 21:74]
  wire  _T_30; // @[ForwardingUnit.scala 21:57]
  wire [1:0] _GEN_0; // @[ForwardingUnit.scala 26:60]
  wire [1:0] _GEN_1; // @[ForwardingUnit.scala 25:60]
  wire [1:0] _GEN_2; // @[ForwardingUnit.scala 25:60]
  wire [1:0] _GEN_3; // @[ForwardingUnit.scala 21:94]
  wire [1:0] _GEN_4; // @[ForwardingUnit.scala 21:94]
  wire [1:0] _GEN_5; // @[ForwardingUnit.scala 20:69]
  wire [1:0] _GEN_6; // @[ForwardingUnit.scala 20:69]
  wire  _T_40; // @[ForwardingUnit.scala 28:55]
  wire  _T_41; // @[ForwardingUnit.scala 28:39]
  wire  _T_42; // @[ForwardingUnit.scala 29:38]
  wire  _T_43; // @[ForwardingUnit.scala 29:75]
  wire  _T_44; // @[ForwardingUnit.scala 29:58]
  wire  _T_51; // @[ForwardingUnit.scala 29:159]
  wire  _T_53; // @[ForwardingUnit.scala 29:196]
  wire  _T_54; // @[ForwardingUnit.scala 29:99]
  wire  _T_55; // @[ForwardingUnit.scala 29:96]
  wire  _T_66; // @[ForwardingUnit.scala 33:63]
  wire  _T_67; // @[ForwardingUnit.scala 33:60]
  wire  _T_76; // @[ForwardingUnit.scala 36:123]
  wire  _T_77; // @[ForwardingUnit.scala 36:63]
  wire  _T_78; // @[ForwardingUnit.scala 36:60]
  wire [1:0] _GEN_7; // @[ForwardingUnit.scala 36:161]
  wire [1:0] _GEN_8; // @[ForwardingUnit.scala 33:161]
  wire [1:0] _GEN_9; // @[ForwardingUnit.scala 33:161]
  wire [1:0] _GEN_10; // @[ForwardingUnit.scala 29:234]
  wire [1:0] _GEN_11; // @[ForwardingUnit.scala 29:234]
  assign _T_26 = io_EX_MEM_rd != 5'h0; // @[ForwardingUnit.scala 20:54]
  assign _T_27 = io_RegWrite & _T_26; // @[ForwardingUnit.scala 20:38]
  assign _T_28 = io_EX_MEM_rd == io_ID_EX_rs1_s; // @[ForwardingUnit.scala 21:37]
  assign _T_29 = io_EX_MEM_rd == io_ID_EX_rs2_s; // @[ForwardingUnit.scala 21:74]
  assign _T_30 = _T_28 & _T_29; // @[ForwardingUnit.scala 21:57]
  assign _GEN_0 = _T_29 ? 2'h2 : 2'h0; // @[ForwardingUnit.scala 26:60]
  assign _GEN_1 = _T_28 ? 2'h2 : 2'h0; // @[ForwardingUnit.scala 25:60]
  assign _GEN_2 = _T_28 ? 2'h0 : _GEN_0; // @[ForwardingUnit.scala 25:60]
  assign _GEN_3 = _T_30 ? 2'h2 : _GEN_1; // @[ForwardingUnit.scala 21:94]
  assign _GEN_4 = _T_30 ? 2'h2 : _GEN_2; // @[ForwardingUnit.scala 21:94]
  assign _GEN_5 = _T_27 ? _GEN_3 : 2'h0; // @[ForwardingUnit.scala 20:69]
  assign _GEN_6 = _T_27 ? _GEN_4 : 2'h0; // @[ForwardingUnit.scala 20:69]
  assign _T_40 = io_MEM_WB_rd != 5'h0; // @[ForwardingUnit.scala 28:55]
  assign _T_41 = io_RegWrite1 & _T_40; // @[ForwardingUnit.scala 28:39]
  assign _T_42 = io_MEM_WB_rd == io_ID_EX_rs1_s; // @[ForwardingUnit.scala 29:38]
  assign _T_43 = io_MEM_WB_rd == io_ID_EX_rs2_s; // @[ForwardingUnit.scala 29:75]
  assign _T_44 = _T_42 & _T_43; // @[ForwardingUnit.scala 29:58]
  assign _T_51 = _T_27 & _T_28; // @[ForwardingUnit.scala 29:159]
  assign _T_53 = _T_51 & _T_29; // @[ForwardingUnit.scala 29:196]
  assign _T_54 = ~ _T_53; // @[ForwardingUnit.scala 29:99]
  assign _T_55 = _T_44 & _T_54; // @[ForwardingUnit.scala 29:96]
  assign _T_66 = ~ _T_51; // @[ForwardingUnit.scala 33:63]
  assign _T_67 = _T_42 & _T_66; // @[ForwardingUnit.scala 33:60]
  assign _T_76 = _T_27 & _T_29; // @[ForwardingUnit.scala 36:123]
  assign _T_77 = ~ _T_76; // @[ForwardingUnit.scala 36:63]
  assign _T_78 = _T_43 & _T_77; // @[ForwardingUnit.scala 36:60]
  assign _GEN_7 = _T_78 ? 2'h1 : _GEN_6; // @[ForwardingUnit.scala 36:161]
  assign _GEN_8 = _T_67 ? 2'h1 : _GEN_5; // @[ForwardingUnit.scala 33:161]
  assign _GEN_9 = _T_67 ? _GEN_6 : _GEN_7; // @[ForwardingUnit.scala 33:161]
  assign _GEN_10 = _T_55 ? 2'h1 : _GEN_8; // @[ForwardingUnit.scala 29:234]
  assign _GEN_11 = _T_55 ? 2'h1 : _GEN_9; // @[ForwardingUnit.scala 29:234]
  assign io_forwardA = _T_41 ? _GEN_10 : _GEN_5; // @[ForwardingUnit.scala 18:21 ForwardingUnit.scala 22:37 ForwardingUnit.scala 25:73 ForwardingUnit.scala 30:37 ForwardingUnit.scala 34:37]
  assign io_forwardB = _T_41 ? _GEN_11 : _GEN_6; // @[ForwardingUnit.scala 19:21 ForwardingUnit.scala 23:37 ForwardingUnit.scala 26:73 ForwardingUnit.scala 31:37 ForwardingUnit.scala 37:37]
endmodule
module BranchUnit(
  input  [2:0]  io_func3,
  input  [31:0] io_rs1,
  input  [31:0] io_rs2,
  output        io_branch
);
  wire  _T_14; // @[BranchUnit.scala 15:24]
  wire  _T_15; // @[BranchUnit.scala 16:30]
  wire  _T_19; // @[BranchUnit.scala 19:29]
  wire  _T_20; // @[BranchUnit.scala 20:30]
  wire  _T_24; // @[BranchUnit.scala 23:29]
  wire  _T_25; // @[BranchUnit.scala 24:30]
  wire  _T_29; // @[BranchUnit.scala 27:29]
  wire  _T_30; // @[BranchUnit.scala 28:30]
  wire  _T_34; // @[BranchUnit.scala 31:29]
  wire [31:0] _T_35; // @[BranchUnit.scala 32:30]
  wire [31:0] _T_36; // @[BranchUnit.scala 32:46]
  wire  _T_37; // @[BranchUnit.scala 32:37]
  wire  _T_41; // @[BranchUnit.scala 35:29]
  wire  _T_44; // @[BranchUnit.scala 36:37]
  wire  _GEN_6; // @[BranchUnit.scala 35:42]
  wire  _GEN_7; // @[BranchUnit.scala 31:42]
  wire  _GEN_8; // @[BranchUnit.scala 27:42]
  wire  _GEN_9; // @[BranchUnit.scala 23:42]
  wire  _GEN_10; // @[BranchUnit.scala 19:42]
  assign _T_14 = io_func3 == 3'h0; // @[BranchUnit.scala 15:24]
  assign _T_15 = $signed(io_rs1) == $signed(io_rs2); // @[BranchUnit.scala 16:30]
  assign _T_19 = io_func3 == 3'h1; // @[BranchUnit.scala 19:29]
  assign _T_20 = $signed(io_rs1) != $signed(io_rs2); // @[BranchUnit.scala 20:30]
  assign _T_24 = io_func3 == 3'h4; // @[BranchUnit.scala 23:29]
  assign _T_25 = $signed(io_rs1) < $signed(io_rs2); // @[BranchUnit.scala 24:30]
  assign _T_29 = io_func3 == 3'h5; // @[BranchUnit.scala 27:29]
  assign _T_30 = $signed(io_rs1) >= $signed(io_rs2); // @[BranchUnit.scala 28:30]
  assign _T_34 = io_func3 == 3'h6; // @[BranchUnit.scala 31:29]
  assign _T_35 = $unsigned(io_rs1); // @[BranchUnit.scala 32:30]
  assign _T_36 = $unsigned(io_rs2); // @[BranchUnit.scala 32:46]
  assign _T_37 = _T_35 < _T_36; // @[BranchUnit.scala 32:37]
  assign _T_41 = io_func3 == 3'h7; // @[BranchUnit.scala 35:29]
  assign _T_44 = _T_35 >= _T_36; // @[BranchUnit.scala 36:37]
  assign _GEN_6 = _T_41 ? _T_44 : 1'h0; // @[BranchUnit.scala 35:42]
  assign _GEN_7 = _T_34 ? _T_37 : _GEN_6; // @[BranchUnit.scala 31:42]
  assign _GEN_8 = _T_29 ? _T_30 : _GEN_7; // @[BranchUnit.scala 27:42]
  assign _GEN_9 = _T_24 ? _T_25 : _GEN_8; // @[BranchUnit.scala 23:42]
  assign _GEN_10 = _T_19 ? _T_20 : _GEN_9; // @[BranchUnit.scala 19:42]
  assign io_branch = _T_14 ? _T_15 : _GEN_10; // @[BranchUnit.scala 16:52 BranchUnit.scala 17:39 BranchUnit.scala 20:52 BranchUnit.scala 21:39 BranchUnit.scala 24:50 BranchUnit.scala 25:39 BranchUnit.scala 28:51 BranchUnit.scala 29:39 BranchUnit.scala 32:64 BranchUnit.scala 33:39 BranchUnit.scala 36:65 BranchUnit.scala 37:39 BranchUnit.scala 39:31]
endmodule
module BranchForwardUnit(
  input  [4:0] io_ID_EX_rd,
  input        io_ID_EX_MemRead,
  input  [4:0] io_EX_MEM_rd,
  input        io_EX_MEM_MemRead,
  input  [4:0] io_MEM_WB_rd,
  input        io_MEM_WB_MemtoReg,
  input  [4:0] io_rs1_s,
  input  [4:0] io_rs2_s,
  input        io_branch,
  output [3:0] io_forwardA,
  output [3:0] io_forwardB
);
  wire  _T_32; // @[BranchForwardUnit.scala 23:24]
  wire  _T_34; // @[BranchForwardUnit.scala 23:59]
  wire  _T_35; // @[BranchForwardUnit.scala 23:39]
  wire  _T_36; // @[BranchForwardUnit.scala 23:83]
  wire  _T_37; // @[BranchForwardUnit.scala 23:67]
  wire  _T_38; // @[BranchForwardUnit.scala 23:113]
  wire  _T_39; // @[BranchForwardUnit.scala 23:97]
  wire  _T_56; // @[BranchForwardUnit.scala 28:74]
  wire  _GEN_2; // @[BranchForwardUnit.scala 26:105]
  wire  _GEN_3; // @[BranchForwardUnit.scala 23:128]
  wire  _GEN_4; // @[BranchForwardUnit.scala 23:128]
  wire  _T_59; // @[BranchForwardUnit.scala 33:25]
  wire  _T_61; // @[BranchForwardUnit.scala 33:61]
  wire  _T_62; // @[BranchForwardUnit.scala 33:40]
  wire  _T_66; // @[BranchForwardUnit.scala 34:40]
  wire  _T_68; // @[BranchForwardUnit.scala 34:70]
  wire  _T_69; // @[BranchForwardUnit.scala 34:9]
  wire  _T_70; // @[BranchForwardUnit.scala 33:69]
  wire  _T_71; // @[BranchForwardUnit.scala 35:23]
  wire  _T_72; // @[BranchForwardUnit.scala 34:101]
  wire  _T_73; // @[BranchForwardUnit.scala 35:54]
  wire  _T_74; // @[BranchForwardUnit.scala 35:37]
  wire  _T_85; // @[BranchForwardUnit.scala 41:40]
  wire  _T_86; // @[BranchForwardUnit.scala 41:9]
  wire  _T_87; // @[BranchForwardUnit.scala 40:76]
  wire  _T_89; // @[BranchForwardUnit.scala 41:71]
  wire  _T_100; // @[BranchForwardUnit.scala 47:9]
  wire  _T_101; // @[BranchForwardUnit.scala 46:76]
  wire  _T_103; // @[BranchForwardUnit.scala 47:71]
  wire  _T_109; // @[BranchForwardUnit.scala 52:47]
  wire  _T_117; // @[BranchForwardUnit.scala 52:76]
  wire  _T_119; // @[BranchForwardUnit.scala 53:101]
  wire  _T_121; // @[BranchForwardUnit.scala 54:37]
  wire  _T_134; // @[BranchForwardUnit.scala 59:76]
  wire  _T_136; // @[BranchForwardUnit.scala 60:71]
  wire  _T_142; // @[BranchForwardUnit.scala 65:37]
  wire  _T_145; // @[BranchForwardUnit.scala 65:68]
  wire  _T_151; // @[BranchForwardUnit.scala 65:97]
  wire  _T_153; // @[BranchForwardUnit.scala 66:71]
  wire [2:0] _GEN_5; // @[BranchForwardUnit.scala 67:38]
  wire [2:0] _GEN_6; // @[BranchForwardUnit.scala 61:38]
  wire [2:0] _GEN_7; // @[BranchForwardUnit.scala 61:38]
  wire [2:0] _GEN_8; // @[BranchForwardUnit.scala 54:69]
  wire [2:0] _GEN_9; // @[BranchForwardUnit.scala 54:69]
  wire [2:0] _GEN_10; // @[BranchForwardUnit.scala 48:38]
  wire [2:0] _GEN_11; // @[BranchForwardUnit.scala 48:38]
  wire [2:0] _GEN_12; // @[BranchForwardUnit.scala 42:38]
  wire [2:0] _GEN_13; // @[BranchForwardUnit.scala 42:38]
  wire [2:0] _GEN_14; // @[BranchForwardUnit.scala 35:69]
  wire [2:0] _GEN_15; // @[BranchForwardUnit.scala 35:69]
  wire  _T_156; // @[BranchForwardUnit.scala 74:25]
  wire  _T_158; // @[BranchForwardUnit.scala 74:62]
  wire  _T_159; // @[BranchForwardUnit.scala 74:40]
  wire  _T_167; // @[BranchForwardUnit.scala 74:70]
  wire  _T_171; // @[BranchForwardUnit.scala 78:41]
  wire  _T_173; // @[BranchForwardUnit.scala 78:72]
  wire  _T_174; // @[BranchForwardUnit.scala 78:9]
  wire  _T_175; // @[BranchForwardUnit.scala 76:101]
  wire  _T_176; // @[BranchForwardUnit.scala 79:23]
  wire  _T_177; // @[BranchForwardUnit.scala 78:104]
  wire  _T_178; // @[BranchForwardUnit.scala 79:54]
  wire  _T_179; // @[BranchForwardUnit.scala 79:37]
  wire  _T_192; // @[BranchForwardUnit.scala 85:77]
  wire  _T_196; // @[BranchForwardUnit.scala 89:43]
  wire  _T_197; // @[BranchForwardUnit.scala 89:11]
  wire  _T_198; // @[BranchForwardUnit.scala 87:73]
  wire  _T_200; // @[BranchForwardUnit.scala 89:75]
  wire  _T_212; // @[BranchForwardUnit.scala 95:77]
  wire  _T_217; // @[BranchForwardUnit.scala 99:11]
  wire  _T_218; // @[BranchForwardUnit.scala 97:73]
  wire  _T_220; // @[BranchForwardUnit.scala 99:75]
  wire  _T_226; // @[BranchForwardUnit.scala 104:49]
  wire  _T_234; // @[BranchForwardUnit.scala 104:79]
  wire  _T_242; // @[BranchForwardUnit.scala 106:101]
  wire  _T_244; // @[BranchForwardUnit.scala 108:104]
  wire  _T_246; // @[BranchForwardUnit.scala 109:37]
  wire  _T_259; // @[BranchForwardUnit.scala 115:77]
  wire  _T_265; // @[BranchForwardUnit.scala 117:73]
  wire  _T_267; // @[BranchForwardUnit.scala 119:75]
  wire  _T_279; // @[BranchForwardUnit.scala 125:77]
  wire  _T_285; // @[BranchForwardUnit.scala 127:73]
  wire  _T_287; // @[BranchForwardUnit.scala 129:74]
  wire [2:0] _GEN_16; // @[BranchForwardUnit.scala 130:40]
  wire [2:0] _GEN_17; // @[BranchForwardUnit.scala 120:40]
  wire [2:0] _GEN_18; // @[BranchForwardUnit.scala 120:40]
  wire [2:0] _GEN_19; // @[BranchForwardUnit.scala 109:69]
  wire [2:0] _GEN_20; // @[BranchForwardUnit.scala 109:69]
  wire [2:0] _GEN_21; // @[BranchForwardUnit.scala 100:40]
  wire [2:0] _GEN_22; // @[BranchForwardUnit.scala 100:40]
  wire [2:0] _GEN_23; // @[BranchForwardUnit.scala 90:40]
  wire [2:0] _GEN_24; // @[BranchForwardUnit.scala 90:40]
  wire [2:0] _GEN_25; // @[BranchForwardUnit.scala 79:69]
  wire [2:0] _GEN_26; // @[BranchForwardUnit.scala 79:69]
  wire  _T_290; // @[BranchForwardUnit.scala 138:27]
  wire [2:0] _GEN_27; // @[BranchForwardUnit.scala 140:99]
  wire  _T_323; // @[BranchForwardUnit.scala 152:78]
  wire  _T_325; // @[BranchForwardUnit.scala 153:75]
  wire [3:0] _GEN_28; // @[BranchForwardUnit.scala 154:42]
  wire [3:0] _GEN_29; // @[BranchForwardUnit.scala 147:40]
  wire [3:0] _GEN_30; // @[BranchForwardUnit.scala 177:40]
  wire [3:0] _GEN_31; // @[BranchForwardUnit.scala 167:40]
  wire [3:0] _GEN_32; // @[BranchForwardUnit.scala 138:36]
  wire [2:0] _GEN_34; // @[BranchForwardUnit.scala 22:29]
  assign _T_32 = io_ID_EX_rd != 5'h0; // @[BranchForwardUnit.scala 23:24]
  assign _T_34 = io_ID_EX_MemRead != 1'h1; // @[BranchForwardUnit.scala 23:59]
  assign _T_35 = _T_32 & _T_34; // @[BranchForwardUnit.scala 23:39]
  assign _T_36 = io_ID_EX_rd == io_rs1_s; // @[BranchForwardUnit.scala 23:83]
  assign _T_37 = _T_35 & _T_36; // @[BranchForwardUnit.scala 23:67]
  assign _T_38 = io_ID_EX_rd == io_rs2_s; // @[BranchForwardUnit.scala 23:113]
  assign _T_39 = _T_37 & _T_38; // @[BranchForwardUnit.scala 23:97]
  assign _T_56 = _T_35 & _T_38; // @[BranchForwardUnit.scala 28:74]
  assign _GEN_2 = _T_37 ? 1'h0 : _T_56; // @[BranchForwardUnit.scala 26:105]
  assign _GEN_3 = _T_39 ? 1'h1 : _T_37; // @[BranchForwardUnit.scala 23:128]
  assign _GEN_4 = _T_39 ? 1'h1 : _GEN_2; // @[BranchForwardUnit.scala 23:128]
  assign _T_59 = io_EX_MEM_rd != 5'h0; // @[BranchForwardUnit.scala 33:25]
  assign _T_61 = io_EX_MEM_MemRead != 1'h1; // @[BranchForwardUnit.scala 33:61]
  assign _T_62 = _T_59 & _T_61; // @[BranchForwardUnit.scala 33:40]
  assign _T_66 = _T_32 & _T_36; // @[BranchForwardUnit.scala 34:40]
  assign _T_68 = _T_66 & _T_38; // @[BranchForwardUnit.scala 34:70]
  assign _T_69 = ~ _T_68; // @[BranchForwardUnit.scala 34:9]
  assign _T_70 = _T_62 & _T_69; // @[BranchForwardUnit.scala 33:69]
  assign _T_71 = io_EX_MEM_rd == io_rs1_s; // @[BranchForwardUnit.scala 35:23]
  assign _T_72 = _T_70 & _T_71; // @[BranchForwardUnit.scala 34:101]
  assign _T_73 = io_EX_MEM_rd == io_rs2_s; // @[BranchForwardUnit.scala 35:54]
  assign _T_74 = _T_72 & _T_73; // @[BranchForwardUnit.scala 35:37]
  assign _T_85 = _T_32 & _T_38; // @[BranchForwardUnit.scala 41:40]
  assign _T_86 = ~ _T_85; // @[BranchForwardUnit.scala 41:9]
  assign _T_87 = _T_62 & _T_86; // @[BranchForwardUnit.scala 40:76]
  assign _T_89 = _T_87 & _T_73; // @[BranchForwardUnit.scala 41:71]
  assign _T_100 = ~ _T_66; // @[BranchForwardUnit.scala 47:9]
  assign _T_101 = _T_62 & _T_100; // @[BranchForwardUnit.scala 46:76]
  assign _T_103 = _T_101 & _T_71; // @[BranchForwardUnit.scala 47:71]
  assign _T_109 = _T_59 & io_EX_MEM_MemRead; // @[BranchForwardUnit.scala 52:47]
  assign _T_117 = _T_109 & _T_69; // @[BranchForwardUnit.scala 52:76]
  assign _T_119 = _T_117 & _T_71; // @[BranchForwardUnit.scala 53:101]
  assign _T_121 = _T_119 & _T_73; // @[BranchForwardUnit.scala 54:37]
  assign _T_134 = _T_109 & _T_86; // @[BranchForwardUnit.scala 59:76]
  assign _T_136 = _T_134 & _T_73; // @[BranchForwardUnit.scala 60:71]
  assign _T_142 = io_branch & _T_59; // @[BranchForwardUnit.scala 65:37]
  assign _T_145 = _T_142 & io_EX_MEM_MemRead; // @[BranchForwardUnit.scala 65:68]
  assign _T_151 = _T_145 & _T_100; // @[BranchForwardUnit.scala 65:97]
  assign _T_153 = _T_151 & _T_71; // @[BranchForwardUnit.scala 66:71]
  assign _GEN_5 = _T_153 ? 3'h4 : {{2'd0}, _GEN_3}; // @[BranchForwardUnit.scala 67:38]
  assign _GEN_6 = _T_136 ? 3'h4 : {{2'd0}, _GEN_4}; // @[BranchForwardUnit.scala 61:38]
  assign _GEN_7 = _T_136 ? {{2'd0}, _GEN_3} : _GEN_5; // @[BranchForwardUnit.scala 61:38]
  assign _GEN_8 = _T_121 ? 3'h4 : _GEN_7; // @[BranchForwardUnit.scala 54:69]
  assign _GEN_9 = _T_121 ? 3'h4 : _GEN_6; // @[BranchForwardUnit.scala 54:69]
  assign _GEN_10 = _T_103 ? 3'h2 : _GEN_8; // @[BranchForwardUnit.scala 48:38]
  assign _GEN_11 = _T_103 ? {{2'd0}, _GEN_4} : _GEN_9; // @[BranchForwardUnit.scala 48:38]
  assign _GEN_12 = _T_89 ? 3'h2 : _GEN_11; // @[BranchForwardUnit.scala 42:38]
  assign _GEN_13 = _T_89 ? {{2'd0}, _GEN_3} : _GEN_10; // @[BranchForwardUnit.scala 42:38]
  assign _GEN_14 = _T_74 ? 3'h2 : _GEN_13; // @[BranchForwardUnit.scala 35:69]
  assign _GEN_15 = _T_74 ? 3'h2 : _GEN_12; // @[BranchForwardUnit.scala 35:69]
  assign _T_156 = io_MEM_WB_rd != 5'h0; // @[BranchForwardUnit.scala 74:25]
  assign _T_158 = io_MEM_WB_MemtoReg != 1'h1; // @[BranchForwardUnit.scala 74:62]
  assign _T_159 = _T_156 & _T_158; // @[BranchForwardUnit.scala 74:40]
  assign _T_167 = _T_159 & _T_69; // @[BranchForwardUnit.scala 74:70]
  assign _T_171 = _T_59 & _T_71; // @[BranchForwardUnit.scala 78:41]
  assign _T_173 = _T_171 & _T_73; // @[BranchForwardUnit.scala 78:72]
  assign _T_174 = ~ _T_173; // @[BranchForwardUnit.scala 78:9]
  assign _T_175 = _T_167 & _T_174; // @[BranchForwardUnit.scala 76:101]
  assign _T_176 = io_MEM_WB_rd == io_rs1_s; // @[BranchForwardUnit.scala 79:23]
  assign _T_177 = _T_175 & _T_176; // @[BranchForwardUnit.scala 78:104]
  assign _T_178 = io_MEM_WB_rd == io_rs2_s; // @[BranchForwardUnit.scala 79:54]
  assign _T_179 = _T_177 & _T_178; // @[BranchForwardUnit.scala 79:37]
  assign _T_192 = _T_159 & _T_86; // @[BranchForwardUnit.scala 85:77]
  assign _T_196 = _T_59 & _T_73; // @[BranchForwardUnit.scala 89:43]
  assign _T_197 = ~ _T_196; // @[BranchForwardUnit.scala 89:11]
  assign _T_198 = _T_192 & _T_197; // @[BranchForwardUnit.scala 87:73]
  assign _T_200 = _T_198 & _T_178; // @[BranchForwardUnit.scala 89:75]
  assign _T_212 = _T_159 & _T_100; // @[BranchForwardUnit.scala 95:77]
  assign _T_217 = ~ _T_171; // @[BranchForwardUnit.scala 99:11]
  assign _T_218 = _T_212 & _T_217; // @[BranchForwardUnit.scala 97:73]
  assign _T_220 = _T_218 & _T_176; // @[BranchForwardUnit.scala 99:75]
  assign _T_226 = _T_156 & io_MEM_WB_MemtoReg; // @[BranchForwardUnit.scala 104:49]
  assign _T_234 = _T_226 & _T_69; // @[BranchForwardUnit.scala 104:79]
  assign _T_242 = _T_234 & _T_174; // @[BranchForwardUnit.scala 106:101]
  assign _T_244 = _T_242 & _T_176; // @[BranchForwardUnit.scala 108:104]
  assign _T_246 = _T_244 & _T_178; // @[BranchForwardUnit.scala 109:37]
  assign _T_259 = _T_226 & _T_86; // @[BranchForwardUnit.scala 115:77]
  assign _T_265 = _T_259 & _T_197; // @[BranchForwardUnit.scala 117:73]
  assign _T_267 = _T_265 & _T_178; // @[BranchForwardUnit.scala 119:75]
  assign _T_279 = _T_226 & _T_100; // @[BranchForwardUnit.scala 125:77]
  assign _T_285 = _T_279 & _T_217; // @[BranchForwardUnit.scala 127:73]
  assign _T_287 = _T_285 & _T_176; // @[BranchForwardUnit.scala 129:74]
  assign _GEN_16 = _T_287 ? 3'h5 : _GEN_14; // @[BranchForwardUnit.scala 130:40]
  assign _GEN_17 = _T_267 ? 3'h5 : _GEN_15; // @[BranchForwardUnit.scala 120:40]
  assign _GEN_18 = _T_267 ? _GEN_14 : _GEN_16; // @[BranchForwardUnit.scala 120:40]
  assign _GEN_19 = _T_246 ? 3'h5 : _GEN_18; // @[BranchForwardUnit.scala 109:69]
  assign _GEN_20 = _T_246 ? 3'h5 : _GEN_17; // @[BranchForwardUnit.scala 109:69]
  assign _GEN_21 = _T_220 ? 3'h3 : _GEN_19; // @[BranchForwardUnit.scala 100:40]
  assign _GEN_22 = _T_220 ? _GEN_15 : _GEN_20; // @[BranchForwardUnit.scala 100:40]
  assign _GEN_23 = _T_200 ? 3'h3 : _GEN_22; // @[BranchForwardUnit.scala 90:40]
  assign _GEN_24 = _T_200 ? _GEN_14 : _GEN_21; // @[BranchForwardUnit.scala 90:40]
  assign _GEN_25 = _T_179 ? 3'h3 : _GEN_24; // @[BranchForwardUnit.scala 79:69]
  assign _GEN_26 = _T_179 ? 3'h3 : _GEN_23; // @[BranchForwardUnit.scala 79:69]
  assign _T_290 = io_branch == 1'h0; // @[BranchForwardUnit.scala 138:27]
  assign _GEN_27 = _T_37 ? 3'h6 : 3'h0; // @[BranchForwardUnit.scala 140:99]
  assign _T_323 = _T_109 & _T_100; // @[BranchForwardUnit.scala 152:78]
  assign _T_325 = _T_323 & _T_71; // @[BranchForwardUnit.scala 153:75]
  assign _GEN_28 = _T_325 ? 4'h9 : {{1'd0}, _GEN_27}; // @[BranchForwardUnit.scala 154:42]
  assign _GEN_29 = _T_103 ? 4'h7 : _GEN_28; // @[BranchForwardUnit.scala 147:40]
  assign _GEN_30 = _T_287 ? 4'ha : _GEN_29; // @[BranchForwardUnit.scala 177:40]
  assign _GEN_31 = _T_220 ? 4'h8 : _GEN_30; // @[BranchForwardUnit.scala 167:40]
  assign _GEN_32 = _T_290 ? _GEN_31 : 4'h0; // @[BranchForwardUnit.scala 138:36]
  assign _GEN_34 = io_branch ? _GEN_26 : 3'h0; // @[BranchForwardUnit.scala 22:29]
  assign io_forwardA = io_branch ? {{1'd0}, _GEN_25} : _GEN_32; // @[BranchForwardUnit.scala 19:17 BranchForwardUnit.scala 24:21 BranchForwardUnit.scala 27:21 BranchForwardUnit.scala 37:21 BranchForwardUnit.scala 50:21 BranchForwardUnit.scala 56:21 BranchForwardUnit.scala 69:21 BranchForwardUnit.scala 81:21 BranchForwardUnit.scala 102:23 BranchForwardUnit.scala 111:21 BranchForwardUnit.scala 132:23 BranchForwardUnit.scala 141:23 BranchForwardUnit.scala 149:23 BranchForwardUnit.scala 156:25 BranchForwardUnit.scala 169:23 BranchForwardUnit.scala 179:23]
  assign io_forwardB = {{1'd0}, _GEN_34}; // @[BranchForwardUnit.scala 20:17 BranchForwardUnit.scala 25:21 BranchForwardUnit.scala 29:21 BranchForwardUnit.scala 38:21 BranchForwardUnit.scala 44:21 BranchForwardUnit.scala 57:21 BranchForwardUnit.scala 63:21 BranchForwardUnit.scala 82:21 BranchForwardUnit.scala 92:23 BranchForwardUnit.scala 112:21 BranchForwardUnit.scala 122:23]
endmodule
module TopPipeline(
  input         clock,
  input         reset,
  output [31:0] io_Reg_Out
);
  wire [4:0] Alu_io_AluControl; // @[TopPipeline.scala 13:25]
  wire [31:0] Alu_io_in1; // @[TopPipeline.scala 13:25]
  wire [31:0] Alu_io_in2; // @[TopPipeline.scala 13:25]
  wire [31:0] Alu_io_out; // @[TopPipeline.scala 13:25]
  wire [6:0] Control_io_opcode; // @[TopPipeline.scala 14:29]
  wire  Control_io_MemWrite; // @[TopPipeline.scala 14:29]
  wire  Control_io_Branch; // @[TopPipeline.scala 14:29]
  wire  Control_io_MemRead; // @[TopPipeline.scala 14:29]
  wire  Control_io_RegWrite; // @[TopPipeline.scala 14:29]
  wire  Control_io_MemtoReg; // @[TopPipeline.scala 14:29]
  wire [2:0] Control_io_AluOp; // @[TopPipeline.scala 14:29]
  wire [1:0] Control_io_OpA; // @[TopPipeline.scala 14:29]
  wire  Control_io_OpB; // @[TopPipeline.scala 14:29]
  wire [1:0] Control_io_ExtSel; // @[TopPipeline.scala 14:29]
  wire [1:0] Control_io_NextPc; // @[TopPipeline.scala 14:29]
  wire [31:0] ImmediateGeneration_io_instruction; // @[TopPipeline.scala 15:41]
  wire [31:0] ImmediateGeneration_io_pc; // @[TopPipeline.scala 15:41]
  wire [31:0] ImmediateGeneration_io_s_imm; // @[TopPipeline.scala 15:41]
  wire [31:0] ImmediateGeneration_io_sb_imm; // @[TopPipeline.scala 15:41]
  wire [31:0] ImmediateGeneration_io_uj_imm; // @[TopPipeline.scala 15:41]
  wire [31:0] ImmediateGeneration_io_u_imm; // @[TopPipeline.scala 15:41]
  wire [31:0] ImmediateGeneration_io_i_imm; // @[TopPipeline.scala 15:41]
  wire [2:0] AluControl_io_aluOp; // @[TopPipeline.scala 16:32]
  wire [2:0] AluControl_io_funct3; // @[TopPipeline.scala 16:32]
  wire  AluControl_io_funct7; // @[TopPipeline.scala 16:32]
  wire [4:0] AluControl_io_out; // @[TopPipeline.scala 16:32]
  wire  Register_clock; // @[TopPipeline.scala 17:30]
  wire  Register_io_RegWrite; // @[TopPipeline.scala 17:30]
  wire [4:0] Register_io_rs1_s; // @[TopPipeline.scala 17:30]
  wire [4:0] Register_io_rs2_s; // @[TopPipeline.scala 17:30]
  wire [4:0] Register_io_rd; // @[TopPipeline.scala 17:30]
  wire [31:0] Register_io_WriteData; // @[TopPipeline.scala 17:30]
  wire [31:0] Register_io_rs1; // @[TopPipeline.scala 17:30]
  wire [31:0] Register_io_rs2; // @[TopPipeline.scala 17:30]
  wire  Memory_clock; // @[TopPipeline.scala 18:28]
  wire [9:0] Memory_io_wrAddr; // @[TopPipeline.scala 18:28]
  wire [31:0] Memory_io_rdData; // @[TopPipeline.scala 18:28]
  wire  Pc_clock; // @[TopPipeline.scala 19:24]
  wire  Pc_reset; // @[TopPipeline.scala 19:24]
  wire [31:0] Pc_io_input; // @[TopPipeline.scala 19:24]
  wire [31:0] Pc_io_pc4; // @[TopPipeline.scala 19:24]
  wire [31:0] Pc_io_pc; // @[TopPipeline.scala 19:24]
  wire [31:0] Jalr_io_in1; // @[TopPipeline.scala 20:26]
  wire [31:0] Jalr_io_in2; // @[TopPipeline.scala 20:26]
  wire [31:0] Jalr_io_out; // @[TopPipeline.scala 20:26]
  wire  DataMemory_clock; // @[TopPipeline.scala 21:32]
  wire [7:0] DataMemory_io_Addr; // @[TopPipeline.scala 21:32]
  wire [31:0] DataMemory_io_Data; // @[TopPipeline.scala 21:32]
  wire  DataMemory_io_MemWrite; // @[TopPipeline.scala 21:32]
  wire  DataMemory_io_MemRead; // @[TopPipeline.scala 21:32]
  wire [31:0] DataMemory_io_out; // @[TopPipeline.scala 21:32]
  wire  IF_ID_clock; // @[TopPipeline.scala 23:27]
  wire  IF_ID_reset; // @[TopPipeline.scala 23:27]
  wire [31:0] IF_ID_io_pc_in; // @[TopPipeline.scala 23:27]
  wire [31:0] IF_ID_io_pc_out; // @[TopPipeline.scala 23:27]
  wire [31:0] IF_ID_io_pc4_in; // @[TopPipeline.scala 23:27]
  wire [31:0] IF_ID_io_pc4_out; // @[TopPipeline.scala 23:27]
  wire [31:0] IF_ID_io_inst_in; // @[TopPipeline.scala 23:27]
  wire [31:0] IF_ID_io_inst_out; // @[TopPipeline.scala 23:27]
  wire  ID_EX_clock; // @[TopPipeline.scala 24:27]
  wire  ID_EX_reset; // @[TopPipeline.scala 24:27]
  wire [31:0] ID_EX_io_pc_in; // @[TopPipeline.scala 24:27]
  wire [31:0] ID_EX_io_pc_out; // @[TopPipeline.scala 24:27]
  wire [31:0] ID_EX_io_pc4_in; // @[TopPipeline.scala 24:27]
  wire [31:0] ID_EX_io_pc4_out; // @[TopPipeline.scala 24:27]
  wire  ID_EX_io_MemWrite_in; // @[TopPipeline.scala 24:27]
  wire  ID_EX_io_MemRead_in; // @[TopPipeline.scala 24:27]
  wire  ID_EX_io_RegWrite_in; // @[TopPipeline.scala 24:27]
  wire  ID_EX_io_MemtoReg_in; // @[TopPipeline.scala 24:27]
  wire [2:0] ID_EX_io_AluOp_in; // @[TopPipeline.scala 24:27]
  wire [1:0] ID_EX_io_OpA_in; // @[TopPipeline.scala 24:27]
  wire  ID_EX_io_OpB_in; // @[TopPipeline.scala 24:27]
  wire  ID_EX_io_MemWrite_out; // @[TopPipeline.scala 24:27]
  wire  ID_EX_io_MemRead_out; // @[TopPipeline.scala 24:27]
  wire  ID_EX_io_RegWrite_out; // @[TopPipeline.scala 24:27]
  wire  ID_EX_io_MemtoReg_out; // @[TopPipeline.scala 24:27]
  wire [2:0] ID_EX_io_AluOp_out; // @[TopPipeline.scala 24:27]
  wire [1:0] ID_EX_io_OpA_out; // @[TopPipeline.scala 24:27]
  wire  ID_EX_io_OpB_out; // @[TopPipeline.scala 24:27]
  wire [31:0] ID_EX_io_imm_in; // @[TopPipeline.scala 24:27]
  wire [31:0] ID_EX_io_imm_out; // @[TopPipeline.scala 24:27]
  wire [2:0] ID_EX_io_func3_in; // @[TopPipeline.scala 24:27]
  wire  ID_EX_io_func7_in; // @[TopPipeline.scala 24:27]
  wire [2:0] ID_EX_io_func3_out; // @[TopPipeline.scala 24:27]
  wire  ID_EX_io_func7_out; // @[TopPipeline.scala 24:27]
  wire [31:0] ID_EX_io_rs1_in; // @[TopPipeline.scala 24:27]
  wire [31:0] ID_EX_io_rs2_in; // @[TopPipeline.scala 24:27]
  wire [31:0] ID_EX_io_rs1_out; // @[TopPipeline.scala 24:27]
  wire [31:0] ID_EX_io_rs2_out; // @[TopPipeline.scala 24:27]
  wire [4:0] ID_EX_io_rs1_s_in; // @[TopPipeline.scala 24:27]
  wire [4:0] ID_EX_io_rs2_s_in; // @[TopPipeline.scala 24:27]
  wire [4:0] ID_EX_io_rs1_s_out; // @[TopPipeline.scala 24:27]
  wire [4:0] ID_EX_io_rs2_s_out; // @[TopPipeline.scala 24:27]
  wire [4:0] ID_EX_io_rd_in; // @[TopPipeline.scala 24:27]
  wire [4:0] ID_EX_io_rd_out; // @[TopPipeline.scala 24:27]
  wire  EX_MEM_clock; // @[TopPipeline.scala 25:28]
  wire  EX_MEM_reset; // @[TopPipeline.scala 25:28]
  wire [31:0] EX_MEM_io_rs2_in; // @[TopPipeline.scala 25:28]
  wire [31:0] EX_MEM_io_rs2_out; // @[TopPipeline.scala 25:28]
  wire [31:0] EX_MEM_io_alu_in; // @[TopPipeline.scala 25:28]
  wire [31:0] EX_MEM_io_alu_out; // @[TopPipeline.scala 25:28]
  wire [4:0] EX_MEM_io_rd_in; // @[TopPipeline.scala 25:28]
  wire [4:0] EX_MEM_io_rd_out; // @[TopPipeline.scala 25:28]
  wire  EX_MEM_io_MemWrite_in; // @[TopPipeline.scala 25:28]
  wire  EX_MEM_io_MemRead_in; // @[TopPipeline.scala 25:28]
  wire  EX_MEM_io_RegWrite_in; // @[TopPipeline.scala 25:28]
  wire  EX_MEM_io_MemtoReg_in; // @[TopPipeline.scala 25:28]
  wire  EX_MEM_io_MemWrite_out; // @[TopPipeline.scala 25:28]
  wire  EX_MEM_io_MemRead_out; // @[TopPipeline.scala 25:28]
  wire  EX_MEM_io_RegWrite_out; // @[TopPipeline.scala 25:28]
  wire  EX_MEM_io_MemtoReg_out; // @[TopPipeline.scala 25:28]
  wire  MEM_WB_clock; // @[TopPipeline.scala 26:28]
  wire  MEM_WB_reset; // @[TopPipeline.scala 26:28]
  wire [31:0] MEM_WB_io_mem_in; // @[TopPipeline.scala 26:28]
  wire [31:0] MEM_WB_io_mem_out; // @[TopPipeline.scala 26:28]
  wire [31:0] MEM_WB_io_alu_in; // @[TopPipeline.scala 26:28]
  wire [31:0] MEM_WB_io_alu_out; // @[TopPipeline.scala 26:28]
  wire [4:0] MEM_WB_io_rd_in; // @[TopPipeline.scala 26:28]
  wire [4:0] MEM_WB_io_rd_out; // @[TopPipeline.scala 26:28]
  wire  MEM_WB_io_RegWrite_in; // @[TopPipeline.scala 26:28]
  wire  MEM_WB_io_RegWrite_out; // @[TopPipeline.scala 26:28]
  wire  MEM_WB_io_MemtoReg_in; // @[TopPipeline.scala 26:28]
  wire  MEM_WB_io_MemtoReg_out; // @[TopPipeline.scala 26:28]
  wire [31:0] Stalling_io_inst_in; // @[TopPipeline.scala 28:30]
  wire [31:0] Stalling_io_inst_out; // @[TopPipeline.scala 28:30]
  wire  Stalling_io_MemRead; // @[TopPipeline.scala 28:30]
  wire [4:0] Stalling_io_rd; // @[TopPipeline.scala 28:30]
  wire [4:0] Stalling_io_rs1_s; // @[TopPipeline.scala 28:30]
  wire [4:0] Stalling_io_rs2_s; // @[TopPipeline.scala 28:30]
  wire  Stalling_io_stall; // @[TopPipeline.scala 28:30]
  wire  ForwardingUnit_io_RegWrite; // @[TopPipeline.scala 29:36]
  wire  ForwardingUnit_io_RegWrite1; // @[TopPipeline.scala 29:36]
  wire [4:0] ForwardingUnit_io_EX_MEM_rd; // @[TopPipeline.scala 29:36]
  wire [4:0] ForwardingUnit_io_MEM_WB_rd; // @[TopPipeline.scala 29:36]
  wire [4:0] ForwardingUnit_io_ID_EX_rs1_s; // @[TopPipeline.scala 29:36]
  wire [4:0] ForwardingUnit_io_ID_EX_rs2_s; // @[TopPipeline.scala 29:36]
  wire [1:0] ForwardingUnit_io_forwardA; // @[TopPipeline.scala 29:36]
  wire [1:0] ForwardingUnit_io_forwardB; // @[TopPipeline.scala 29:36]
  wire [2:0] Branch_io_func3; // @[TopPipeline.scala 37:29]
  wire [31:0] Branch_io_rs1; // @[TopPipeline.scala 37:29]
  wire [31:0] Branch_io_rs2; // @[TopPipeline.scala 37:29]
  wire  Branch_io_branch; // @[TopPipeline.scala 37:29]
  wire [4:0] BranchForwarding_io_ID_EX_rd; // @[TopPipeline.scala 38:39]
  wire  BranchForwarding_io_ID_EX_MemRead; // @[TopPipeline.scala 38:39]
  wire [4:0] BranchForwarding_io_EX_MEM_rd; // @[TopPipeline.scala 38:39]
  wire  BranchForwarding_io_EX_MEM_MemRead; // @[TopPipeline.scala 38:39]
  wire [4:0] BranchForwarding_io_MEM_WB_rd; // @[TopPipeline.scala 38:39]
  wire  BranchForwarding_io_MEM_WB_MemtoReg; // @[TopPipeline.scala 38:39]
  wire [4:0] BranchForwarding_io_rs1_s; // @[TopPipeline.scala 38:39]
  wire [4:0] BranchForwarding_io_rs2_s; // @[TopPipeline.scala 38:39]
  wire  BranchForwarding_io_branch; // @[TopPipeline.scala 38:39]
  wire [3:0] BranchForwarding_io_forwardA; // @[TopPipeline.scala 38:39]
  wire [3:0] BranchForwarding_io_forwardB; // @[TopPipeline.scala 38:39]
  wire [4:0] _T_7; // @[TopPipeline.scala 45:55]
  wire [4:0] _T_8; // @[TopPipeline.scala 46:55]
  wire  _T_18; // @[TopPipeline.scala 72:33]
  wire [31:0] _GEN_0; // @[TopPipeline.scala 72:44]
  wire  _T_22; // @[TopPipeline.scala 83:33]
  wire  _T_24; // @[TopPipeline.scala 84:39]
  wire  _T_26; // @[TopPipeline.scala 84:71]
  wire  _T_27; // @[TopPipeline.scala 84:50]
  wire [31:0] _T_28; // @[TopPipeline.scala 85:70]
  wire [31:0] _GEN_4; // @[TopPipeline.scala 84:82]
  wire [31:0] _GEN_5; // @[TopPipeline.scala 84:82]
  wire [31:0] _GEN_6; // @[TopPipeline.scala 84:82]
  wire [31:0] _GEN_7; // @[TopPipeline.scala 84:82]
  wire  _T_33; // @[TopPipeline.scala 91:38]
  wire [31:0] _T_34; // @[TopPipeline.scala 92:62]
  wire  _T_39; // @[TopPipeline.scala 96:38]
  wire [31:0] _T_40; // @[TopPipeline.scala 97:44]
  wire [31:0] _GEN_8; // @[TopPipeline.scala 96:50]
  wire [31:0] _GEN_9; // @[TopPipeline.scala 96:50]
  wire [31:0] _GEN_10; // @[TopPipeline.scala 96:50]
  wire [31:0] _GEN_11; // @[TopPipeline.scala 96:50]
  wire [31:0] _GEN_12; // @[TopPipeline.scala 91:50]
  wire [31:0] _GEN_13; // @[TopPipeline.scala 91:50]
  wire [31:0] _GEN_14; // @[TopPipeline.scala 91:50]
  wire [31:0] _GEN_15; // @[TopPipeline.scala 91:50]
  wire  _T_49; // @[TopPipeline.scala 129:44]
  wire  _T_51; // @[TopPipeline.scala 133:49]
  wire  _T_53; // @[TopPipeline.scala 137:49]
  wire  _T_55; // @[TopPipeline.scala 141:49]
  wire  _T_57; // @[TopPipeline.scala 145:49]
  wire  _T_59; // @[TopPipeline.scala 149:49]
  wire  _T_61; // @[TopPipeline.scala 153:49]
  wire  _T_63; // @[TopPipeline.scala 157:49]
  wire  _T_65; // @[TopPipeline.scala 161:49]
  wire  _T_67; // @[TopPipeline.scala 165:49]
  wire  _T_69; // @[TopPipeline.scala 169:49]
  wire [31:0] _GEN_20; // @[TopPipeline.scala 169:63]
  wire [31:0] _GEN_21; // @[TopPipeline.scala 169:63]
  wire [31:0] _GEN_22; // @[TopPipeline.scala 165:63]
  wire [31:0] _GEN_23; // @[TopPipeline.scala 165:63]
  wire [31:0] _GEN_24; // @[TopPipeline.scala 161:63]
  wire [31:0] _GEN_25; // @[TopPipeline.scala 161:63]
  wire [31:0] _GEN_26; // @[TopPipeline.scala 157:63]
  wire [31:0] _GEN_27; // @[TopPipeline.scala 157:63]
  wire [31:0] _GEN_28; // @[TopPipeline.scala 153:63]
  wire [31:0] _GEN_29; // @[TopPipeline.scala 153:63]
  wire [31:0] _GEN_30; // @[TopPipeline.scala 149:63]
  wire [31:0] _GEN_31; // @[TopPipeline.scala 149:63]
  wire [31:0] _GEN_32; // @[TopPipeline.scala 145:63]
  wire [31:0] _GEN_33; // @[TopPipeline.scala 145:63]
  wire [31:0] _GEN_34; // @[TopPipeline.scala 141:63]
  wire [31:0] _GEN_35; // @[TopPipeline.scala 141:63]
  wire [31:0] _GEN_36; // @[TopPipeline.scala 137:63]
  wire [31:0] _GEN_37; // @[TopPipeline.scala 137:63]
  wire [31:0] _GEN_38; // @[TopPipeline.scala 133:63]
  wire [31:0] _GEN_39; // @[TopPipeline.scala 133:63]
  wire  _T_71; // @[TopPipeline.scala 178:44]
  wire  _T_73; // @[TopPipeline.scala 180:49]
  wire  _T_75; // @[TopPipeline.scala 182:49]
  wire  _T_77; // @[TopPipeline.scala 184:49]
  wire  _T_79; // @[TopPipeline.scala 186:49]
  wire  _T_81; // @[TopPipeline.scala 188:49]
  wire [31:0] _GEN_42; // @[TopPipeline.scala 188:63]
  wire [31:0] _GEN_43; // @[TopPipeline.scala 186:63]
  wire [31:0] _GEN_44; // @[TopPipeline.scala 184:63]
  wire [31:0] _GEN_45; // @[TopPipeline.scala 182:63]
  wire [31:0] _GEN_46; // @[TopPipeline.scala 180:63]
  wire  _T_85; // @[TopPipeline.scala 199:33]
  wire  _T_87; // @[TopPipeline.scala 201:38]
  wire  _T_89; // @[TopPipeline.scala 203:38]
  wire [31:0] _GEN_48; // @[TopPipeline.scala 203:50]
  wire [31:0] _GEN_49; // @[TopPipeline.scala 201:50]
  wire  _T_92; // @[TopPipeline.scala 209:32]
  wire  _T_94; // @[TopPipeline.scala 211:50]
  wire  _T_96; // @[TopPipeline.scala 212:55]
  wire  _T_98; // @[TopPipeline.scala 213:55]
  wire [31:0] _GEN_51; // @[TopPipeline.scala 213:67]
  wire [31:0] _GEN_52; // @[TopPipeline.scala 212:67]
  wire [31:0] _GEN_53; // @[TopPipeline.scala 211:62]
  wire  _T_106; // @[TopPipeline.scala 227:32]
  wire [31:0] _T_107; // @[TopPipeline.scala 228:48]
  wire  _T_109; // @[TopPipeline.scala 230:37]
  wire [31:0] _T_110; // @[TopPipeline.scala 231:47]
  wire  _T_112; // @[TopPipeline.scala 234:50]
  wire  _T_114; // @[TopPipeline.scala 235:55]
  wire [31:0] _GEN_59; // @[TopPipeline.scala 236:67]
  wire [31:0] _GEN_60; // @[TopPipeline.scala 235:67]
  wire [31:0] _GEN_61; // @[TopPipeline.scala 234:62]
  wire [31:0] _GEN_62; // @[TopPipeline.scala 230:49]
  wire  _T_118; // @[TopPipeline.scala 240:38]
  wire  _T_120; // @[TopPipeline.scala 240:66]
  wire  _T_121; // @[TopPipeline.scala 240:46]
  wire  _T_125; // @[TopPipeline.scala 244:66]
  wire  _T_126; // @[TopPipeline.scala 244:46]
  wire  _T_129; // @[TopPipeline.scala 271:38]
  Alu Alu ( // @[TopPipeline.scala 13:25]
    .io_AluControl(Alu_io_AluControl),
    .io_in1(Alu_io_in1),
    .io_in2(Alu_io_in2),
    .io_out(Alu_io_out)
  );
  Control Control ( // @[TopPipeline.scala 14:29]
    .io_opcode(Control_io_opcode),
    .io_MemWrite(Control_io_MemWrite),
    .io_Branch(Control_io_Branch),
    .io_MemRead(Control_io_MemRead),
    .io_RegWrite(Control_io_RegWrite),
    .io_MemtoReg(Control_io_MemtoReg),
    .io_AluOp(Control_io_AluOp),
    .io_OpA(Control_io_OpA),
    .io_OpB(Control_io_OpB),
    .io_ExtSel(Control_io_ExtSel),
    .io_NextPc(Control_io_NextPc)
  );
  ImmGen ImmediateGeneration ( // @[TopPipeline.scala 15:41]
    .io_instruction(ImmediateGeneration_io_instruction),
    .io_pc(ImmediateGeneration_io_pc),
    .io_s_imm(ImmediateGeneration_io_s_imm),
    .io_sb_imm(ImmediateGeneration_io_sb_imm),
    .io_uj_imm(ImmediateGeneration_io_uj_imm),
    .io_u_imm(ImmediateGeneration_io_u_imm),
    .io_i_imm(ImmediateGeneration_io_i_imm)
  );
  AluCntrl AluControl ( // @[TopPipeline.scala 16:32]
    .io_aluOp(AluControl_io_aluOp),
    .io_funct3(AluControl_io_funct3),
    .io_funct7(AluControl_io_funct7),
    .io_out(AluControl_io_out)
  );
  Register Register ( // @[TopPipeline.scala 17:30]
    .clock(Register_clock),
    .io_RegWrite(Register_io_RegWrite),
    .io_rs1_s(Register_io_rs1_s),
    .io_rs2_s(Register_io_rs2_s),
    .io_rd(Register_io_rd),
    .io_WriteData(Register_io_WriteData),
    .io_rs1(Register_io_rs1),
    .io_rs2(Register_io_rs2)
  );
  Memory Memory ( // @[TopPipeline.scala 18:28]
    .clock(Memory_clock),
    .io_wrAddr(Memory_io_wrAddr),
    .io_rdData(Memory_io_rdData)
  );
  Pc Pc ( // @[TopPipeline.scala 19:24]
    .clock(Pc_clock),
    .reset(Pc_reset),
    .io_input(Pc_io_input),
    .io_pc4(Pc_io_pc4),
    .io_pc(Pc_io_pc)
  );
  Jalr Jalr ( // @[TopPipeline.scala 20:26]
    .io_in1(Jalr_io_in1),
    .io_in2(Jalr_io_in2),
    .io_out(Jalr_io_out)
  );
  MemoryD DataMemory ( // @[TopPipeline.scala 21:32]
    .clock(DataMemory_clock),
    .io_Addr(DataMemory_io_Addr),
    .io_Data(DataMemory_io_Data),
    .io_MemWrite(DataMemory_io_MemWrite),
    .io_MemRead(DataMemory_io_MemRead),
    .io_out(DataMemory_io_out)
  );
  IF_ID_Reg IF_ID ( // @[TopPipeline.scala 23:27]
    .clock(IF_ID_clock),
    .reset(IF_ID_reset),
    .io_pc_in(IF_ID_io_pc_in),
    .io_pc_out(IF_ID_io_pc_out),
    .io_pc4_in(IF_ID_io_pc4_in),
    .io_pc4_out(IF_ID_io_pc4_out),
    .io_inst_in(IF_ID_io_inst_in),
    .io_inst_out(IF_ID_io_inst_out)
  );
  ID_EX_Reg ID_EX ( // @[TopPipeline.scala 24:27]
    .clock(ID_EX_clock),
    .reset(ID_EX_reset),
    .io_pc_in(ID_EX_io_pc_in),
    .io_pc_out(ID_EX_io_pc_out),
    .io_pc4_in(ID_EX_io_pc4_in),
    .io_pc4_out(ID_EX_io_pc4_out),
    .io_MemWrite_in(ID_EX_io_MemWrite_in),
    .io_MemRead_in(ID_EX_io_MemRead_in),
    .io_RegWrite_in(ID_EX_io_RegWrite_in),
    .io_MemtoReg_in(ID_EX_io_MemtoReg_in),
    .io_AluOp_in(ID_EX_io_AluOp_in),
    .io_OpA_in(ID_EX_io_OpA_in),
    .io_OpB_in(ID_EX_io_OpB_in),
    .io_MemWrite_out(ID_EX_io_MemWrite_out),
    .io_MemRead_out(ID_EX_io_MemRead_out),
    .io_RegWrite_out(ID_EX_io_RegWrite_out),
    .io_MemtoReg_out(ID_EX_io_MemtoReg_out),
    .io_AluOp_out(ID_EX_io_AluOp_out),
    .io_OpA_out(ID_EX_io_OpA_out),
    .io_OpB_out(ID_EX_io_OpB_out),
    .io_imm_in(ID_EX_io_imm_in),
    .io_imm_out(ID_EX_io_imm_out),
    .io_func3_in(ID_EX_io_func3_in),
    .io_func7_in(ID_EX_io_func7_in),
    .io_func3_out(ID_EX_io_func3_out),
    .io_func7_out(ID_EX_io_func7_out),
    .io_rs1_in(ID_EX_io_rs1_in),
    .io_rs2_in(ID_EX_io_rs2_in),
    .io_rs1_out(ID_EX_io_rs1_out),
    .io_rs2_out(ID_EX_io_rs2_out),
    .io_rs1_s_in(ID_EX_io_rs1_s_in),
    .io_rs2_s_in(ID_EX_io_rs2_s_in),
    .io_rs1_s_out(ID_EX_io_rs1_s_out),
    .io_rs2_s_out(ID_EX_io_rs2_s_out),
    .io_rd_in(ID_EX_io_rd_in),
    .io_rd_out(ID_EX_io_rd_out)
  );
  EX_MEM_Reg EX_MEM ( // @[TopPipeline.scala 25:28]
    .clock(EX_MEM_clock),
    .reset(EX_MEM_reset),
    .io_rs2_in(EX_MEM_io_rs2_in),
    .io_rs2_out(EX_MEM_io_rs2_out),
    .io_alu_in(EX_MEM_io_alu_in),
    .io_alu_out(EX_MEM_io_alu_out),
    .io_rd_in(EX_MEM_io_rd_in),
    .io_rd_out(EX_MEM_io_rd_out),
    .io_MemWrite_in(EX_MEM_io_MemWrite_in),
    .io_MemRead_in(EX_MEM_io_MemRead_in),
    .io_RegWrite_in(EX_MEM_io_RegWrite_in),
    .io_MemtoReg_in(EX_MEM_io_MemtoReg_in),
    .io_MemWrite_out(EX_MEM_io_MemWrite_out),
    .io_MemRead_out(EX_MEM_io_MemRead_out),
    .io_RegWrite_out(EX_MEM_io_RegWrite_out),
    .io_MemtoReg_out(EX_MEM_io_MemtoReg_out)
  );
  MEM_WB_Reg MEM_WB ( // @[TopPipeline.scala 26:28]
    .clock(MEM_WB_clock),
    .reset(MEM_WB_reset),
    .io_mem_in(MEM_WB_io_mem_in),
    .io_mem_out(MEM_WB_io_mem_out),
    .io_alu_in(MEM_WB_io_alu_in),
    .io_alu_out(MEM_WB_io_alu_out),
    .io_rd_in(MEM_WB_io_rd_in),
    .io_rd_out(MEM_WB_io_rd_out),
    .io_RegWrite_in(MEM_WB_io_RegWrite_in),
    .io_RegWrite_out(MEM_WB_io_RegWrite_out),
    .io_MemtoReg_in(MEM_WB_io_MemtoReg_in),
    .io_MemtoReg_out(MEM_WB_io_MemtoReg_out)
  );
  StallingUnit Stalling ( // @[TopPipeline.scala 28:30]
    .io_inst_in(Stalling_io_inst_in),
    .io_inst_out(Stalling_io_inst_out),
    .io_MemRead(Stalling_io_MemRead),
    .io_rd(Stalling_io_rd),
    .io_rs1_s(Stalling_io_rs1_s),
    .io_rs2_s(Stalling_io_rs2_s),
    .io_stall(Stalling_io_stall)
  );
  ForwardingUnit ForwardingUnit ( // @[TopPipeline.scala 29:36]
    .io_RegWrite(ForwardingUnit_io_RegWrite),
    .io_RegWrite1(ForwardingUnit_io_RegWrite1),
    .io_EX_MEM_rd(ForwardingUnit_io_EX_MEM_rd),
    .io_MEM_WB_rd(ForwardingUnit_io_MEM_WB_rd),
    .io_ID_EX_rs1_s(ForwardingUnit_io_ID_EX_rs1_s),
    .io_ID_EX_rs2_s(ForwardingUnit_io_ID_EX_rs2_s),
    .io_forwardA(ForwardingUnit_io_forwardA),
    .io_forwardB(ForwardingUnit_io_forwardB)
  );
  BranchUnit Branch ( // @[TopPipeline.scala 37:29]
    .io_func3(Branch_io_func3),
    .io_rs1(Branch_io_rs1),
    .io_rs2(Branch_io_rs2),
    .io_branch(Branch_io_branch)
  );
  BranchForwardUnit BranchForwarding ( // @[TopPipeline.scala 38:39]
    .io_ID_EX_rd(BranchForwarding_io_ID_EX_rd),
    .io_ID_EX_MemRead(BranchForwarding_io_ID_EX_MemRead),
    .io_EX_MEM_rd(BranchForwarding_io_EX_MEM_rd),
    .io_EX_MEM_MemRead(BranchForwarding_io_EX_MEM_MemRead),
    .io_MEM_WB_rd(BranchForwarding_io_MEM_WB_rd),
    .io_MEM_WB_MemtoReg(BranchForwarding_io_MEM_WB_MemtoReg),
    .io_rs1_s(BranchForwarding_io_rs1_s),
    .io_rs2_s(BranchForwarding_io_rs2_s),
    .io_branch(BranchForwarding_io_branch),
    .io_forwardA(BranchForwarding_io_forwardA),
    .io_forwardB(BranchForwarding_io_forwardB)
  );
  assign _T_7 = IF_ID_io_inst_out[19:15]; // @[TopPipeline.scala 45:55]
  assign _T_8 = IF_ID_io_inst_out[24:20]; // @[TopPipeline.scala 46:55]
  assign _T_18 = Stalling_io_stall; // @[TopPipeline.scala 72:33]
  assign _GEN_0 = _T_18 ? Stalling_io_inst_out : Memory_io_rdData; // @[TopPipeline.scala 72:44]
  assign _T_22 = Control_io_NextPc == 2'h1; // @[TopPipeline.scala 83:33]
  assign _T_24 = Branch_io_branch; // @[TopPipeline.scala 84:39]
  assign _T_26 = Control_io_Branch; // @[TopPipeline.scala 84:71]
  assign _T_27 = _T_24 & _T_26; // @[TopPipeline.scala 84:50]
  assign _T_28 = $unsigned(ImmediateGeneration_io_sb_imm); // @[TopPipeline.scala 85:70]
  assign _GEN_4 = _T_27 ? _T_28 : Pc_io_pc4; // @[TopPipeline.scala 84:82]
  assign _GEN_5 = _T_27 ? 32'h0 : Pc_io_pc; // @[TopPipeline.scala 84:82]
  assign _GEN_6 = _T_27 ? 32'h0 : Pc_io_pc4; // @[TopPipeline.scala 84:82]
  assign _GEN_7 = _T_27 ? 32'h0 : _GEN_0; // @[TopPipeline.scala 84:82]
  assign _T_33 = Control_io_NextPc == 2'h2; // @[TopPipeline.scala 91:38]
  assign _T_34 = $unsigned(ImmediateGeneration_io_uj_imm); // @[TopPipeline.scala 92:62]
  assign _T_39 = Control_io_NextPc == 2'h3; // @[TopPipeline.scala 96:38]
  assign _T_40 = $unsigned(Jalr_io_out); // @[TopPipeline.scala 97:44]
  assign _GEN_8 = _T_39 ? _T_40 : Pc_io_pc4; // @[TopPipeline.scala 96:50]
  assign _GEN_9 = _T_39 ? 32'h0 : Pc_io_pc; // @[TopPipeline.scala 96:50]
  assign _GEN_10 = _T_39 ? 32'h0 : Pc_io_pc4; // @[TopPipeline.scala 96:50]
  assign _GEN_11 = _T_39 ? 32'h0 : _GEN_0; // @[TopPipeline.scala 96:50]
  assign _GEN_12 = _T_33 ? _T_34 : _GEN_8; // @[TopPipeline.scala 91:50]
  assign _GEN_13 = _T_33 ? 32'h0 : _GEN_9; // @[TopPipeline.scala 91:50]
  assign _GEN_14 = _T_33 ? 32'h0 : _GEN_10; // @[TopPipeline.scala 91:50]
  assign _GEN_15 = _T_33 ? 32'h0 : _GEN_11; // @[TopPipeline.scala 91:50]
  assign _T_49 = BranchForwarding_io_forwardA == 4'h0; // @[TopPipeline.scala 129:44]
  assign _T_51 = BranchForwarding_io_forwardA == 4'h1; // @[TopPipeline.scala 133:49]
  assign _T_53 = BranchForwarding_io_forwardA == 4'h2; // @[TopPipeline.scala 137:49]
  assign _T_55 = BranchForwarding_io_forwardA == 4'h3; // @[TopPipeline.scala 141:49]
  assign _T_57 = BranchForwarding_io_forwardA == 4'h4; // @[TopPipeline.scala 145:49]
  assign _T_59 = BranchForwarding_io_forwardA == 4'h5; // @[TopPipeline.scala 149:49]
  assign _T_61 = BranchForwarding_io_forwardA == 4'h6; // @[TopPipeline.scala 153:49]
  assign _T_63 = BranchForwarding_io_forwardA == 4'h7; // @[TopPipeline.scala 157:49]
  assign _T_65 = BranchForwarding_io_forwardA == 4'h8; // @[TopPipeline.scala 161:49]
  assign _T_67 = BranchForwarding_io_forwardA == 4'h9; // @[TopPipeline.scala 165:49]
  assign _T_69 = BranchForwarding_io_forwardA == 4'ha; // @[TopPipeline.scala 169:49]
  assign _GEN_20 = Register_io_rs1; // @[TopPipeline.scala 169:63]
  assign _GEN_21 = _T_69 ? $signed(Register_io_WriteData) : $signed(Register_io_rs1); // @[TopPipeline.scala 169:63]
  assign _GEN_22 = _T_67 ? $signed(Register_io_rs1) : $signed(_GEN_20); // @[TopPipeline.scala 165:63]
  assign _GEN_23 = _T_67 ? $signed(DataMemory_io_out) : $signed(_GEN_21); // @[TopPipeline.scala 165:63]
  assign _GEN_24 = _T_65 ? $signed(Register_io_rs1) : $signed(_GEN_22); // @[TopPipeline.scala 161:63]
  assign _GEN_25 = _T_65 ? $signed(Register_io_WriteData) : $signed(_GEN_23); // @[TopPipeline.scala 161:63]
  assign _GEN_26 = _T_63 ? $signed(Register_io_rs1) : $signed(_GEN_24); // @[TopPipeline.scala 157:63]
  assign _GEN_27 = _T_63 ? $signed(EX_MEM_io_alu_out) : $signed(_GEN_25); // @[TopPipeline.scala 157:63]
  assign _GEN_28 = _T_61 ? $signed(Register_io_rs1) : $signed(_GEN_26); // @[TopPipeline.scala 153:63]
  assign _GEN_29 = _T_61 ? $signed(Alu_io_out) : $signed(_GEN_27); // @[TopPipeline.scala 153:63]
  assign _GEN_30 = _T_59 ? $signed(Register_io_WriteData) : $signed(_GEN_28); // @[TopPipeline.scala 149:63]
  assign _GEN_31 = _T_59 ? $signed(Register_io_rs1) : $signed(_GEN_29); // @[TopPipeline.scala 149:63]
  assign _GEN_32 = _T_57 ? $signed(DataMemory_io_out) : $signed(_GEN_30); // @[TopPipeline.scala 145:63]
  assign _GEN_33 = _T_57 ? $signed(Register_io_rs1) : $signed(_GEN_31); // @[TopPipeline.scala 145:63]
  assign _GEN_34 = _T_55 ? $signed(Register_io_WriteData) : $signed(_GEN_32); // @[TopPipeline.scala 141:63]
  assign _GEN_35 = _T_55 ? $signed(Register_io_rs1) : $signed(_GEN_33); // @[TopPipeline.scala 141:63]
  assign _GEN_36 = _T_53 ? $signed(EX_MEM_io_alu_out) : $signed(_GEN_34); // @[TopPipeline.scala 137:63]
  assign _GEN_37 = _T_53 ? $signed(Register_io_rs1) : $signed(_GEN_35); // @[TopPipeline.scala 137:63]
  assign _GEN_38 = _T_51 ? $signed(Alu_io_out) : $signed(_GEN_36); // @[TopPipeline.scala 133:63]
  assign _GEN_39 = _T_51 ? $signed(Register_io_rs1) : $signed(_GEN_37); // @[TopPipeline.scala 133:63]
  assign _T_71 = BranchForwarding_io_forwardB == 4'h0; // @[TopPipeline.scala 178:44]
  assign _T_73 = BranchForwarding_io_forwardB == 4'h1; // @[TopPipeline.scala 180:49]
  assign _T_75 = BranchForwarding_io_forwardB == 4'h2; // @[TopPipeline.scala 182:49]
  assign _T_77 = BranchForwarding_io_forwardB == 4'h3; // @[TopPipeline.scala 184:49]
  assign _T_79 = BranchForwarding_io_forwardB == 4'h4; // @[TopPipeline.scala 186:49]
  assign _T_81 = BranchForwarding_io_forwardB == 4'h5; // @[TopPipeline.scala 188:49]
  assign _GEN_42 = _T_81 ? $signed(Register_io_WriteData) : $signed(Register_io_rs2); // @[TopPipeline.scala 188:63]
  assign _GEN_43 = _T_79 ? $signed(DataMemory_io_out) : $signed(_GEN_42); // @[TopPipeline.scala 186:63]
  assign _GEN_44 = _T_77 ? $signed(Register_io_WriteData) : $signed(_GEN_43); // @[TopPipeline.scala 184:63]
  assign _GEN_45 = _T_75 ? $signed(EX_MEM_io_alu_out) : $signed(_GEN_44); // @[TopPipeline.scala 182:63]
  assign _GEN_46 = _T_73 ? $signed(Alu_io_out) : $signed(_GEN_45); // @[TopPipeline.scala 180:63]
  assign _T_85 = Control_io_ExtSel == 2'h0; // @[TopPipeline.scala 199:33]
  assign _T_87 = Control_io_ExtSel == 2'h1; // @[TopPipeline.scala 201:38]
  assign _T_89 = Control_io_ExtSel == 2'h2; // @[TopPipeline.scala 203:38]
  assign _GEN_48 = _T_89 ? $signed(ImmediateGeneration_io_s_imm) : $signed(32'sh0); // @[TopPipeline.scala 203:50]
  assign _GEN_49 = _T_87 ? $signed(ImmediateGeneration_io_u_imm) : $signed(_GEN_48); // @[TopPipeline.scala 201:50]
  assign _T_92 = ID_EX_io_OpB_out; // @[TopPipeline.scala 209:32]
  assign _T_94 = ForwardingUnit_io_forwardB == 2'h2; // @[TopPipeline.scala 211:50]
  assign _T_96 = ForwardingUnit_io_forwardB == 2'h1; // @[TopPipeline.scala 212:55]
  assign _T_98 = ForwardingUnit_io_forwardB == 2'h0; // @[TopPipeline.scala 213:55]
  assign _GEN_51 = _T_98 ? $signed(ID_EX_io_rs2_out) : $signed(32'sh0); // @[TopPipeline.scala 213:67]
  assign _GEN_52 = _T_96 ? $signed(Register_io_WriteData) : $signed(_GEN_51); // @[TopPipeline.scala 212:67]
  assign _GEN_53 = _T_94 ? $signed(EX_MEM_io_alu_out) : $signed(_GEN_52); // @[TopPipeline.scala 211:62]
  assign _T_106 = ID_EX_io_OpA_out == 2'h2; // @[TopPipeline.scala 227:32]
  assign _T_107 = $signed(ID_EX_io_pc4_out); // @[TopPipeline.scala 228:48]
  assign _T_109 = ID_EX_io_OpA_out == 2'h1; // @[TopPipeline.scala 230:37]
  assign _T_110 = $signed(ID_EX_io_pc_out); // @[TopPipeline.scala 231:47]
  assign _T_112 = ForwardingUnit_io_forwardA == 2'h2; // @[TopPipeline.scala 234:50]
  assign _T_114 = ForwardingUnit_io_forwardA == 2'h1; // @[TopPipeline.scala 235:55]
  assign _GEN_59 = ID_EX_io_rs1_out; // @[TopPipeline.scala 236:67]
  assign _GEN_60 = _T_114 ? $signed(Register_io_WriteData) : $signed(_GEN_59); // @[TopPipeline.scala 235:67]
  assign _GEN_61 = _T_112 ? $signed(EX_MEM_io_alu_out) : $signed(_GEN_60); // @[TopPipeline.scala 234:62]
  assign _GEN_62 = _T_109 ? $signed(_T_110) : $signed(_GEN_61); // @[TopPipeline.scala 230:49]
  assign _T_118 = MEM_WB_io_RegWrite_out; // @[TopPipeline.scala 240:38]
  assign _T_120 = MEM_WB_io_rd_out == _T_7; // @[TopPipeline.scala 240:66]
  assign _T_121 = _T_118 & _T_120; // @[TopPipeline.scala 240:46]
  assign _T_125 = MEM_WB_io_rd_out == _T_8; // @[TopPipeline.scala 244:66]
  assign _T_126 = _T_118 & _T_125; // @[TopPipeline.scala 244:46]
  assign _T_129 = MEM_WB_io_MemtoReg_out; // @[TopPipeline.scala 271:38]
  assign io_Reg_Out = Register_io_WriteData; // @[TopPipeline.scala 207:20]
  assign Alu_io_AluControl = AluControl_io_out; // @[TopPipeline.scala 206:27]
  assign Alu_io_in1 = _T_106 ? $signed(_T_107) : $signed(_GEN_62); // @[TopPipeline.scala 228:28 TopPipeline.scala 231:28 TopPipeline.scala 234:74 TopPipeline.scala 235:79 TopPipeline.scala 236:79 TopPipeline.scala 237:40]
  assign Alu_io_in2 = _T_92 ? $signed(ID_EX_io_imm_out) : $signed(_GEN_53); // @[TopPipeline.scala 51:20 TopPipeline.scala 210:28 TopPipeline.scala 217:36 TopPipeline.scala 220:36 TopPipeline.scala 223:36]
  assign Control_io_opcode = IF_ID_io_inst_out[6:0]; // @[TopPipeline.scala 56:27]
  assign ImmediateGeneration_io_instruction = IF_ID_io_inst_out; // @[TopPipeline.scala 57:44]
  assign ImmediateGeneration_io_pc = IF_ID_io_pc_out; // @[TopPipeline.scala 58:35]
  assign AluControl_io_aluOp = ID_EX_io_AluOp_out; // @[TopPipeline.scala 197:29]
  assign AluControl_io_funct3 = ID_EX_io_func3_out; // @[TopPipeline.scala 195:30]
  assign AluControl_io_funct7 = ID_EX_io_func7_out; // @[TopPipeline.scala 196:30]
  assign Register_clock = clock;
  assign Register_io_RegWrite = MEM_WB_io_RegWrite_out; // @[TopPipeline.scala 274:30]
  assign Register_io_rs1_s = IF_ID_io_inst_out[19:15]; // @[TopPipeline.scala 60:27]
  assign Register_io_rs2_s = IF_ID_io_inst_out[24:20]; // @[TopPipeline.scala 61:27]
  assign Register_io_rd = MEM_WB_io_rd_out; // @[TopPipeline.scala 275:24]
  assign Register_io_WriteData = _T_129 ? $signed(MEM_WB_io_mem_out) : $signed(MEM_WB_io_alu_out); // @[TopPipeline.scala 271:69 TopPipeline.scala 272:43]
  assign Memory_clock = clock;
  assign Memory_io_wrAddr = Pc_io_pc[11:2]; // @[TopPipeline.scala 50:26]
  assign Pc_clock = clock;
  assign Pc_reset = reset;
  assign Pc_io_input = _T_22 ? _GEN_4 : _GEN_12; // @[TopPipeline.scala 74:29 TopPipeline.scala 82:29 TopPipeline.scala 85:37 TopPipeline.scala 89:39 TopPipeline.scala 92:29 TopPipeline.scala 97:29 TopPipeline.scala 102:29]
  assign Jalr_io_in1 = _T_49 ? $signed(Register_io_rs1) : $signed(_GEN_39); // @[TopPipeline.scala 131:29 TopPipeline.scala 135:29 TopPipeline.scala 139:29 TopPipeline.scala 143:29 TopPipeline.scala 147:29 TopPipeline.scala 151:29 TopPipeline.scala 155:29 TopPipeline.scala 159:29 TopPipeline.scala 163:29 TopPipeline.scala 167:29 TopPipeline.scala 171:29 TopPipeline.scala 175:29]
  assign Jalr_io_in2 = ImmediateGeneration_io_i_imm; // @[TopPipeline.scala 191:21]
  assign DataMemory_clock = clock;
  assign DataMemory_io_Addr = EX_MEM_io_alu_out[9:2]; // @[TopPipeline.scala 259:28]
  assign DataMemory_io_Data = EX_MEM_io_rs2_out; // @[TopPipeline.scala 260:28]
  assign DataMemory_io_MemWrite = EX_MEM_io_MemWrite_out; // @[TopPipeline.scala 261:32]
  assign DataMemory_io_MemRead = EX_MEM_io_MemtoReg_out; // @[TopPipeline.scala 262:31]
  assign IF_ID_clock = clock;
  assign IF_ID_reset = reset;
  assign IF_ID_io_pc_in = _T_22 ? _GEN_5 : _GEN_13; // @[TopPipeline.scala 53:24 TopPipeline.scala 86:40 TopPipeline.scala 93:32 TopPipeline.scala 98:32]
  assign IF_ID_io_pc4_in = _T_22 ? _GEN_6 : _GEN_14; // @[TopPipeline.scala 54:25 TopPipeline.scala 87:41 TopPipeline.scala 94:33 TopPipeline.scala 99:33]
  assign IF_ID_io_inst_in = _T_22 ? _GEN_7 : _GEN_15; // @[TopPipeline.scala 73:34 TopPipeline.scala 79:34 TopPipeline.scala 88:42 TopPipeline.scala 95:34 TopPipeline.scala 100:34]
  assign ID_EX_clock = clock;
  assign ID_EX_reset = reset;
  assign ID_EX_io_pc_in = IF_ID_io_pc_out; // @[TopPipeline.scala 108:24]
  assign ID_EX_io_pc4_in = IF_ID_io_pc4_out; // @[TopPipeline.scala 109:25]
  assign ID_EX_io_MemWrite_in = _T_18 ? 1'h0 : Control_io_MemWrite; // @[TopPipeline.scala 75:38 TopPipeline.scala 80:38]
  assign ID_EX_io_MemRead_in = Control_io_MemRead; // @[TopPipeline.scala 113:29]
  assign ID_EX_io_RegWrite_in = _T_18 ? 1'h0 : Control_io_RegWrite; // @[TopPipeline.scala 76:38 TopPipeline.scala 81:38]
  assign ID_EX_io_MemtoReg_in = Control_io_MemtoReg; // @[TopPipeline.scala 114:30]
  assign ID_EX_io_AluOp_in = Control_io_AluOp; // @[TopPipeline.scala 115:27]
  assign ID_EX_io_OpA_in = Control_io_OpA; // @[TopPipeline.scala 116:25]
  assign ID_EX_io_OpB_in = Control_io_OpB; // @[TopPipeline.scala 117:25]
  assign ID_EX_io_imm_in = _T_85 ? $signed(ImmediateGeneration_io_i_imm) : $signed(_GEN_49); // @[TopPipeline.scala 200:33 TopPipeline.scala 202:33 TopPipeline.scala 204:33 TopPipeline.scala 205:37]
  assign ID_EX_io_func3_in = IF_ID_io_inst_out[14:12]; // @[TopPipeline.scala 193:27]
  assign ID_EX_io_func7_in = IF_ID_io_inst_out[30]; // @[TopPipeline.scala 194:27]
  assign ID_EX_io_rs1_in = _T_121 ? $signed(Register_io_WriteData) : $signed(Register_io_rs1); // @[TopPipeline.scala 121:25 TopPipeline.scala 241:33 TopPipeline.scala 243:37]
  assign ID_EX_io_rs2_in = _T_126 ? $signed(Register_io_WriteData) : $signed(Register_io_rs2); // @[TopPipeline.scala 122:25 TopPipeline.scala 245:33 TopPipeline.scala 247:37]
  assign ID_EX_io_rs1_s_in = IF_ID_io_inst_out[19:15]; // @[TopPipeline.scala 123:27]
  assign ID_EX_io_rs2_s_in = IF_ID_io_inst_out[24:20]; // @[TopPipeline.scala 124:27]
  assign ID_EX_io_rd_in = IF_ID_io_inst_out[11:7]; // @[TopPipeline.scala 125:24]
  assign EX_MEM_clock = clock;
  assign EX_MEM_reset = reset;
  assign EX_MEM_io_rs2_in = _T_92 ? $signed(_GEN_53) : $signed(_GEN_53); // @[TopPipeline.scala 52:26 TopPipeline.scala 211:80 TopPipeline.scala 212:85 TopPipeline.scala 213:85 TopPipeline.scala 218:42 TopPipeline.scala 221:42 TopPipeline.scala 224:42]
  assign EX_MEM_io_alu_in = Alu_io_out; // @[TopPipeline.scala 253:26]
  assign EX_MEM_io_rd_in = ID_EX_io_rd_out; // @[TopPipeline.scala 252:25]
  assign EX_MEM_io_MemWrite_in = ID_EX_io_MemWrite_out; // @[TopPipeline.scala 254:31]
  assign EX_MEM_io_MemRead_in = ID_EX_io_MemRead_out; // @[TopPipeline.scala 255:30]
  assign EX_MEM_io_RegWrite_in = ID_EX_io_RegWrite_out; // @[TopPipeline.scala 256:31]
  assign EX_MEM_io_MemtoReg_in = ID_EX_io_MemtoReg_out; // @[TopPipeline.scala 257:31]
  assign MEM_WB_clock = clock;
  assign MEM_WB_reset = reset;
  assign MEM_WB_io_mem_in = DataMemory_io_out; // @[TopPipeline.scala 267:26]
  assign MEM_WB_io_alu_in = EX_MEM_io_alu_out; // @[TopPipeline.scala 266:26]
  assign MEM_WB_io_rd_in = EX_MEM_io_rd_out; // @[TopPipeline.scala 265:25]
  assign MEM_WB_io_RegWrite_in = EX_MEM_io_RegWrite_out; // @[TopPipeline.scala 268:31]
  assign MEM_WB_io_MemtoReg_in = EX_MEM_io_MemtoReg_out; // @[TopPipeline.scala 269:31]
  assign Stalling_io_inst_in = IF_ID_io_inst_out; // @[TopPipeline.scala 68:29]
  assign Stalling_io_MemRead = ID_EX_io_MemRead_out; // @[TopPipeline.scala 64:29]
  assign Stalling_io_rd = ID_EX_io_rd_out; // @[TopPipeline.scala 65:24]
  assign Stalling_io_rs1_s = IF_ID_io_inst_out[19:15]; // @[TopPipeline.scala 66:27]
  assign Stalling_io_rs2_s = IF_ID_io_inst_out[24:20]; // @[TopPipeline.scala 67:27]
  assign ForwardingUnit_io_RegWrite = EX_MEM_io_RegWrite_out; // @[TopPipeline.scala 30:36]
  assign ForwardingUnit_io_RegWrite1 = MEM_WB_io_RegWrite_out; // @[TopPipeline.scala 31:37]
  assign ForwardingUnit_io_EX_MEM_rd = EX_MEM_io_rd_out; // @[TopPipeline.scala 32:37]
  assign ForwardingUnit_io_MEM_WB_rd = MEM_WB_io_rd_out; // @[TopPipeline.scala 33:37]
  assign ForwardingUnit_io_ID_EX_rs1_s = ID_EX_io_rs1_s_out; // @[TopPipeline.scala 34:39]
  assign ForwardingUnit_io_ID_EX_rs2_s = ID_EX_io_rs2_s_out; // @[TopPipeline.scala 35:39]
  assign Branch_io_func3 = IF_ID_io_inst_out[14:12]; // @[TopPipeline.scala 127:25]
  assign Branch_io_rs1 = _T_49 ? $signed(Register_io_rs1) : $signed(_GEN_38); // @[TopPipeline.scala 130:31 TopPipeline.scala 134:31 TopPipeline.scala 138:31 TopPipeline.scala 142:31 TopPipeline.scala 146:31 TopPipeline.scala 150:31 TopPipeline.scala 154:31 TopPipeline.scala 158:31 TopPipeline.scala 162:31 TopPipeline.scala 166:31 TopPipeline.scala 170:31 TopPipeline.scala 174:31]
  assign Branch_io_rs2 = _T_71 ? $signed(Register_io_rs2) : $signed(_GEN_46); // @[TopPipeline.scala 179:31 TopPipeline.scala 181:31 TopPipeline.scala 183:31 TopPipeline.scala 185:31 TopPipeline.scala 187:31 TopPipeline.scala 189:31 TopPipeline.scala 190:35]
  assign BranchForwarding_io_ID_EX_rd = ID_EX_io_rd_out; // @[TopPipeline.scala 39:38]
  assign BranchForwarding_io_ID_EX_MemRead = ID_EX_io_MemRead_out; // @[TopPipeline.scala 40:43]
  assign BranchForwarding_io_EX_MEM_rd = EX_MEM_io_rd_out; // @[TopPipeline.scala 41:39]
  assign BranchForwarding_io_EX_MEM_MemRead = EX_MEM_io_MemRead_out; // @[TopPipeline.scala 42:44]
  assign BranchForwarding_io_MEM_WB_rd = MEM_WB_io_rd_out; // @[TopPipeline.scala 43:39]
  assign BranchForwarding_io_MEM_WB_MemtoReg = MEM_WB_io_MemtoReg_out; // @[TopPipeline.scala 44:45]
  assign BranchForwarding_io_rs1_s = IF_ID_io_inst_out[19:15]; // @[TopPipeline.scala 45:35]
  assign BranchForwarding_io_rs2_s = IF_ID_io_inst_out[24:20]; // @[TopPipeline.scala 46:35]
  assign BranchForwarding_io_branch = Control_io_Branch; // @[TopPipeline.scala 47:36]
endmodule
