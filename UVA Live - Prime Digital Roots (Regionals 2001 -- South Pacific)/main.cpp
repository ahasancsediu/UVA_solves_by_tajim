// Accepted :)

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 1000005
#define ll long long
using namespace std;

ll sumnum(ll num)
{
    ll t=0,remainder=0,sum=0;
    t = num;
    while (t != 0)
    {
        remainder = t % 10;
        sum       = sum + remainder;
        t         = t / 10;
    }
    return sum;
}

//sieve start
ll isprime[MAX],primes[MAX],pt;
void sieve()
{
    ll k=sqrt(MAX);
    isprime[1]=1; // 1 is not prime :)
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
}

int main()
{
    sieve();
    ll n,n1=0,n3;
    while(cin>>n)
    {
        n1=0;
        if(n==0) break;
        n1=n;
        if(isprime[n]==0)
        {
            printf("%7lld %7lld\n",n1,n);
        }
        else if(n==1 || n==4 || n==6 || n==8 || n==9)
        {
            printf("%7lld    none\n",n1);
        }
        else
        {
            ll n4=0;
            n4=sumnum(n);
            while(1)
            {
                if(isprime[n4]==0)
                {
                    printf("%7lld %7lld\n",n1,n4);
                    n4=0;
                    break;
                }
                else if(n4==1 || n4==4 || n4==6 || n4==8 || n4==9)
                {
                    printf("%7lld    none\n",n1);
                    n4=0;
                    break;
                }
                else
                {
                    n4=sumnum(n4);
                }
            }
        }
    }
    return 0;
}
