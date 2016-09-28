/*******************************************************************************
* File Name: spiClock.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_spiClock_H)
#define CY_CLOCK_spiClock_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_20 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void spiClock_Start(void) ;
void spiClock_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void spiClock_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void spiClock_StandbyPower(uint8 state) ;
void spiClock_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 spiClock_GetDividerRegister(void) ;
void spiClock_SetModeRegister(uint8 modeBitMask) ;
void spiClock_ClearModeRegister(uint8 modeBitMask) ;
uint8 spiClock_GetModeRegister(void) ;
void spiClock_SetSourceRegister(uint8 clkSource) ;
uint8 spiClock_GetSourceRegister(void) ;
#if defined(spiClock__CFG3)
void spiClock_SetPhaseRegister(uint8 clkPhase) ;
uint8 spiClock_GetPhaseRegister(void) ;
#endif /* defined(spiClock__CFG3) */

#define spiClock_Enable()                       spiClock_Start()
#define spiClock_Disable()                      spiClock_Stop()
#define spiClock_SetDivider(clkDivider)         spiClock_SetDividerRegister(clkDivider, 1u)
#define spiClock_SetDividerValue(clkDivider)    spiClock_SetDividerRegister((clkDivider) - 1u, 1u)
#define spiClock_SetMode(clkMode)               spiClock_SetModeRegister(clkMode)
#define spiClock_SetSource(clkSource)           spiClock_SetSourceRegister(clkSource)
#if defined(spiClock__CFG3)
#define spiClock_SetPhase(clkPhase)             spiClock_SetPhaseRegister(clkPhase)
#define spiClock_SetPhaseValue(clkPhase)        spiClock_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(spiClock__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define spiClock_CLKEN              (* (reg8 *) spiClock__PM_ACT_CFG)
#define spiClock_CLKEN_PTR          ((reg8 *) spiClock__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define spiClock_CLKSTBY            (* (reg8 *) spiClock__PM_STBY_CFG)
#define spiClock_CLKSTBY_PTR        ((reg8 *) spiClock__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define spiClock_DIV_LSB            (* (reg8 *) spiClock__CFG0)
#define spiClock_DIV_LSB_PTR        ((reg8 *) spiClock__CFG0)
#define spiClock_DIV_PTR            ((reg16 *) spiClock__CFG0)

/* Clock MSB divider configuration register. */
#define spiClock_DIV_MSB            (* (reg8 *) spiClock__CFG1)
#define spiClock_DIV_MSB_PTR        ((reg8 *) spiClock__CFG1)

/* Mode and source configuration register */
#define spiClock_MOD_SRC            (* (reg8 *) spiClock__CFG2)
#define spiClock_MOD_SRC_PTR        ((reg8 *) spiClock__CFG2)

#if defined(spiClock__CFG3)
/* Analog clock phase configuration register */
#define spiClock_PHASE              (* (reg8 *) spiClock__CFG3)
#define spiClock_PHASE_PTR          ((reg8 *) spiClock__CFG3)
#endif /* defined(spiClock__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define spiClock_CLKEN_MASK         spiClock__PM_ACT_MSK
#define spiClock_CLKSTBY_MASK       spiClock__PM_STBY_MSK

/* CFG2 field masks */
#define spiClock_SRC_SEL_MSK        spiClock__CFG2_SRC_SEL_MASK
#define spiClock_MODE_MASK          (~(spiClock_SRC_SEL_MSK))

#if defined(spiClock__CFG3)
/* CFG3 phase mask */
#define spiClock_PHASE_MASK         spiClock__CFG3_PHASE_DLY_MASK
#endif /* defined(spiClock__CFG3) */

#endif /* CY_CLOCK_spiClock_H */


/* [] END OF FILE */
