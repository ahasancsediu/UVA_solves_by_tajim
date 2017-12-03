// Accepted :)
// uva 1210
// uvalive 3399


/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 10001
#define ll long long
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
using namespace std;
ll result[10001];
//sieve start
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

    pt=0; // total numbers of prime

    for(ll i=2; i<MAX; i++)
    {
        if(isprime[i]==0)
        {
            primes[pt++]=i;
        }

    }
    //isprime[something]==0 hoile ta prime :) evabe primechech dea jabe :)
}


int main()
{
    sieve();
    int sz=1230;
    //10001 porjonto prime ase 1229 ta :)
    for (int i = 0; i < sz; i++)
    {
        for (int j = i; j < sz; j++)
        {
            int c = 0;
            for (int k = i; k < j; k++)
            {
                c += primes[k];
            }
            if (c < 10001)
            {
                result[c] += 1;
                // a[x] e ja ase tar man ek barai :)
            }
        }
    }
    ll n;
    while (cin >> n && n!=0)
    {
        cout << result[n] << endl;
    }
    return 0;
}
