#include <stdio.h>

int main()
{
    long long int num,ternary[10000],rem,k=0,i;
    while (scanf("%lld",&num)==1 && num>=0)
    {
        k=0;
        if(num==0)
            printf("0\n");
        else
        {
            while(num)
            {
                rem=num%3;
                num=num/3;
                ternary[k]=rem;
                k++;
            }
            for(i=k-1; i>=0; i--)
                printf("%lld",ternary[i]);
            printf("\n");
        }
    }
    return 0;
}
