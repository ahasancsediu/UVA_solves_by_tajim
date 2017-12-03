/// Accepted :)

#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#define ll long long
using namespace std;
int main()
{
    ll t,c,val,line,i,j,k,len,n[200];
    double price;
    char text[10000],x[200];
    while(cin>>t)
    {
        for(k=1; k<=t; k++)
        {
            price=0;
            scanf("%lld\n",&val);
            for(j=1; j<=val; j++)
            {
                scanf("%c%lld\n",&x[j],&n[j]);
            }
            scanf("%lld\n",&line);
            for(j=1; j<=line; j++)
            {
                gets(text);
                len=strlen(text);
                for(i=1; i<=val; i++)
                {
                    for(c=0; c<len; c++)
                    {
                        if(x[i]==text[c])price+=n[i];
                    }
                }
            }
            printf("%.2lf$\n",price/100);
        }
    }
    return 0;
}
