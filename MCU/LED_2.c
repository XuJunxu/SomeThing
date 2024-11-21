#include<reg52.h>
unsigned int a;
void main()
{
    a=52000;
    P1=0x0f;
    while(a--);
    P1=0xf0;
    a=52000;
    while(a--);
}