
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
    ll l,w,h;
    double v,angle,O,vt,lombo;
    while(cin>>l>>w>>h>>angle)
    {
        lombo = l*tan(angle*pi/180.0);
        if(lombo>h) v=0.5*h*h*l*w/lombo;
        else
        {
            vt = 0.5*l*lombo*w;
            /// vt holo oi trivujer volume :)
            v = (l*w*h)-vt;
        }
        printf("%.3lf mL\n",v);
    }
    return 0;
}
