
/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
//#define MAX 19999999
#define MAX 1000005
#define ll long long
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define CLR1(a) memset(a,1,sizeof(a))
using namespace std;

//sieve start
ll phi[MAX],isprime[MAX],primes[MAX],pt,nod[MAX],npf[MAX];
void sieve_NOD_NOPf_phi()
{
    CLR(isprime);
    ll k=sqrt(MAX);
    isprime[0]=isprime[1] = 1;
    for(ll i=4; i<=MAX; i+=2) isprime[i]=1;
    for(ll i=3; i<=k; i+=2)
    {
        if(isprime[i]==0)
        {
            for(ll j=i*i; j<MAX; j+=2*i)
            {
                isprime[j]=1;
            }
        }
    }
//    for(ll i = 2; i < MAX; ++i)
//    {
//        for (ll j = i + i; j < MAX; j += i)
//            isprime[j] = 1;
//    }
    //isprime[something]==0 hoile ta prime :) evabe primechech dea jabe :)
    //10001 porjonto prime ase 1229 ta :)
}

ll rev(unsigned ll n)
{
    unsigned ll r = 0;
    do r = r * 10 + n % 10;
    while ((n /= 10) > 0);
    return r;
}

int main()
{
    sieve_NOD_NOPf_phi();
    ll n;
    while(cin>>n)
    {
        if(isprime[n]) cout<<n<<" is not prime."<<endl;
        else
        {
            ll rn=rev(n);
            if(!isprime[rn] && rn!=n) cout<<n<<" is emirp."<<endl;
            else cout<<n<<" is prime."<<endl;
        }
    }
    return 0;
}
