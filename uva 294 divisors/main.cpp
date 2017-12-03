///Accepted :)
///* *** TAJIM *** */
///* **IIT_JU43** */

#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 1000000
#define ll long long
#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

using namespace std;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll hi,lw,cnt2=0,ans=0,cnt;
        double sq;
        cin>>lw>>hi;
        for(ll i=lw;i<=hi;i++)
        {
            cnt=0;
            sq=sqrt(i);
            for(ll j=1;j<=sq;j++)
            {
                if(i%j==0)
                {
                    cnt++;
                    if(j<sq) cnt++;
                }
            }

            if(cnt>cnt2)
            {
                cnt2=cnt;
                ans=i;
            }
        }
        cout<<"Between "<<lw<<" and "<<hi<<", "
        <<ans<<" has a maximum of "
        <<cnt2<<" divisors."<<endl;
    }
    return 0;
}
