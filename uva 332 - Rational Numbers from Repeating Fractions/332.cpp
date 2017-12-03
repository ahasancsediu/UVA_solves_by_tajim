#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b)
{
    if(b==0)
        return a;
    return GCD(b, a%b);
}

char s;

int main()
{
    int cs,i,j,k;
    cs=1;
    while(cin>>t)
    {
        if(t==-1)
            break;
        scanf(" %s",s);
        ll x,y,q,p;
        x=q=0;
        y=p=1LL;

        for(i=2;i<t;i++)
            x=x*10LL+s[i]-'0',y*=10LL;
        for(i=2;i<strlen(s)-t;i++)
            q=q*10LL+s[i]-'0',p*=10LL;
        x-=q;
        y-=p;
        ll g;
        g=__gcd(x,y);
        x/=g;
        y/=g;
        printf("Case %d: %lld/%lld\n",cs++,x,y)
    }
    return 0;
}

