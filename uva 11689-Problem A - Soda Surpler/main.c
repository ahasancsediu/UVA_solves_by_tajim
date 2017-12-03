
#include<stdio.h>
int main()
{
    int e,f,c,t,sum,a,b,i;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            sum=0;
            scanf("%d%d%d",&e,&f,&c);
            b=e+f;
            while(b>=c)
            {
                a=b/c;
                sum=sum+a;
                b=a+b%c;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
