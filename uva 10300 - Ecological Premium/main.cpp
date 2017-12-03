
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
    ll n,f,a,b,c,d,ans=0;
    while(cin>>n)
    {
        while(n--)
        {
            ans=0;
            cin>>f;
            while(f--)
            {
                cin>>a>>b>>c;
                d=a*c;
                ans+=d;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
//The number of animals is not needed. Simply sum all the multiplications of the farmyard in square meters by the environment-friendliness and we're done.
//
//The number of animals is a red herring that distracts us and is useless. Read the problem carefully again.
