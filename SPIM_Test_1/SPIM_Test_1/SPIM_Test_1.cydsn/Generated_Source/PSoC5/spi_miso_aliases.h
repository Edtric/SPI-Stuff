/*******************************************************************************
* File Name: spi_miso.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_spi_miso_ALIASES_H) /* Pins spi_miso_ALIASES_H */
#define CY_PINS_spi_miso_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define spi_miso_0			(spi_miso__0__PC)
#define spi_miso_0_INTR	((uint16)((uint16)0x0001u << spi_miso__0__SHIFT))

#define spi_miso_INTR_ALL	 ((uint16)(spi_miso_0_INTR))

#endif /* End Pins spi_miso_ALIASES_H */


/* [] END OF FILE */
