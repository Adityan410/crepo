#include<stdio.h>
#include<math.h>
void main()
{
   int a=0xa941b635; // 35b641a9..
  int  b=  (a >>24 & 0x000000ff )    |  ( a<<24 & 0xff000000);
   int c=(a>>16 & 0x0000ffff)  | (a<<16  & 0xffff0000);
   int d= (c>>8 & 0x00ff0000) | (c<<8 & 0x0000ff00);
   printf("%x\n", b | d);
   printf("Thankyou");
}
