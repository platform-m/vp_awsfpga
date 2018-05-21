// ================================================================
// NVDLA Open Source Project
// 
// Copyright(c) 2016 - 2017 NVIDIA Corporation.  Licensed under the
// NVDLA Open Hardware License; Check "LICENSE" which comes with 
// this distribution for more information.
// ================================================================

// File Name: memdut_regs.h

#ifndef _MEMDUT_REGS_H_
#define _MEMDUT_REGS_H_

#define MEMDUT_APB_TRAN_BASE_ADDR       (0x00000000)
#define MEMDUT_AXI_PORT_SPACE           (0x00100000)
#define MEMDUT_AXI_PORT_SPACE_NUM       (1)

#define MEMDUT_APB_DELAY                (MEMDUT_APB_TRAN_BASE_ADDR + 0x0080)
#define MEMDUT_APB_TEST_REG(n)          (MEMDUT_APB_TRAN_BASE_ADDR + 0x0100+n*4)
#define MEMDUT_INTR_TEST_SET            (MEMDUT_APB_TRAN_BASE_ADDR + 0x2000)
#define MEMDUT_INTR_TEST_CLEAR          (MEMDUT_APB_TRAN_BASE_ADDR + 0x2004)
#define MEMDUT_INTR_TEST_MODE1          (MEMDUT_APB_TRAN_BASE_ADDR + 0x2008)
#define MEMDUT_INTR_TEST_MODE2          (MEMDUT_APB_TRAN_BASE_ADDR + 0x200C)
#define MEMDUT_INTR_TEST_EN             (MEMDUT_APB_TRAN_BASE_ADDR + 0x2010)

#define MEMDUT_N_TEST_CTRL(n)           (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0000)
#define MEMDUT_N_CMD_NUM_TOTAL(n)       (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0004)
#define MEMDUT_N_CMD_LINE_CTRL(n)       (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0008)
#define MEMDUT_N_WDATA_LINE_CTRL(n)     (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x000C)
#define MEMDUT_N_WCMD_LINE_CTRL(n)      (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0010)
#define MEMDUT_N_RDATA_LINE_CTRL(n)     (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0014)
#define MEMDUT_N_RESP_DELAY_CTRL(n)     (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0018)
#define MEMDUT_N_ATG_CMD_CTRL(n)        (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0020)
#define MEMDUT_N_ATG_AXI_ID(n)          (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0024)
#define MEMDUT_N_ATG_ADDR_BASE(n)       (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0028)
#define MEMDUT_N_ATG_ADDR_LOW(n)        (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x002C)
#define MEMDUT_N_ATG_DATA_CTRL(n)       (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0030)
#define MEMDUT_N_ATG_WSTRB(n)           (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0034)
#define MEMDUT_N_OUTSTAND_STATUS(n)     (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0040)
#define MEMDUT_N_TEST_STATUS(n)         (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0044)
#define MEMDUT_N_TEST_ERR_LOC(n)        (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0048)
#define MEMDUT_N_RESP_CNT(n)            (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x004C)
#define MEMDUT_N_RRESP_CNT(n)           (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0050)
#define MEMDUT_N_RDATA_CNT(n)           (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0054)
#define MEMDUT_N_REQ_CNT(n)             (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0058)
#define MEMDUT_N_REQ_WR_CNT(n)          (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x005C)
#define MEMDUT_N_REQ_WD_CNT(n)          (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0060)
#define MEMDUT_N_TEST_TIMER(n)          (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x0064)
#define MEMDUT_N_CMD_RAM_BASE(n)        (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x10000)
#define MEMDUT_N_WE_RAM_BASE(n)         (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x30000)
#define MEMDUT_N_WDATA_RAM_BASE(n)      (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0x40000)
#define MEMDUT_N_RDATA_RAM_BASE(n)      (MEMDUT_APB_TRAN_BASE_ADDR + n*MEMDUT_AXI_PORT_SPACE + 0xA0000)

#endif /* _MEMDUT_REGS_H_ */