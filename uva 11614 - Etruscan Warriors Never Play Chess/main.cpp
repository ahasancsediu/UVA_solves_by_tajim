
/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#include <math.h>
#include <cmath>
//#define MAX 19999999
#define MAX 1000005
#define ll long long
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define CLR1(a) memset(a,1,sizeof(a))
using namespace std;
int main()
{
    ll t,n,n1,n2,sn,ans=0;
    cin>>t;
    while(t--)
    {
        cin>>sn;
        /// sn= n*(n+1)/2;
        n1=(-1+sqrt(1+4*(2*sn)))/2;
        n2=(-1-sqrt(1+4*(2*sn)))/2;
        ans=max(n1,n2);
        cout<<ans<<endl;
    }
    return 0;
}
// 6 3 6 7 8 9 10
