
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
    ll t,h,m,h2,m2;
    cin>>t;
    while(t--)
    {
        scanf("%lld:%lld",&h,&m);
        h= 11-h;
        if(m == 0) h++; //condition true 1 will be added
        if(h<=0) h+=12;
        if(m!= 0) m= 60-m;
        printf("%02lld:%02lld\n",h,m);
    }
    return 0;
}
