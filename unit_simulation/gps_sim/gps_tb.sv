//************************************************************************
// Copyright (C) 2020 Massachusetts Institute of Technology
//
// File Name:      gps_tb.sv
// Program:        Common Evaluation Platform (CEP)
// Description:    GPS Core unit testbench
// Notes:        
//
//************************************************************************

`timescale 1ns/1ns

//
// Name of the DUT & TB if not pass in from Make
//
`ifndef DUT_NAME
 `define DUT_NAME gps
`endif

`ifndef TB_NAME
 `define TB_NAME(d) d``_tb
`endif

//
// Pull in the stimulus and other info
//
`include "gps_stimulus.txt"
//
// Some derived macros
//
//
`define MKSTR(x) `"x`"
//
// Check and print if error
// Order of arguments MUST match sample order
//
// x=sample data
// i1=input#1, i2=input#2, etc..
// o1=output#1, o2=output#2, etc..
// j* = dont care input/output (used for HEX filler)
//
`define APPLY_N_CHECK(x,j2,i2,j3,i3,j4,o1,j5,o2,o3,o4) \
  {j2,i2,j3,i3,j4,exp_``o1,j5,exp_``o2,exp_``o3,exp_``o4}=x; \
  exp_pat={exp_``o1,exp_``o2,exp_``o3,exp_``o4}; \
  act_pat={o1,o2,o3,o4}; \
  if (exp_pat!=act_pat) begin \
     $display("ERROR: miscompared at sample#%0d",i); \
     if (errCnt==0) $display("  PAT={%s,%s,%s,%s}", `"o1`",`"o2`",`"o3`",`"o4`"); \
     $display("  EXP=0x%x",exp_pat); \
     $display("  ACT=0x%x",act_pat); \
     errCnt++;\
  end





//
//
module `TB_NAME ;

   //
   //
   string dut_name_list [] = '{`MKSTR(`DUT_NAME)};
   reg [`GPS_OUTPUT_WIDTH-1:0]  exp_pat, act_pat;
   //
   // IOs
   //
   reg 		    sys_clk_50=0;
   reg 		    sync_rst_in=1;
   
   reg [5:0] 	    sv_num=0;
   reg 		    startRound=0;
   wire [12:0] 	    ca_code;
   wire [127:0]     p_code;
   wire [127:0]     l_code;
   wire 	    l_code_valid;
   
   //
   // filler & expected output
   //
   reg [12:0] 	    exp_ca_code=0;
   reg [127:0]     exp_p_code=0;
   reg [127:0]     exp_l_code=0;
   reg 		   exp_l_code_valid=0;

   reg [2:0] 	   j1=0;
   reg [2:0] 	   j2=0;
   reg [1:0] 	   j3=0;
   reg [2:0] 	   j4=0;
   reg [2:0] 	   j5=0;
   
   //
   int 		errCnt=0;
   //
   // Simple clock driving the DUT
   //
   initial begin
      forever #5 sys_clk_50 = !sys_clk_50;
   end
   //    
   //
   // DUT instantiation
   //
   `DUT_NAME u1(.*);
   //
   // -------------------
   // Test starts here
   // -------------------   
   //
   initial begin
	 //
	 // Pulse the DUT's reset & drive input to zeros (known states)
	 //
	 {startRound,sv_num} = 0;
	 
	 //
	 sync_rst_in = 1;
	 repeat (21) @(posedge sys_clk_50); // MUST be 21 for this core because slow clock must align
	 @(negedge sys_clk_50);      // in stimulus, rst de-asserted after negedge
	 #2 sync_rst_in = 0;
	 repeat (50) @(negedge sys_clk_50); // for output to stablize           
      
      //
      // do the unlocking here if enable
      //
      
      //
      // pulse the DUT's reset and playback
      //
      playback_data();
      $finish;
   end
   //
   // Read data from file into buffer and playback for compare
   //
   task playback_data;
      int i;
      event err;
      begin
	 //
	 // open file for checking
	 //
	 $display("Reading %d samples from buffer GPS_buffer",`GPS_SAMPLE_COUNT);
	 // now playback and check
	 for (i=0;i<`GPS_SAMPLE_COUNT;i++) begin
	    // the order MUST match the samples' order
	    `APPLY_N_CHECK(GPS_buffer[i],
			   j2,startRound,
			   j3,sv_num[5:0],
			   j4,l_code_valid,
			   j5,ca_code[12:0],
			   l_code[127:0],
			   p_code[127:0]);

	    @(negedge sys_clk_50); // next sample	       
	 end // for (int i=0;i<`GPS_SAMPLE_COUNT;i++)
	 //
	 // print summary
	 //
	 if (errCnt) begin
	    $display("==== DUT=%s TEST FAILED with %0d errors ====",dut_name_list[0],errCnt);
	 end
	 else begin
	    $display("==== DUT=%s TEST PASSED  ====",dut_name_list[0]);
	 end
      end
   endtask //   
   
endmodule // gps_tb
