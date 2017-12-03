#include<stdio.h>
int main()
{
    unsigned long long t,n,x;
    while(scanf("%lld",&t)==1)
    {
        if(t==0)
        break;
        x=(t*10)/9;
        if(t%9==0)
        printf("%lld %lld\n",x-1,x);
        else
        printf("%lld\n",x);
    }
    return 0;
}
