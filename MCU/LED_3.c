#include<reg52.h>
sbit D1=P1^0;

void delay(unsigned int a)
{
	unsigned int b,c;
	for(b=a;b>0;b--)
		for(c=574;c>0;c--);
} 

void main()
{
	while(1)
	{	
		D1=0;
		delay(50);
		D1=1;
		delay(50);
	}
}
