
#include <LiquidCrystalDisplay.h>



const char raw1[]={0xc0,0xb6,0xc7,0xc5,0xB1,0xAD,0xC7,0xE0,0xC9,0xD9,0xC4,0xEA,0xB1,0xE0,0xB3,0xCC,0xB4,0xF3,0xC8,0xFC};
const char raw2[]={0xB9,0xA4,0xD0,0xC5,0xB2,0xBF,0xC8,0xCB,0xB2,0xC5,0xBD,0xBB,0xC1,0xF7,0xD6,0xD0,0xD0,0xC4};//0xB9,0xA4,0xD0,0xC5,0xB2,0xBF,0xC8,0xCB,0xB2,0xC5,0xBD,0xBB,0xC1,0xF7,0xD6,0xD0,0xD0,0xC4};
const char raw3[]={0xBA,0xD3,0xC4,0xCF,0xB4,0xF3,0xD1,0xA7,0xCE,0xEF,0xC0,0xED,0xD3,0xEB,0xB5,0xE7,0xD7,0xD3,0xD1,0xA7,0xD4,0xBA};

#define STRING_MAX_SIZE       65

uint8_t   identifier,cnt;
uint8_t   cmd_buffer[CMD_MAX_SIZE];
uint8_t   data_size;
uint8_t   update_en;
uint8_t   command_cmd;
uint8_t   command_statu;
uint8_t   command_length;



LiquidCrystal TFTlcd(13);//RST pin13


void setup() {
   update_en =0;
   data_size =0;
   TFTlcd.queue_reset();
   

   TFTlcd.begin();
   TFTlcd.ClrScreen(0xffffff);
   //attachInterrupt(0,LcdIICInterrupt,FALLING);
  //TFTlcd.PutString(0x0050,0x0080,0x00,0x20,0x00,0x00,0x0033ff,raw1);
  //TFTlcd.PutString(0x0040,0x0080,0x00,0x20,0x00,0x00,0x0033ff,raw2);
  
   // TFTlcd.PutString(0x53,0x00,0x80,0x00,0x20,0x00,0x00,0x0033ff,raw3);
 TFTlcd.PutString(0x45,0x20,0x00,0x20,0x00,0x00,0x0033ff,raw1);
 

}
/*void LcdIICInterrupt()
{
    command_cmd = TFTlcd.I2C_Read();
    TFTlcd.queue_push(command_cmd);
    Serial.println(command_cmd, HEX);
    command_statu = TFTlcd.I2C_Read();
    TFTlcd.queue_push(command_statu);
    Serial.println(command_statu, HEX);
    for(cnt =0;cnt <4;cnt++)
    {
     identifier = TFTlcd.I2C_Read();
     TFTlcd.queue_push(identifier);
     Serial.println(identifier, HEX);
    }
    
}*/


void loop()
{

  

}







