#include <avr/io.h>

int main(void)
{
unsigned char a = 5;
unsigned char LSB;
unsigned char x;
DDRC |= 0B001000;
while(1)
{
  LSB = a ;
   for ( x = 0 ;x <=8 ; x++)
{
  if(LSB & 0x01)  
    PORTC |= 0B001000; 
  else
    PORTC &= ~ 0B001000; 
    
  LSB = LSB >> 1 ;
   
}
} 
}


