
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
    ll a,b,c,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a+b<=c || b+c<=a || a+c<=b)
            printf("Wrong!!\n");
        else
            printf("OK\n");
    }
    return 0;
}
