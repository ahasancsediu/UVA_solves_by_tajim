
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
    double u,v,a,s,t,b;
    int cs=0,c;
    while(cin>>c)
    {
        cs++;
        if(c==0) break;
        if(c==1)
        {
            cin>>u>>v>>t;
            a=(v-u)/t;
            s=((v+u)/2)*t;
            printf("Case %d: %.3lf %.3lf\n",cs,s,a);
        }
        if(c==2)
        {
            cin>>u>>v>>a;
            t=((v-u)/a);
            s=((v+u)/2)*t;
            printf("Case %d: %.3lf %.3lf\n",cs,s,t);
        }
        if(c==3)
        {
            cin>>u>>a>>s;
            v=sqrt((u*u)+2*a*s);
            t=((v-u)/a);
            printf("Case %d: %.3lf %.3lf\n",cs,v,t);
        }
        if(c==4)
        {
            cin>>v>>a>>s;
            u=sqrt((v*v)-2*a*s);
            t=((v-u)/a);
            printf("Case %d: %.3lf %.3lf\n",cs,u,t);
        }
    }
    return 0;
}
