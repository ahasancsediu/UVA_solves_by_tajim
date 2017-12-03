
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
    ll t,a,b,c,d,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if (a==b && a==c && a==d) cout<<"square"<<endl;
        else if((a==b && c==d)||(a==c && b==d)||(a==d && b==c)) cout<<"rectangle"<<endl; /// ayotokhetro
        else if(a+b+c<=d || a+b+d<=c || a+c+d<=b || b+c+d<=a) cout<<"banana"<<endl;
        else cout<<"quadrangle"<<endl; /// choturvuj
    }
    return 0;
}
