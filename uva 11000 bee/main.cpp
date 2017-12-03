/// accepted :)

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#include <stdio.h>
#include <stdlib.h>
//#define MAX 19999999
#define MAX 100000
#define ll long long
//#define ull unsigned long long
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define CLR1(a) memset(a,1,sizeof(a))
using namespace std;

ll fibon[MAX],sum[MAX];
void fibonacci()
{
    fibon[0]=0;
    fibon[1]=1;
    for(ll i=2; i<=235; i++)
    {
        fibon[i]=fibon[i-1]+fibon[i-2];
    }
}
int main()
{
    fibonacci();
    ll n;
    sum[0]=1;
    while(scanf("%lld",&n)==1)
    {
        if(n<0) break;
        for(ll i=1; i<=n; i++) sum[i]=sum[i-1]+fibon[i+1];
        printf("%lld %lld\n",sum[n]-fibon[n+1],sum[n]);
    }
    return 0;
}
