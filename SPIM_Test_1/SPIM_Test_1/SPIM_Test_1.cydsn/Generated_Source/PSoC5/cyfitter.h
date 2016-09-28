#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* SPIM_BSPIM */
#define SPIM_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB07_08_ACTL
#define SPIM_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB07_08_CTL
#define SPIM_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB07_08_CTL
#define SPIM_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB07_08_CTL
#define SPIM_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB07_08_CTL
#define SPIM_BSPIM_BitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB07_08_MSK
#define SPIM_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB07_08_MSK
#define SPIM_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB07_08_MSK
#define SPIM_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB07_08_MSK
#define SPIM_BSPIM_BitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB07_ACTL
#define SPIM_BSPIM_BitCounter__CONTROL_REG CYREG_B0_UDB07_CTL
#define SPIM_BSPIM_BitCounter__CONTROL_ST_REG CYREG_B0_UDB07_ST_CTL
#define SPIM_BSPIM_BitCounter__COUNT_REG CYREG_B0_UDB07_CTL
#define SPIM_BSPIM_BitCounter__COUNT_ST_REG CYREG_B0_UDB07_ST_CTL
#define SPIM_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB07_MSK_ACTL
#define SPIM_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB07_MSK_ACTL
#define SPIM_BSPIM_BitCounter__PERIOD_REG CYREG_B0_UDB07_MSK
#define SPIM_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB07_08_ACTL
#define SPIM_BSPIM_BitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB07_08_ST
#define SPIM_BSPIM_BitCounter_ST__MASK_REG CYREG_B0_UDB07_MSK
#define SPIM_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB07_MSK_ACTL
#define SPIM_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB07_MSK_ACTL
#define SPIM_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB07_ACTL
#define SPIM_BSPIM_BitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB07_ST_CTL
#define SPIM_BSPIM_BitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB07_ST_CTL
#define SPIM_BSPIM_BitCounter_ST__STATUS_REG CYREG_B0_UDB07_ST
#define SPIM_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB04_05_ACTL
#define SPIM_BSPIM_RxStsReg__16BIT_STATUS_REG CYREG_B0_UDB04_05_ST
#define SPIM_BSPIM_RxStsReg__4__MASK 0x10u
#define SPIM_BSPIM_RxStsReg__4__POS 4
#define SPIM_BSPIM_RxStsReg__5__MASK 0x20u
#define SPIM_BSPIM_RxStsReg__5__POS 5
#define SPIM_BSPIM_RxStsReg__6__MASK 0x40u
#define SPIM_BSPIM_RxStsReg__6__POS 6
#define SPIM_BSPIM_RxStsReg__MASK 0x70u
#define SPIM_BSPIM_RxStsReg__MASK_REG CYREG_B0_UDB04_MSK
#define SPIM_BSPIM_RxStsReg__STATUS_AUX_CTL_REG CYREG_B0_UDB04_ACTL
#define SPIM_BSPIM_RxStsReg__STATUS_REG CYREG_B0_UDB04_ST
#define SPIM_BSPIM_sR8_Dp_u0__16BIT_A0_REG CYREG_B0_UDB04_05_A0
#define SPIM_BSPIM_sR8_Dp_u0__16BIT_A1_REG CYREG_B0_UDB04_05_A1
#define SPIM_BSPIM_sR8_Dp_u0__16BIT_D0_REG CYREG_B0_UDB04_05_D0
#define SPIM_BSPIM_sR8_Dp_u0__16BIT_D1_REG CYREG_B0_UDB04_05_D1
#define SPIM_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB04_05_ACTL
#define SPIM_BSPIM_sR8_Dp_u0__16BIT_F0_REG CYREG_B0_UDB04_05_F0
#define SPIM_BSPIM_sR8_Dp_u0__16BIT_F1_REG CYREG_B0_UDB04_05_F1
#define SPIM_BSPIM_sR8_Dp_u0__A0_A1_REG CYREG_B0_UDB04_A0_A1
#define SPIM_BSPIM_sR8_Dp_u0__A0_REG CYREG_B0_UDB04_A0
#define SPIM_BSPIM_sR8_Dp_u0__A1_REG CYREG_B0_UDB04_A1
#define SPIM_BSPIM_sR8_Dp_u0__D0_D1_REG CYREG_B0_UDB04_D0_D1
#define SPIM_BSPIM_sR8_Dp_u0__D0_REG CYREG_B0_UDB04_D0
#define SPIM_BSPIM_sR8_Dp_u0__D1_REG CYREG_B0_UDB04_D1
#define SPIM_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG CYREG_B0_UDB04_ACTL
#define SPIM_BSPIM_sR8_Dp_u0__F0_F1_REG CYREG_B0_UDB04_F0_F1
#define SPIM_BSPIM_sR8_Dp_u0__F0_REG CYREG_B0_UDB04_F0
#define SPIM_BSPIM_sR8_Dp_u0__F1_REG CYREG_B0_UDB04_F1
#define SPIM_BSPIM_TxStsReg__0__MASK 0x01u
#define SPIM_BSPIM_TxStsReg__0__POS 0
#define SPIM_BSPIM_TxStsReg__1__MASK 0x02u
#define SPIM_BSPIM_TxStsReg__1__POS 1
#define SPIM_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB06_07_ACTL
#define SPIM_BSPIM_TxStsReg__16BIT_STATUS_REG CYREG_B0_UDB06_07_ST
#define SPIM_BSPIM_TxStsReg__2__MASK 0x04u
#define SPIM_BSPIM_TxStsReg__2__POS 2
#define SPIM_BSPIM_TxStsReg__3__MASK 0x08u
#define SPIM_BSPIM_TxStsReg__3__POS 3
#define SPIM_BSPIM_TxStsReg__4__MASK 0x10u
#define SPIM_BSPIM_TxStsReg__4__POS 4
#define SPIM_BSPIM_TxStsReg__MASK 0x1Fu
#define SPIM_BSPIM_TxStsReg__MASK_REG CYREG_B0_UDB06_MSK
#define SPIM_BSPIM_TxStsReg__STATUS_AUX_CTL_REG CYREG_B0_UDB06_ACTL
#define SPIM_BSPIM_TxStsReg__STATUS_REG CYREG_B0_UDB06_ST

/* SPIM_IntClock */
#define SPIM_IntClock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define SPIM_IntClock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define SPIM_IntClock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define SPIM_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define SPIM_IntClock__INDEX 0x00u
#define SPIM_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define SPIM_IntClock__PM_ACT_MSK 0x01u
#define SPIM_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define SPIM_IntClock__PM_STBY_MSK 0x01u

/* spi_ss */
#define spi_ss__0__INTTYPE CYREG_PICU12_INTTYPE5
#define spi_ss__0__MASK 0x20u
#define spi_ss__0__PC CYREG_PRT12_PC5
#define spi_ss__0__PORT 12u
#define spi_ss__0__SHIFT 5u
#define spi_ss__AG CYREG_PRT12_AG
#define spi_ss__BIE CYREG_PRT12_BIE
#define spi_ss__BIT_MASK CYREG_PRT12_BIT_MASK
#define spi_ss__BYP CYREG_PRT12_BYP
#define spi_ss__DM0 CYREG_PRT12_DM0
#define spi_ss__DM1 CYREG_PRT12_DM1
#define spi_ss__DM2 CYREG_PRT12_DM2
#define spi_ss__DR CYREG_PRT12_DR
#define spi_ss__INP_DIS CYREG_PRT12_INP_DIS
#define spi_ss__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define spi_ss__MASK 0x20u
#define spi_ss__PORT 12u
#define spi_ss__PRT CYREG_PRT12_PRT
#define spi_ss__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define spi_ss__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define spi_ss__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define spi_ss__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define spi_ss__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define spi_ss__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define spi_ss__PS CYREG_PRT12_PS
#define spi_ss__SHIFT 5u
#define spi_ss__SIO_CFG CYREG_PRT12_SIO_CFG
#define spi_ss__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define spi_ss__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define spi_ss__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define spi_ss__SLW CYREG_PRT12_SLW

/* spi_miso */
#define spi_miso__0__INTTYPE CYREG_PICU12_INTTYPE2
#define spi_miso__0__MASK 0x04u
#define spi_miso__0__PC CYREG_PRT12_PC2
#define spi_miso__0__PORT 12u
#define spi_miso__0__SHIFT 2u
#define spi_miso__AG CYREG_PRT12_AG
#define spi_miso__BIE CYREG_PRT12_BIE
#define spi_miso__BIT_MASK CYREG_PRT12_BIT_MASK
#define spi_miso__BYP CYREG_PRT12_BYP
#define spi_miso__DM0 CYREG_PRT12_DM0
#define spi_miso__DM1 CYREG_PRT12_DM1
#define spi_miso__DM2 CYREG_PRT12_DM2
#define spi_miso__DR CYREG_PRT12_DR
#define spi_miso__INP_DIS CYREG_PRT12_INP_DIS
#define spi_miso__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define spi_miso__MASK 0x04u
#define spi_miso__PORT 12u
#define spi_miso__PRT CYREG_PRT12_PRT
#define spi_miso__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define spi_miso__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define spi_miso__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define spi_miso__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define spi_miso__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define spi_miso__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define spi_miso__PS CYREG_PRT12_PS
#define spi_miso__SHIFT 2u
#define spi_miso__SIO_CFG CYREG_PRT12_SIO_CFG
#define spi_miso__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define spi_miso__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define spi_miso__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define spi_miso__SLW CYREG_PRT12_SLW

/* spi_mosi */
#define spi_mosi__0__INTTYPE CYREG_PICU12_INTTYPE3
#define spi_mosi__0__MASK 0x08u
#define spi_mosi__0__PC CYREG_PRT12_PC3
#define spi_mosi__0__PORT 12u
#define spi_mosi__0__SHIFT 3u
#define spi_mosi__AG CYREG_PRT12_AG
#define spi_mosi__BIE CYREG_PRT12_BIE
#define spi_mosi__BIT_MASK CYREG_PRT12_BIT_MASK
#define spi_mosi__BYP CYREG_PRT12_BYP
#define spi_mosi__DM0 CYREG_PRT12_DM0
#define spi_mosi__DM1 CYREG_PRT12_DM1
#define spi_mosi__DM2 CYREG_PRT12_DM2
#define spi_mosi__DR CYREG_PRT12_DR
#define spi_mosi__INP_DIS CYREG_PRT12_INP_DIS
#define spi_mosi__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define spi_mosi__MASK 0x08u
#define spi_mosi__PORT 12u
#define spi_mosi__PRT CYREG_PRT12_PRT
#define spi_mosi__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define spi_mosi__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define spi_mosi__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define spi_mosi__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define spi_mosi__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define spi_mosi__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define spi_mosi__PS CYREG_PRT12_PS
#define spi_mosi__SHIFT 3u
#define spi_mosi__SIO_CFG CYREG_PRT12_SIO_CFG
#define spi_mosi__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define spi_mosi__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define spi_mosi__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define spi_mosi__SLW CYREG_PRT12_SLW

/* spi_sclk */
#define spi_sclk__0__INTTYPE CYREG_PICU12_INTTYPE4
#define spi_sclk__0__MASK 0x10u
#define spi_sclk__0__PC CYREG_PRT12_PC4
#define spi_sclk__0__PORT 12u
#define spi_sclk__0__SHIFT 4u
#define spi_sclk__AG CYREG_PRT12_AG
#define spi_sclk__BIE CYREG_PRT12_BIE
#define spi_sclk__BIT_MASK CYREG_PRT12_BIT_MASK
#define spi_sclk__BYP CYREG_PRT12_BYP
#define spi_sclk__DM0 CYREG_PRT12_DM0
#define spi_sclk__DM1 CYREG_PRT12_DM1
#define spi_sclk__DM2 CYREG_PRT12_DM2
#define spi_sclk__DR CYREG_PRT12_DR
#define spi_sclk__INP_DIS CYREG_PRT12_INP_DIS
#define spi_sclk__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define spi_sclk__MASK 0x10u
#define spi_sclk__PORT 12u
#define spi_sclk__PRT CYREG_PRT12_PRT
#define spi_sclk__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define spi_sclk__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define spi_sclk__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define spi_sclk__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define spi_sclk__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define spi_sclk__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define spi_sclk__PS CYREG_PRT12_PS
#define spi_sclk__SHIFT 4u
#define spi_sclk__SIO_CFG CYREG_PRT12_SIO_CFG
#define spi_sclk__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define spi_sclk__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define spi_sclk__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define spi_sclk__SLW CYREG_PRT12_SLW

/* spi_rx_int */
#define spi_rx_int__0__INTTYPE CYREG_PICU12_INTTYPE6
#define spi_rx_int__0__MASK 0x40u
#define spi_rx_int__0__PC CYREG_PRT12_PC6
#define spi_rx_int__0__PORT 12u
#define spi_rx_int__0__SHIFT 6u
#define spi_rx_int__AG CYREG_PRT12_AG
#define spi_rx_int__BIE CYREG_PRT12_BIE
#define spi_rx_int__BIT_MASK CYREG_PRT12_BIT_MASK
#define spi_rx_int__BYP CYREG_PRT12_BYP
#define spi_rx_int__DM0 CYREG_PRT12_DM0
#define spi_rx_int__DM1 CYREG_PRT12_DM1
#define spi_rx_int__DM2 CYREG_PRT12_DM2
#define spi_rx_int__DR CYREG_PRT12_DR
#define spi_rx_int__INP_DIS CYREG_PRT12_INP_DIS
#define spi_rx_int__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define spi_rx_int__MASK 0x40u
#define spi_rx_int__PORT 12u
#define spi_rx_int__PRT CYREG_PRT12_PRT
#define spi_rx_int__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define spi_rx_int__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define spi_rx_int__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define spi_rx_int__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define spi_rx_int__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define spi_rx_int__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define spi_rx_int__PS CYREG_PRT12_PS
#define spi_rx_int__SHIFT 6u
#define spi_rx_int__SIO_CFG CYREG_PRT12_SIO_CFG
#define spi_rx_int__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define spi_rx_int__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define spi_rx_int__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define spi_rx_int__SLW CYREG_PRT12_SLW

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "SPIM_Test_1"
#define CY_VERSION "PSoC Creator  3.3 CP3"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 19u
#define CYDEV_CHIP_DIE_PSOC4A 11u
#define CYDEV_CHIP_DIE_PSOC5LP 18u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 11u
#define CYDEV_CHIP_MEMBER_4C 16u
#define CYDEV_CHIP_MEMBER_4D 7u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 12u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 10u
#define CYDEV_CHIP_MEMBER_4I 15u
#define CYDEV_CHIP_MEMBER_4J 8u
#define CYDEV_CHIP_MEMBER_4K 9u
#define CYDEV_CHIP_MEMBER_4L 14u
#define CYDEV_CHIP_MEMBER_4M 13u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 18u
#define CYDEV_CHIP_MEMBER_5B 17u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 0
#define CYDEV_CONFIGURATION_DMA 1
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_DMA
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 0
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
