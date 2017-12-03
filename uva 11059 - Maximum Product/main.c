#include <stdio.h>

int main()
{
    int t=0,c=1,i,j,k,x[100];
    while(scanf("%d",&t)==1)
    {
        for(i=0; i<t; i++)
            scanf("%d",&x[i]);
        long long max=0;
        for (i = 0; i < t; i++)
        {
            for (j = i; j < t; j++)
            {
                long long p = 1;
                for (k = i; k <= j; k++)
                {
                    p=p*x[k];
                }
                if(max<p)
                    max = p;
            }
        }
        printf("Case #%d: The maximum product is %lld.\n\n",c,max);
        c++;
    }
    return 0;
}
