

#include <device.h>


//#define WRITE       0x00
#define READ                        0x80
#define ADDR_CNST                   0x00
#define ADDR_INCR                   0x40
#define L3GD20_REGISTER_WHO_AM_I    0x0F   // 11010100 = 0xd4
#define L3GD20_REGISTER_OUT_X_L     0x28,   //            r
#define L3GD20_REGISTER_OUT_X_H     0x29,   //            r
#define L3GD20_REGISTER_OUT_Y_L     0x2A,   //            r
#define L3GD20_REGISTER_OUT_Y_H     0x2B,   //            r
#define L3GD20_REGISTER_OUT_Z_L     0x2C,   //            r

#define DUMMY_HI    0xff
#define DUMMY_LO    0x00


//----------------------------------------------------------
//----------------------------------------------------------
//----------------------------------------------------------

int main()
{
    
    
    //uint8 spiData[]={1,2,3,4};        //first spi test
    //uint8 spiData[]={0x8f, DUMMY_LO}; //READ + L3GD20_REGISTER_WHO_AM_I
    //uint8 spiData[]={0xe8, DUMMY_LO, DUMMY_LO};   //2 byte read
    //uint8 spiData[]={0xe8, DUMMY_LO, DUMMY_LO, DUMMY_LO, DUMMY_LO};   //4 byte read
    uint8 spiData[]={0xe8, DUMMY_LO, DUMMY_LO, DUMMY_LO, DUMMY_LO, DUMMY_LO, DUMMY_LO};   //6byte read  
    
    
    SPIM_Start();
    
    while(1)
    {
        SPIM_PutArray(spiData,sizeof(spiData));
        CyDelay(1); //ms
    };
    
    
    
}    
