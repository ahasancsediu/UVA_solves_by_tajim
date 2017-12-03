#include<stdio.h>
#include<math.h>
int main()
{
    long long l,a,b;
    while(scanf("%lld",&l)==1)
    {
        if(l==0)
            break;
        a=sqrt(l);
        b=a*a;
        if(b==l)
            printf("yes\n");
        else
            printf("no\n");
/*
If there are Odd number of factors then output: Yes otherwise No.

A number have Odd number of factors if and only if it is a Perfect Square.
So, if (sqrt (N) = Integer) then output: Yes otherwise No.
*/

    }
    return(0);
}
