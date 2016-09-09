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
    uint8 value = 0;
    
    SPI_Start();
    UART_Start();
    CyDelay(250);
    
    UART_PutChar( 0x0C );
    UART_PutString("Power ON\r\n");

    for(;;)
    {
        value = Gyro_WAI();
        sprintf( message , "WAI Value: %d\r\n" , value );
        
        UART_PutString(message);
        CyDelay(100);
        UART_PutChar( '.' );
        CyDelay(100);
        UART_PutChar( '.' );
        CyDelay(100);
        UART_PutChar( '.' );
        CyDelay(100);
        UART_PutString( "\r\n" );
    }
}

/* [] END OF FILE */
