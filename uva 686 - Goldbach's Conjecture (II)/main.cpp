#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

int primecheck (int x);
int main()
{
    int n, primecount=0, a=0,t[4000],ps,c=0;

    while(scanf("%d",&n)==1)
    {
        if(n<4 || n>=32768) break;
        int b;
        ps=0;
        for (a=2; a<=n; a++)
        {
            b=primecheck(a);
            if (b==1)
            {
                t[ps++]=a;
            }
        }

        /*for(int i=0; i<n/2; i++)
        {
            for(int j=1; j<=i; j++)
            {
                if(t[i]+t[j]==n)
                {
                    c++;
                }
            }
        }

        printf("%d\n",c);*/
        for(int i=0; t[i]<n; i++)
            for(int j=0; t[j]<=n/2; j++)
            {
                if(t[i]+t[j]==n)
                {

                    c++;

                }
            }
        cout<<c<<endl;
        c=0;

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
    for (i=2; i<=sqrt(x); i++)
    {
        if (x%i==0)
            return 0;
    }
    return 1;
}
