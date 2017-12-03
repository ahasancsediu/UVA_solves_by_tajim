
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
    ll t,a,b,c,d;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        ///Case 1: Invalid Case 2: Equilateral Case 3: Isosceles Case 4: Scalene
        cout<<"Case "<<i<<": ";
        if(a+b<=c || b+c<=a || a+c<=b) cout<<"Invalid"<<endl;
        else if(a==b && a==c) cout<<"Equilateral"<<endl;
        else if(a==b || b==c || c==a) cout<<"Isosceles"<<endl;
        else cout<<"Scalene"<<endl;
    }
    return 0;
}
