
/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
//#define MAX 19999999
#define MAX 100000
#define ll long long
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define CLR1(a) memset(a,1,sizeof(a))
using namespace std;



int main()
{
    ll n, t = 1;
    while (scanf("%lld", &n) == 1 && n)
    {
        ll ans = 0;
        ll cnt = 0;
        for(ll i = 2; i * i<=n; i++)
        {
            if (n%i==0)
            {
                ll tmp = 1;
                while(n%i==0)
                {
                    n/=i;
                    tmp*=i;
                }
                ans+=tmp;
                cnt++;
            }
        }
        if (n>1) ans+=n, cnt++;
        if (cnt == 1) ans+= 1;
        if (cnt == 0) ans= 2;
        printf("Case %lld: %lld\n",t++,ans);
    }
    return 0;
}
