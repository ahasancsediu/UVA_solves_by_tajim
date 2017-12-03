
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

ll F(ll n)
{
    if(n==0) return 0;
	if(n%10) return n%10;
	return F(n/10);
}

ll FS(ll n)
{
    if(n<=0) return 0;
	if(n<10) return n*(n+1)/2;
	ll m=n%10;
	return (n/10*45)+m*(m+1)/2+FS(n/10);
//    ll s=0;
//    if(n%10) return s+=n%10;
//	return s+=F(n/10);
}


ll S(ll p,ll q)
{
    ll sum=0;
//    if(p>q) swap(p,q);
//    for(ll i=p;i<=q;i++)
//    {
//        sum+=F(i);
//    }
    ll pp=F(p-1);
    ll qq=F(q);
    sum=(qq*(qq+1)-pp*(pp+1))/2;
    return sum;
}

int main()
{
    ll p,q;
    while(scanf("%lld%lld",&p,&q)!=EOF)
    {
        if(p<0) break;
        //else cout<<S(p,q)<<endl;
        printf("%lld\n",FS(q)-FS(p-1));
    }
    return 0;
}

