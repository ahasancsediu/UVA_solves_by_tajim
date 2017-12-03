/// accepted :)

#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
#define mx 2000005
#define ll long long
using namespace std;
ll n,age[mx];
int main()
{
    while(scanf("%lld",&n)==1)
    {
        if(n==0)break;
        for(ll i=0; i<n; i++)
        {
            scanf("%lld",&age[i]);
        }
        sort(age,age+n);
        for(ll i=0; i<n; i++)
        {
            printf("%lld",age[i]);
            if(i<n-1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}



