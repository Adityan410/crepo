#include<stdio.h>
void main()
{
    int a=11;
    int * a1=&a;
    int b=12;
    int *b1=&b;
    *a1=*b1;
    printf("%d %d\n", *a1,*b1);
    printf("HI BOYS!!!");

}
