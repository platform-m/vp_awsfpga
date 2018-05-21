// ================================================================
// NVDLA Open Source Project
// 
// Copyright(c) 2016 - 2017 NVIDIA Corporation.  Licensed under the
// NVDLA Open Hardware License; Check "LICENSE" which comes with 
// this distribution for more information.
// ================================================================

// File Name: nv_ram_rws_512x32.v

module nv_ram_rws_512x32 ( 
		clk,
		ra,
		re,
		dout,
		wa,
		we,
		di,
		pwrbus_ram_pd
);

// port list
input			clk;
input	[8:0]	ra;
input			re;
output	[31:0]	dout;
input	[8:0]	wa;
input			we;
input	[31:0]	di;
input	[31:0]	pwrbus_ram_pd;

//reg and wire list
reg		[8:0]	ra_d;
wire	[31:0]	dout;
reg		[31:0]	M	[511:0];

always @( posedge clk ) begin
    if (we)
       M[wa] <= di;
end
 
always @( posedge clk ) begin
    if (re) 
       ra_d <= ra;
end
assign  dout = M[ra_d];

endmodule