/**Bismillahir Rahamnir Rahim.**/

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
char s1[10000];
int main()
{
    ll r,a[99],b,c,d,e,f;
    while(cin>>r)
    {
        f=0;
        for(ll i=0;i<5;i++)
        {
            cin>>a[i];
            if(a[i]==r) f++;
        }
        cout<<f<<endl;
    }
    return 0;
}
