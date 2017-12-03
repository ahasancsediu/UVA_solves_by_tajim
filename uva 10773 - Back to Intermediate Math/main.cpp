
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

int main()
{
    double d,v,u,ans;
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cin>>d>>v>>u;
        cout<<"Case "<<i<<": ";
        if(v>=u || v==0 || u==0) cout<<"can't determine"<<endl;
        else
        {
            double t1,t2;
            t1=d/u;
            t2=d/sqrt(u*u-v*v);
            ans=fabs(t2-t1);
            //cout<<ans<<endl;
            printf("%.3lf\n",ans);
        }
    }
    return 0;
}
