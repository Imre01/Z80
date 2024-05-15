 __sfr __at 0x01 GPIO1;
 __sfr __at 0x02 GPIO2;
 __sfr __at 0x04 GPIO3;
 
 
 
 unsigned char datin=0;
 unsigned char datq=0;

void PORTB0(unsigned char data1){
 
if(data1==1){datq=datq|0x01;}else{datq=datq&0xfe;}

GPIO1= datq;
}
void PORTB1(unsigned char data1){
 
if(data1==1){datq=datq|0x02;}else{datq=datq&0xfd;}

GPIO1= datq;

}

void PORTB2(unsigned char data1){
 
if(data1==1){datq=datq|0x04;}else{datq=datq&0xfb;}

GPIO1= datq;
}
void PORTB3(unsigned char data1){
 
if(data1==1){datq=datq|0x08;}else{datq=datq&0xf7;}

GPIO1= datq;
}
void PORTB4(unsigned char data1){
 
if(data1==1){datq=datq|0x10;}else{datq=datq&0xef;}

GPIO1= datq;
}
void PORTB5(unsigned char data1){
 
if(data1==1){datq=datq|0x20;}else{datq=datq&0xdf;}

GPIO1= datq;
}
void PORTB6(unsigned char data1){
 
if(data1==1){datq=datq|0x40;}else{datq=datq&0xbf;}

GPIO1= datq;
}
void PORTB7(unsigned char data1){
 
if(data1==1){datq=datq|0x80;}else{datq=datq&0x7f;}

GPIO1= datq;
}








void PORTC(unsigned char data1){
 


GPIO3= data1;
}








unsigned char PORTA0(void){
datin=GPIO2&0x01;
if(datin==0x01){return 1;}else{return 0;}
 
}


unsigned char PORTA1(void){
datin=GPIO2&0x02;
if(datin==0x02){return 1;}else{return 0;}
 
}


