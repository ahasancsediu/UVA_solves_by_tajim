#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long n,i,temp,j,p;
    for( ; ; j++)
    {
        scanf("%lld",&n);

        if(n<0) break;


        p=sqrt(n);

        for(i=2; i<=p; i++)
        {
            if(n%i==0)
            {
                printf("    %lld\n",i);
                n=n/i;

                temp=i;
                i=1;
            }
        }

        if(n>1)
        {
            printf("    %lld\n",n);

        }

        printf("\n");

    }
    return 0;
}
