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

uint16 txBuf[7] = {0,0,0,0,0,0,0};
uint16 rxBuf[7] = {0,0,0,0,0,0,0};

uint8 counter;

uint8 Gyro_WAI( void )
{
    uint8 valID;
    uint16 myval = ( READ | ADDR_CNST | L3GD20_REGISTER_WHO_AM_I ) << 8;
    
    SPI_ClearTxBuffer();
    SPI_WriteTxData( myval );
    valID = SPI_ReadRxData();
    
    return valID;
}

void Gyro_Read( void )
{
//    txBuf[0] = READ | ADDR_INCR | L3GD20_REGISTER_OUT_X_L;
//    SPI_PutArray( txBuf , 7 );
//    
//    for( counter = 0 ; counter < 6 ; counter++ )
//    {
//        rxBuf[counter] = SPI_ReadRxData();
//    }
//    
//    data.x = ( rxBuf[1] << 8 ) | rxBuf[0];
//    data.y = ( rxBuf[3] << 8 ) | rxBuf[2];
//    data.z = ( rxBuf[5] << 8 ) | rxBuf[4];
}

/* [] END OF FILE */
