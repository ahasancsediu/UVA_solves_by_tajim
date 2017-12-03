//accepted :)

#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

char s[100000005];

ll GCD(ll a, ll b)
{
    if(b==0)
        return a;
    return GCD(b, a%b);
}

int main()
{
    ll c,j;
    c=0;
    while(cin>>j)
    {
        c++;
        unsigned ll g,x,y,q,p,lob,hor;
        if(j == -1) break;


        scanf(" %s",s);
        x=q=0;
        y=p=1;

        for(int i=2; i<strlen(s); i++)
        {
            x=x*10+s[i]-'0',y*=10;
        }
        for(int i=2; i<strlen(s)-j; i++)
        {
            q=q*10+s[i]-'0',p*=10;
        }
        if(j>0)
        {
            lob=x-q;
            hor=y-p;
        }
        else
        {
            lob=x;
            hor=y;
        }
        g = 0;
        g=GCD(lob, hor);
        //g=__gcd(lob,hor);
        printf("Case %lld: %lld/%lld\n", c, lob/g , hor/g );

    }
    return 0;
}
