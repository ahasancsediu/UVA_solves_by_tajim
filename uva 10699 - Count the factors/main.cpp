#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
// eta sieve dieo sohoje kora jay.. later on i dpo... see sieve :)
int main()
{
    int n,i,temp,j,p,pfc=0,a[9999];
    for( ; ; j++)
    {
        scanf("%d",&n);
        int n2=n;
        if(n==0) break;
        p=sqrt(n);
        pfc=1;
        for(i=2; i<=p; i++)
        {
            if(n%i==0)
            {
                //printf("%d",i);
                a[pfc]=i;
                n=n/i;
                //if(n>1)
                  //  printf(" x ");
                temp=i;
                i=1;
                pfc++;
            }
        }

        if(n>1)
        {
            //printf("%d",n);

            a[pfc++]=n;
        }
        //printf("\n");
        int sum=0;
        for(int c = 1 ; c <pfc ; c++ )
        {
            if(a[c]!=a[c+1])
            {
               // printf("%d\n", a[c]);
                sum++;
            }
        }
        printf("%d : %d\n",n2,sum);
    }
    return 0;
}
