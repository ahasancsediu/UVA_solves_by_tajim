
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
ll v[MAX],item[MAX],u[MAX],f[MAX];
int main()
{
    ll t,n,a,h,l;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cin>>n;
        h=0;
        l=0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(ll i=0;i<n-1;i++)
        {
            if(v[i]<v[i+1]) h++;
            else if(v[i]>v[i+1]) l++;
        }
        printf("Case %lld: %lld %lld\n",i,h,l);
    }
    return 0;
}
// 3 8 1 4 2 2 3 5 3 4 1 9 5 1 2 3 4 5
