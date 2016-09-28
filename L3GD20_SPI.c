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

uint8 txBuffer[10];
uint8 rxBuffer[10];

uint8 SPI_Xfer( uint8 txData )
{
    uint8 rxData;
    SPI_WriteTxData( txData );
    rxData = SPI_ReadRxData();
    return rxData;
}

uint8 Gyro_WAI( void )
{
    uint8 ID1;
    uint8 myval1 = ( READ | ADDR_CNST | L3GD20_REGISTER_WHO_AM_I );
  
    SPI_Xfer( myval1 );
    ID1 = SPI_Xfer( 0x00 );
    while( !(SPI_ReadTxStatus() & SPI_STS_SPI_DONE) );    
    
    return ID1;
}

uint8 Gyro_WAI_Test( void )
{
    uint8 ID2;
    uint8 myval2 = ( READ | ADDR_CNST | L3GD20_REGISTER_CTRL_REG1 );
    
    SPI_WriteTxData( myval2 );
    ID2 = SPI_ReadRxData();
    SPI_WriteTxData( 0x00 );
    ID2 = SPI_ReadRxData();
    while( !(SPI_ReadTxStatus() & SPI_STS_SPI_DONE) );
    
    return ID2;
}

void Gyro_Start( void )
{
    uint8 x;
    SPI_WriteTxData(0x00);
    x = SPI_ReadRxData();
    SPI_WriteTxData(0x00);
    x = SPI_ReadRxData();
//    SPI_ClearFIFO();
}

/* [] END OF FILE */
