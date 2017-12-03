/// Accepted :)

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 19999999
#define ll unsigned long long
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
using namespace std;

int main()
{
    ll t[103],tt,a,a1,ans,avg;
    CLR(t);
    for(tt=1; ; tt++)
    {
        cin>>a;
        if(a==0) break;
        a1=0;
        avg=0;
        ans=0;
        for(ll i=0; i<a; i++)
        {
            cin>>t[i];
            a1+=t[i];
        }
        avg=a1/a;
//        for(int i=0;i<a;i++)
//        {
//            if(t[i]>avg) ans+=(t[i]-avg);
//        }
        for(ll j=0; j<a; j++)
        {
            if (avg<t[j]) ans+=(t[j]-avg);
        }
        cout<<"Set #"<<tt<<"\n"<<"The minimum number of moves is "<<ans<<"."<<"\n\n";
    }
    return 0;
}
