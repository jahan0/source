#include<pic.h>
void delay(unsigned int x);
void main()
{
TRISB=0x00;
while(1)
{
PORTB=0xFF;
delay(6500);
PORTB=0x00;
delay(650000);
}
}
void delay(unsigned int x)
{
while(x--);
}
