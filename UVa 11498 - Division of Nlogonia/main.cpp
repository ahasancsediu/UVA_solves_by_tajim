
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
    ll x,y,k,n,m;
    while(cin>>k &&k)
    {
        cin>>n>>m;
        for(int i=0;i<k;i++)
        {
            cin>>x>>y;
            if(x==n || y==m) cout<<"divisa\n";
            else if(x>n && y>m) cout<<"NE\n";
            else if(x<n && y>m) cout<<"NO\n";
            else if(x>n && y<m) cout<<"SE\n";
            else cout<<"SO\n";
        }
    }
    return 0;
}
