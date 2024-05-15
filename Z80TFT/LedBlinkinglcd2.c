 

#include "GPIO.h"
#include "ILI9341.h"
#include "FONT.h"

 
#define String1  "   Z80 COMPUTER   "
#define String2  "   HELLO          "
 unsigned char buff[10] ;
 
  long long data;
 
void delay( unsigned int dat){
    unsigned int i;
    for(i=0; i<dat; i++){}
}











 



 

 


void main(void){
    
  delay(10); 

 TFT_init();
 
   fillScreen2(Black);

while(1){

fillScreen2(Black);
text1 ("DISPLAY ILI9341 ",1,1,3 ,0x00,0xffff); 
delay(40000);
text1 ("Z80 Processor   ",1,50,3 ,0x00,0xffff); 
delay(40000);
text1 ("SDCC Compiler   ",1,100,3 ,0x00,0xffff); 
text1 ("RUNS at 14 MHZ   ",1,150,3 ,0x00,0xffff); 

delay(40000);
delay(40000);
delay(40000);
delay(40000);
delay(40000);
fillScreen2(Black);
text1 ("THANK YOU  ",1,1,3 ,0x00,0xffff); 
delay(40000);
text1 ("FOR WATCHING  ",1,50,3 ,0x00,0xffff); 
delay(40000);
text1 ("GIVE A   ",1,100,3 ,0x00,0xffff); 
text1 ("THUMBS UP   ",1,150,3 ,0x00,0xffff);
 fillScreen2(Black);
icon(70,0);
icon(70,60);
icon(70,120);
icon(140,0);
icon(140,60);
icon(140,120);
icon(210,0);
icon(210,60);
icon(210,120);
icon(280,0);
icon(280,60);
icon(280,120);

delay(40000);
delay(40000);
delay(40000);
delay(40000);
delay(40000);delay(40000);
delay(40000);
delay(40000);
delay(40000);
delay(40000);

  }
}



