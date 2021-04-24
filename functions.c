#include<stdio.h>
int g;
void abc()
{
  ++g;
}
void test()
{
    ++g;
}
void main()
{
    ++g;
    test();
    abc();
    printf("%d",g);
}
