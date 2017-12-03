
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
    ll x1,y1,x2,y2;
    while(cin>>x1>>y1>>x2>>y2)
    {
        if(x1==0 && y1==0 && x2==0 && y2==0) break;
        ll dx=abs(x1-x2);
        ll dy=abs(y1-y2);
        if(dx==0 && dy==0) printf("0\n");
        else if(dx==dy || dx==0 || dy==0) printf("1\n");
        else printf("2\n");
    }
    return 0;
}
