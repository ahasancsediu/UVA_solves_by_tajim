
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
    double m1,m2,m3,a,s;
    while(cin>>m1>>m2>>m3)
    {
        s=(m1+m2+m3)/2;
        a=(4.0/3.0)*(sqrt(s*(s-m1)*(s-m2)*(s-m3)));
        if(a>0) printf("%.3lf\n",a);
        else printf("-1.000\n");
    }
    return 0;
}
