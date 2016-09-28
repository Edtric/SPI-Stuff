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
    uint8 reg_value = 0;
//    uint8 val1 = 1;
//    uint8 val2 = 2;
    
    SPI_Start();
    UART_Start();
    CyDelay(250);
    
    UART_PutChar( 0x0C );
    UART_PutString("Power ON\r\n");
    
//    
//    wai_value = Gyro_WAI();
//    SPI_ClearTxBuffer();
//    SPI_ClearRxBuffer();
    CyDelay(10);

    for(;;)
    {
        wai_value = Gyro_WAI();
        reg_value = Gyro_WAI_Test();
        sprintf( message , "WAI: %d    CTRL1: %d\r\n" , wai_value , reg_value );
        
        UART_PutString(message);
        CyDelay(100);
//        UART_PutChar( '.' );
//        CyDelay(100);
//        UART_PutChar( '.' );
//        CyDelay(100);
//        UART_PutChar( '.' );
//        CyDelay(100);
//        UART_PutString( "\r\n" );
    }
}

/* [] END OF FILE */
