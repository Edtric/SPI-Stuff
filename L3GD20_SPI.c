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
uint8 range;

uint8 SPI_read8( uint8 reg )
{
    uint8 rxData;
    SPI_WriteTxData( reg );
    SPI_WriteTxData( 0x00 );
    while( !(SPI_ReadTxStatus() & SPI_STS_SPI_DONE) ); 
    SPI_ReadRxData();
    rxData = SPI_ReadRxData();
    return rxData;
}

void SPI_write8( uint8 reg , uint8 txData )
{
    SPI_WriteTxData( reg );
    SPI_WriteTxData( txData );
    while( !(SPI_ReadTxStatus() & SPI_STS_SPI_DONE) );
    SPI_ClearRxBuffer();
}

void SPI_multiRead( uint8 reg , uint8 * SPIrxBuffer , uint8 NumOfBytes )
{
    uint8 counter;
    SPI_WriteTxData( reg );
    for( counter = 0 ; counter < NumOfBytes ; counter++ ) SPI_WriteTxData( 0x00 );
    while( !(SPI_ReadTxStatus() & SPI_STS_SPI_DONE) );
    SPI_ReadRxData();
    for( counter = 0 ; counter < NumOfBytes ; counter++ ) SPIrxBuffer[counter] = SPI_ReadRxData();
}

uint8 Gyro_WAI( void )
{
    uint8 ID1;
    uint8 myval1 = ( READ | ADDR_CNST | L3GD20_REGISTER_WHO_AM_I );
  
    ID1 = SPI_read8( myval1 );
    
    return ID1;
}

uint8 Gyro_CTRL1_Read( void )
{
    uint8 ID2;
    uint8 myval2 = ( READ | ADDR_CNST | L3GD20_REGISTER_CTRL_REG1 );
        
    ID2 = SPI_read8( myval2 );
    
    return ID2;
}

void Gyro_CTRL1_Write( void )
{
    SPI_write8( (WRITE | ADDR_CNST | L3GD20_REGISTER_CTRL_REG1) , (0x0F | 0x00) );
}

void Gyro_Start( l3gd20Range_t rng )
{
    range = rng;
    
    SPI_write8( WRITE | ADDR_CNST | L3GD20_REGISTER_CTRL_REG1 , 0x0F );
    
    switch( range )
    {
        case L3GD20_RANGE_250DPS:
            SPI_write8( WRITE | ADDR_CNST | L3GD20_REGISTER_CTRL_REG4 , 0x80 | 0x00 );
            break;
        case L3GD20_RANGE_500DPS:
            SPI_write8( WRITE | ADDR_CNST | L3GD20_REGISTER_CTRL_REG4 , 0x80 | 0x10 );
            break;
        case L3GD20_RANGE_2000DPS:
            SPI_write8( WRITE | ADDR_CNST | L3GD20_REGISTER_CTRL_REG4 , 0x80 | 0x20 );
            break;
    }
}

void Gyro_Read( void )
{
    uint8 xlo , xhi , ylo , yhi , zlo , zhi;
    
    SPI_multiRead( READ | ADDR_INCR | L3GD20_REGISTER_OUT_X_L , rxBuffer , 6 );
    
    xlo = rxBuffer[0];
    xhi = rxBuffer[1];
    ylo = rxBuffer[2];
    yhi = rxBuffer[3];
    zlo = rxBuffer[4];
    zhi = rxBuffer[5];
    
    data.x = (int16)(( xhi << 8 ) | xlo );
    data.y = (int16)(( yhi << 8 ) | ylo );
    data.z = (int16)(( zhi << 8 ) | zlo );
    
    switch( range )
    {
        case L3GD20_RANGE_250DPS:
            data.x *= L3GD20_SENSITIVITY_250DPS;
            data.y *= L3GD20_SENSITIVITY_250DPS;
            data.z *= L3GD20_SENSITIVITY_250DPS;
            break;
        case L3GD20_RANGE_500DPS:
            data.x *= L3GD20_SENSITIVITY_500DPS;
            data.y *= L3GD20_SENSITIVITY_500DPS;
            data.z *= L3GD20_SENSITIVITY_500DPS;
            break;
        case L3GD20_RANGE_2000DPS:
            data.x *= L3GD20_SENSITIVITY_2000DPS;
            data.y *= L3GD20_SENSITIVITY_2000DPS;
            data.z *= L3GD20_SENSITIVITY_2000DPS;
            break;
    }
}

/* [] END OF FILE */
