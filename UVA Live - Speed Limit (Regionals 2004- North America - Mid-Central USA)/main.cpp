// Accepted :)

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 19999999
#define ll long long
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
using namespace std;


int main()
{
    ll n,s,t,res,z;
    while(cin>>n && n!=-1)
    {
        z=0;
        res=0;
        while(n--)
        {
            cin>>s>>t;
            res+=(t-z)*s;
            z=t;
        }
        cout<<res<<" miles"<<endl;
    }
    return 0;
}
