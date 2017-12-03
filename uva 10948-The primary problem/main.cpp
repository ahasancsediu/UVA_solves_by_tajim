/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <sstream>
#include <cmath>
#define pi acos(-1.0)
#define MAX 1100053
#define ll long long
using namespace std;


ll isprime[MAX],primes[MAX],pt;
void sieve()
{
    ll k=sqrt(MAX);
    for(ll i=4; i<=MAX; i+=2)
        isprime[i]=1;

    for(ll i=3; i<=k; i+=2)
    {
        if(isprime[i]==0)
        {
            for(ll j=i*i; j<MAX; j+=2*i)
                isprime[j]=1;
        }
    }

    pt=0;
    for(ll i=2; i<MAX; i++)
    {
        if(isprime[i]==0)
        {
            primes[pt++]=i;
        }

    }
}


int main()
{
    sieve();
    ll a,b,c,d;
    while(cin>>a &&a)
    {
        if(a==0) break;
        else
        {
            cout<<a<<":"<<endl;
            for(int i = 0; i < a; i++)
            {
                c=0;
                d=0;
                b=a-primes[i];
                if((b+primes[i])==a && isprime[b]==0)
                {
                    c=1;
                    d=primes[i];
                    break;
                }

            }
            if(c==1 && b>1)
            {
                cout<<d<<"+"<<b<<endl;
            }
            else
            {
                cout<<"NO WAY!"<<endl;
            }

        }
    }


    return 0;
}
