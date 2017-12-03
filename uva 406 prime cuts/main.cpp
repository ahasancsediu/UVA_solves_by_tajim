#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int primecheck (int x);
int main()
{
    int N=0,C=0,a=0,t,p[9999],j;
    while(scanf("%d %d", &N, &C)==2)
    {
        printf("%d %d:",N,C);
        int b=0;
        t=1;
        for (a=1; a<=N; a++)
        {
            b=primecheck(a);
            if (b==1)
            {
                p[t]=a;
                t++;
            }
        }
        if((C*2)>=t)
        {
            for(j=1; j<t; j++)
            {
                printf(" %d",p[j]);

            }
        }
        else
        {
            if((t-1)%2==1)
            {
                for(j=t/2-C+1; j<=t/2+C-1; j++)
                    printf(" %d",p[j]);
            }
            else if((t-1)%2==0)
            {
                for(j=t/2+1-C; j<=t/2+C; j++)
                    printf(" %d",p[j]);
            }
        }
        cout<<endl;
        cout<<endl;
    }
    return 0;
}
int primecheck (int x)
{
    int i;
    if (x<=0)
        return 0;
    if (x==2)
        return 1;
    int x2=sqrt(x);
    for (i=2; i<=x2; i++)
    {
        if (x%i==0)
            return 0;
    }
    return 1;
}
