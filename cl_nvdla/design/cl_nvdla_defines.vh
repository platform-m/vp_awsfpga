// Amazon FPGA Hardware Development Kit
//
// Copyright 2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Amazon Software License (the "License"). You may not use
// this file except in compliance with the License. A copy of the License is
// located at
//
//    http://aws.amazon.com/asl/
//
// or in the "license" file accompanying this file. This file is distributed on
// an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, express or
// implied. See the License for the specific language governing permissions and
// limitations under the License.

// Copyright (c) 2009-2017, NVIDIA CORPORATION. All rights reserved.
// NVIDIA’s contributions are offered under the Amazon Software License

`ifndef CL_NVDLA_DEFINES
`define CL_NVDLA_DEFINES

//Put module name of the CL design here.  This is used to instantiate in top.sv
`define CL_NAME cl_nvdla

//Highly recommeneded.  For lib FIFO block, uses less async reset (take advantage of
// FPGA flop init capability).  This will help with routing resources.
`define FPGA_LESS_RST

`define SH_SDA
//uncomment below to make SH and CL async
`define SH_CL_ASYNC

// Uncomment to disable Virtual JTAG
`define DISABLE_VJTAG_DEBUG
`define FPGA
`define SYNTHESIS
`define DESIGNWARE_NOEXIST
`define VLIB_BYPASS_POWER_CG
`define NV_FPGA_UNIT
`define NV_FPGA_FIFOGEN
`ifdef NV_LARGE
`define NVDLA_CVSRAM_PRESENT
`define NVDLA_AXI_WIDTH_256
`endif
`ifdef NV_MEDIUM_1024_FULL
`define NVDLA_CVSRAM_PRESENT
`define NVDLA_AXI_WIDTH_256
`endif
`ifdef NV_MEDIUM_512
`define NVDLA_AXI_WIDTH_128
`endif
`ifdef NV_SMALL_256_FULL
`define NVDLA_CVSRAM_PRESENT
`define NVDLA_AXI_WIDTH_64
`endif
`ifdef NV_SMALL_256
`define NVDLA_AXI_WIDTH_64
`endif
`ifdef NV_SMALL
`define NVDLA_AXI_WIDTH_64
`endif

`endif

