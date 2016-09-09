/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include "L3GD20_SPI.h"

uint8 Gyro_WAI( void )
{
    uint8 ID;
    uint8 myval = ( READ | ADDR_CNST | L3GD20_REGISTER_WHO_AM_I );
    
    SPI_ClearTxBuffer();
    SPI_WriteTxData( myval );
    SPI_WriteTxData( 0x00 );
    ID = SPI_ReadRxData();
    
    return ID;
}

void Gyro_Read( void )
{

}

/* [] END OF FILE */
