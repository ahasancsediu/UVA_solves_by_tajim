/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define pi acos(-1.0)
#define MAX 10000099
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
}



int main()
{
    sieve();
    ll N=0,C=0,a=0,t,j,c,n2=0,p1=0,p2=0;
    while(scanf("%d", &N)==1)
    {

        ll b=0;
        t=0;
        c=0;
        if (N <= 7)
        {
            cout << "Impossible." << endl;
            continue;
        }

        else if (N % 2 !=0)
        {
            n2=N-5;
            for (ll i = 2; i <= n2 / 2; i++)
            {
                if ((isprime[i]==0) && (isprime[n2 - i]==0))
                {
                    p1 = i;
                    p2 = n2 - i;
                    break;
                }

            }
            cout << "2 3 " << p1 << " " << p2 << endl;

        }
        else
        {
            n2=N-4;
            for (ll i = 2; i <= n2 / 2; i++)
            {
                if ((isprime[i]==0) && (isprime[n2 - i]==0))
                {
                    p1 = i;
                    p2 = n2 - i;
                    break;
                }

            }
            cout << "2 2 " << p1 << " " << p2 << endl;
        }


    }
    return 0;
}
