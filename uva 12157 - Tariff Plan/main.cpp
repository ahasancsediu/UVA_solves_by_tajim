
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
    ll t, n, mile, juice, a, cnum = 0;
    cin>>t;
    for(ll j=1;j<=t;j++)
    {
        cin>>n;
        mile = juice = 0;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            mile += (a + 30)/30;
            juice += (a + 60)/60;
        }
        mile*=10;
        juice*=15;
        printf("Case %lld: ",j);
        if(mile < juice) printf("Mile %lld\n",mile);
        else if(juice < mile) printf("Juice %lld\n",juice);
        else printf("Mile Juice %lld\n",mile);
    }
    return 0;
}
