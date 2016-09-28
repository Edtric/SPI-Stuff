/*******************************************************************************
* File Name: spi_rx_int.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_spi_rx_int_H) /* Pins spi_rx_int_H */
#define CY_PINS_spi_rx_int_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "spi_rx_int_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 spi_rx_int__PORT == 15 && ((spi_rx_int__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    spi_rx_int_Write(uint8 value);
void    spi_rx_int_SetDriveMode(uint8 mode);
uint8   spi_rx_int_ReadDataReg(void);
uint8   spi_rx_int_Read(void);
void    spi_rx_int_SetInterruptMode(uint16 position, uint16 mode);
uint8   spi_rx_int_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the spi_rx_int_SetDriveMode() function.
     *  @{
     */
        #define spi_rx_int_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define spi_rx_int_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define spi_rx_int_DM_RES_UP          PIN_DM_RES_UP
        #define spi_rx_int_DM_RES_DWN         PIN_DM_RES_DWN
        #define spi_rx_int_DM_OD_LO           PIN_DM_OD_LO
        #define spi_rx_int_DM_OD_HI           PIN_DM_OD_HI
        #define spi_rx_int_DM_STRONG          PIN_DM_STRONG
        #define spi_rx_int_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define spi_rx_int_MASK               spi_rx_int__MASK
#define spi_rx_int_SHIFT              spi_rx_int__SHIFT
#define spi_rx_int_WIDTH              1u

/* Interrupt constants */
#if defined(spi_rx_int__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in spi_rx_int_SetInterruptMode() function.
     *  @{
     */
        #define spi_rx_int_INTR_NONE      (uint16)(0x0000u)
        #define spi_rx_int_INTR_RISING    (uint16)(0x0001u)
        #define spi_rx_int_INTR_FALLING   (uint16)(0x0002u)
        #define spi_rx_int_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define spi_rx_int_INTR_MASK      (0x01u) 
#endif /* (spi_rx_int__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define spi_rx_int_PS                     (* (reg8 *) spi_rx_int__PS)
/* Data Register */
#define spi_rx_int_DR                     (* (reg8 *) spi_rx_int__DR)
/* Port Number */
#define spi_rx_int_PRT_NUM                (* (reg8 *) spi_rx_int__PRT) 
/* Connect to Analog Globals */                                                  
#define spi_rx_int_AG                     (* (reg8 *) spi_rx_int__AG)                       
/* Analog MUX bux enable */
#define spi_rx_int_AMUX                   (* (reg8 *) spi_rx_int__AMUX) 
/* Bidirectional Enable */                                                        
#define spi_rx_int_BIE                    (* (reg8 *) spi_rx_int__BIE)
/* Bit-mask for Aliased Register Access */
#define spi_rx_int_BIT_MASK               (* (reg8 *) spi_rx_int__BIT_MASK)
/* Bypass Enable */
#define spi_rx_int_BYP                    (* (reg8 *) spi_rx_int__BYP)
/* Port wide control signals */                                                   
#define spi_rx_int_CTL                    (* (reg8 *) spi_rx_int__CTL)
/* Drive Modes */
#define spi_rx_int_DM0                    (* (reg8 *) spi_rx_int__DM0) 
#define spi_rx_int_DM1                    (* (reg8 *) spi_rx_int__DM1)
#define spi_rx_int_DM2                    (* (reg8 *) spi_rx_int__DM2) 
/* Input Buffer Disable Override */
#define spi_rx_int_INP_DIS                (* (reg8 *) spi_rx_int__INP_DIS)
/* LCD Common or Segment Drive */
#define spi_rx_int_LCD_COM_SEG            (* (reg8 *) spi_rx_int__LCD_COM_SEG)
/* Enable Segment LCD */
#define spi_rx_int_LCD_EN                 (* (reg8 *) spi_rx_int__LCD_EN)
/* Slew Rate Control */
#define spi_rx_int_SLW                    (* (reg8 *) spi_rx_int__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define spi_rx_int_PRTDSI__CAPS_SEL       (* (reg8 *) spi_rx_int__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define spi_rx_int_PRTDSI__DBL_SYNC_IN    (* (reg8 *) spi_rx_int__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define spi_rx_int_PRTDSI__OE_SEL0        (* (reg8 *) spi_rx_int__PRTDSI__OE_SEL0) 
#define spi_rx_int_PRTDSI__OE_SEL1        (* (reg8 *) spi_rx_int__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define spi_rx_int_PRTDSI__OUT_SEL0       (* (reg8 *) spi_rx_int__PRTDSI__OUT_SEL0) 
#define spi_rx_int_PRTDSI__OUT_SEL1       (* (reg8 *) spi_rx_int__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define spi_rx_int_PRTDSI__SYNC_OUT       (* (reg8 *) spi_rx_int__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(spi_rx_int__SIO_CFG)
    #define spi_rx_int_SIO_HYST_EN        (* (reg8 *) spi_rx_int__SIO_HYST_EN)
    #define spi_rx_int_SIO_REG_HIFREQ     (* (reg8 *) spi_rx_int__SIO_REG_HIFREQ)
    #define spi_rx_int_SIO_CFG            (* (reg8 *) spi_rx_int__SIO_CFG)
    #define spi_rx_int_SIO_DIFF           (* (reg8 *) spi_rx_int__SIO_DIFF)
#endif /* (spi_rx_int__SIO_CFG) */

/* Interrupt Registers */
#if defined(spi_rx_int__INTSTAT)
    #define spi_rx_int_INTSTAT            (* (reg8 *) spi_rx_int__INTSTAT)
    #define spi_rx_int_SNAP               (* (reg8 *) spi_rx_int__SNAP)
    
	#define spi_rx_int_0_INTTYPE_REG 		(* (reg8 *) spi_rx_int__0__INTTYPE)
#endif /* (spi_rx_int__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_spi_rx_int_H */


/* [] END OF FILE */
