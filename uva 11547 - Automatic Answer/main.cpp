
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
    ll t,n,ans,res;
    cin>>t;
    while(t--)
    {
        ans=0;
        res=0;
        cin>>n;
        //ans=abs((((n*567/9)+7492)*235/47)-498);
        ans=abs((((n*63)+7492)*5)-498)/10;
        res=ans%10;
/*
“Multiply n by 567, then divide the result by 9,
then add 7492, then multiply by 235, then divide by 47, then subtract 498.
What is the digit in the tens column?
*/
        //cout<<ans<<endl;
        cout<<res<<endl;
    }
    return 0;
}
