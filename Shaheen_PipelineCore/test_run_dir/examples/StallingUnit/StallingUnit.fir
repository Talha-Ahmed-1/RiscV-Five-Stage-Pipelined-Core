;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit StallingUnit : 
  module StallingUnit : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip inst_in : UInt<32>, inst_out : UInt<32>, flip MemRead : UInt<1>, flip rd : UInt<5>, flip rs1_s : UInt<5>, flip rs2_s : UInt<5>, stall : UInt<1>, flip pc_in : UInt<32>, pc_out : UInt<32>, flip pc4_in : UInt<32>, pc4_out : UInt<32>, pc_s : UInt<1>, control_s : UInt<1>}
    
    node _T_32 = eq(io.MemRead, UInt<1>("h01")) @[StallingUnit.scala 22:26]
    node _T_33 = eq(io.rd, io.rs1_s) @[StallingUnit.scala 22:48]
    node _T_34 = eq(io.rd, io.rs2_s) @[StallingUnit.scala 22:72]
    node _T_35 = or(_T_33, _T_34) @[StallingUnit.scala 22:62]
    node _T_36 = and(_T_32, _T_35) @[StallingUnit.scala 22:37]
    when _T_36 : @[StallingUnit.scala 22:87]
      io.stall <= UInt<1>("h01") @[StallingUnit.scala 23:26]
      io.pc_s <= UInt<1>("h01") @[StallingUnit.scala 24:25]
      io.control_s <= UInt<1>("h01") @[StallingUnit.scala 25:30]
      io.inst_out <= io.inst_in @[StallingUnit.scala 26:29]
      io.pc_out <= io.pc_in @[StallingUnit.scala 27:27]
      io.pc4_out <= io.pc4_in @[StallingUnit.scala 28:28]
      skip @[StallingUnit.scala 22:87]
    else : @[StallingUnit.scala 30:20]
      io.stall <= UInt<1>("h00") @[StallingUnit.scala 31:26]
      io.inst_out <= UInt<1>("h00") @[StallingUnit.scala 32:29]
      io.pc_s <= UInt<1>("h00") @[StallingUnit.scala 33:25]
      io.control_s <= UInt<1>("h00") @[StallingUnit.scala 34:30]
      io.pc_out <= UInt<1>("h00") @[StallingUnit.scala 35:27]
      io.pc4_out <= UInt<1>("h00") @[StallingUnit.scala 36:28]
      skip @[StallingUnit.scala 30:20]
    
