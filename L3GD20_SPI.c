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
    uint8 valID;
    uint16 myval = ( READ | ADDR_CNST | L3GD20_REGISTER_WHO_AM_I ) << 8;
    
//    SS_1_Write(0);
    SPI_ClearTxBuffer();
    SPI_WriteTxData( myval );
//    SPI_WriteTxData( 0xFF );

//      SPI_WriteTxData( 0b10001111 );
//    while( !SPI_GetRxBufferSize() );
    valID = SPI_ReadRxData();
//    SPI_ClearRxBuffer();
//    SS_1_Write(1);
    
    return valID;
}

/* [] END OF FILE */
