#include <stdio.h>
int main()
{
    int a=0;
    int b=1;
    int c;
    int n;
    scanf("%d",n);
    for( int i=0 ; i <= n ;  ++i)
        {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
return 0;
}
