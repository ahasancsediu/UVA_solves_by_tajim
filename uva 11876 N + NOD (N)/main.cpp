/// accepted :)

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>
#include <vector>
#define ll long long
#define MAX 1000001
using namespace std;

//ll N[MAX],nn[MAX],isprime[MAX],pt,nod[MAX];
//void sieve_NOD()
//{
//    for(ll l=0; l<MAX; l++)
//    {
//        nod[l]=1;
//    }
//    for(ll i=4; i<=MAX; i+=2) isprime[i]=1;
//    for(ll i=3; i*i<=MAX; i+=2)
//    {
//        if(isprime[i]==0)
//        {
//            for(ll j=i*i; j<MAX; j+=2*i)
//            {
//                isprime[j]=1;
//            }
//        }
//    }
//    pt=0;
//    ll nc,tn;
//    N[0]=1;
//    nn[0]=-1;
//    N[1]=2;
//    nn[1]=-1;
//    nn[2]=-1;
//    for(ll i=2; i<MAX; i++)
//    {
//        if(isprime[i]==0)
//        {
//            for(ll j=i; j<MAX; j+=i)
//            {
//                nc=0;
//                tn=j;
//                while(!(tn%i))
//                {
//                    nc++;
//                    tn/=i;
//                }
//                nod[j]*=(nc+1);
//            }
//        }
//        N[i]=N[i-1]+nod[N[i-1]];
//        nn[N[i]]=-1;
//    }
//
//    for(ll i=2;i<MAX;i++)
//    {
//        N[i]=N[i-1]+nod[N[i-1]];
//        nn[N[i]]=-1;
//    }
//}


int nod(int x)
{
    int ret = 1;
    for(int i = 2; i <= x / i; i++)
    {
        if(x % i == 0)
        {
            int cont = 1;
            while(x % i == 0)
            {
                x /= i;
                ++cont;
            }
            ret *= cont;
        }
    }
    if(x > 1) ret *= 2;
    return ret;
}

int ans[MAX];
int main()
{
//    sieve_NOD();
    int x = 1;
    while(x <= 1000000)
    {
        ans[x]++;
        x += nod(x);
    }
    for(int i = 1; i <= 1000000; i++) ans[i] += ans[i - 1];
    int a,b,t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
//        ll cnt=0;
//        for(ll ii=a;ii<=b;ii++)
//        {
//            if(nn[ii]==-1) cnt++;
//        }
        printf("Case %d: %d\n",i,ans[b] - ans[a - 1]);
    }
    return 0;
}

