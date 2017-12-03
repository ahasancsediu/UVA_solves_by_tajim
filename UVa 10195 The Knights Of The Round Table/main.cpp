
/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
//#define MAX 19999999
#define MAX 100000
#define ll long long
#define ld long double
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define CLR1(a) memset(a,1,sizeof(a))
using namespace std;

int main()
{
    double a,b,c,s,r;
    while(cin>>a>>b>>c)
    {
        printf("The radius of the round table is: ");
        if(a==0 || b==0 || c==0) printf("0.000\n");
        else
        {
            s=(a+b+c)/2;
            r=sqrt((s-a)*(s-b)*(s-c)/s);
            printf("%.3lf\n",r);
        }
    }
    return 0;
}
