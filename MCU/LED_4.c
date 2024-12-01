#include<reg52.h>
#include<intrins.h>
sbit be=P2^3;

void delay(unsigned int a)
{
	unsigned int b,c;
	for(b=a;b>0;b--)
		for(c=500;c>0;c--);
} 

void main()
{
	unsigned char x=0x7f;
	while(1)
	{	
		P1=x;
		be=0;
		delay(95);
		be=1;
		delay(20);
		x=_cror_(x,1);
	}
}