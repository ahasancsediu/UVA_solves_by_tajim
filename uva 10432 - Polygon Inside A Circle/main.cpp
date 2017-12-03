
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
    double r,n,a,ans;
    while(cin>>r>>n)
    {
        a=r*r*sin(2*pi/n)/2;
        printf("%.3lf\n",n*a);
    }
    return 0;
}

//The length of each side of the polygon are same.
//So if we add the n vertex of the polygon to the center of the circle,
//then we get n triangles all having same area.
//Now the angle created at center by any triangle is exactly (2\pi /n) and the length of both arms of triangle is r.
//So the area of any triangle is A={\frac  {r^{2}\sin({\frac  {2\pi }{n}})}{2}}.
//So, area of polygon is nA
