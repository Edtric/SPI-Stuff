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
#include <stdio.h>

int main()
{
    CyGlobalIntEnable;
    
    char message[50];
    uint8 wai_value = 0;
    
    SPI_Start();
    UART_Start();
    CyDelay(250);
    UART_PutString("Power ON\r\n");

    SPI_ClearTxBuffer();
    SPI_ClearRxBuffer();
    
    wai_value = Gyro_WAI();
    sprintf( message , "WAI: 0x%02x\r\n" , wai_value );      
    UART_PutString(message);
    CyDelay(100);
    
    Gyro_Start( L3GD20_RANGE_250DPS );
    CyDelay(100);
    
    for(;;)
    {
        Gyro_Read();
        sprintf( message , "X: %d    Y: %d    Z: %d\r\n" , data.x , data.y , data.z );
        UART_PutString(message);
        CyDelay(100);
    }
}

/* [] END OF FILE */
