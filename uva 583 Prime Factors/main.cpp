/// accepted :)

#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
    int n,i,temp,j=0,p;
    for( ; ; j++)
    {
        scanf("%d",&n);
        if(n==0) break;
        else if(n<0)
        {
            printf("%d = -1 x ",n);
            n=n*-1;
        }
        else
        {
            printf("%d = ",n);
        }
        p=sqrt(n);

        for(i=2; i<=p; i++)
        {
            if(n%i==0)
            {
                printf("%d",i);
                n=n/i;
                if(n>1)
                    printf(" x ");
                temp=i;
                i=1;
            }
        }
        if(n>1)
        {
            printf("%d",n);
        }
        printf("\n");
    }
    return 0;
}
