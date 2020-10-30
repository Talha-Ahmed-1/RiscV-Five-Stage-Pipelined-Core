;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit ForwardingUnit : 
  module ForwardingUnit : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip RegWrite : UInt<1>, flip EX_MEM_rd : UInt<5>, flip MEM_WB_rd : UInt<5>, flip ID_EX_rs1_s : UInt<5>, flip ID_EX_rs2_s : UInt<5>, forwardA : UInt<2>, forwardB : UInt<2>}
    
    io.forwardA <= UInt<1>("h00") @[ForwardingUnit.scala 17:21]
    io.forwardB <= UInt<1>("h00") @[ForwardingUnit.scala 18:21]
    node _T_22 = eq(io.RegWrite, UInt<1>("h01")) @[ForwardingUnit.scala 19:27]
    node _T_24 = neq(io.EX_MEM_rd, UInt<1>("h00")) @[ForwardingUnit.scala 19:54]
    node _T_25 = and(_T_22, _T_24) @[ForwardingUnit.scala 19:38]
    when _T_25 : @[ForwardingUnit.scala 19:69]
      node _T_26 = eq(io.EX_MEM_rd, io.ID_EX_rs1_s) @[ForwardingUnit.scala 20:36]
      when _T_26 : @[ForwardingUnit.scala 20:55]
        io.forwardA <= UInt<2>("h02") @[ForwardingUnit.scala 20:68]
        skip @[ForwardingUnit.scala 20:55]
      else : @[ForwardingUnit.scala 21:60]
        node _T_28 = eq(io.EX_MEM_rd, io.ID_EX_rs2_s) @[ForwardingUnit.scala 21:41]
        when _T_28 : @[ForwardingUnit.scala 21:60]
          io.forwardB <= UInt<2>("h02") @[ForwardingUnit.scala 21:73]
          skip @[ForwardingUnit.scala 21:60]
      skip @[ForwardingUnit.scala 19:69]
    node _T_31 = eq(io.RegWrite, UInt<1>("h01")) @[ForwardingUnit.scala 23:27]
    node _T_33 = neq(io.MEM_WB_rd, UInt<1>("h00")) @[ForwardingUnit.scala 23:54]
    node _T_34 = and(_T_31, _T_33) @[ForwardingUnit.scala 23:38]
    when _T_34 : @[ForwardingUnit.scala 23:69]
      node _T_35 = eq(io.MEM_WB_rd, io.ID_EX_rs1_s) @[ForwardingUnit.scala 24:36]
      when _T_35 : @[ForwardingUnit.scala 24:55]
        io.forwardA <= UInt<1>("h01") @[ForwardingUnit.scala 24:68]
        skip @[ForwardingUnit.scala 24:55]
      else : @[ForwardingUnit.scala 25:60]
        node _T_37 = eq(io.MEM_WB_rd, io.ID_EX_rs2_s) @[ForwardingUnit.scala 25:41]
        when _T_37 : @[ForwardingUnit.scala 25:60]
          io.forwardB <= UInt<1>("h01") @[ForwardingUnit.scala 25:73]
          skip @[ForwardingUnit.scala 25:60]
      skip @[ForwardingUnit.scala 23:69]
    
