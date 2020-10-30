module BindsTo_0_instruction_memory(
  input         clock,
  input  [9:0]  io_write_address,
  output [31:0] io_read_data
);

initial begin
  $readmemh("/home/ubabnadeem/Desktop/abc.txt", instruction_memory.memory);
end
                      endmodule

bind instruction_memory BindsTo_0_instruction_memory BindsTo_0_instruction_memory_Inst(.*);