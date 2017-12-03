/**Bismillahir Rahamnir Rahim.**/

/// accepted :)

/* *** TAJIM *** */
/* **IIT_JU43** */



#include <bits/stdc++.h>
#include <iostream>
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
char s[10000];
int main()
{
    string s1;
    while(getline(cin,s1))
    {
        //cout<<s1<<endl<<l<<endl;
        ll n = 0;
        ll l=s1.size();
        if ( (s1[0] -48) >= 0 && s1[0]-48 <= 9)
        {
            reverse(s1.begin(),s1.end());
            for (ll i = 0; i<l; i++)
            {
                n = n * 10 + s1[i]-48;
                if((n>=65&&n<=90)||(n>=97&&n<=122)||n==32||n==33||n==44||n==46||n==58||n==59||n==63)
                {
                    printf("%c",n);
                    n = 0;
                }
            }
        }
        else
            for (ll i=l-1; i>=0; i--)
            {
                ll a=s1[i];
                ll b=0;
                while(a>0)
                {
                    b=a%10;
                    cout<<b;
                    a=a/10;
                }
            }
        printf("\n");
    }
    return 0;
}
