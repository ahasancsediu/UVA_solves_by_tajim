
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
    ll a,b,c,ans;
    while(cin>>a>>b>>c)
    {
        if (a==0 && b==0 && c==0) break;
        if (a<=0 || b<=0 ||c<=0) cout<<"wrong\n";
        else if (a*a==b*b+c*c)cout<<"right\n";
        else if (b*b==a*a+c*c)cout<<"right\n";
        else if (c*c==a*a+b*b)cout<<"right\n";
        else cout<<"wrong\n";
    }
    return 0;
}
