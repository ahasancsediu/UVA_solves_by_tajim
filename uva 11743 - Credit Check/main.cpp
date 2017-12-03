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
#define pf printf
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define CLR1(a) memset(a,1,sizeof(a))
using namespace std;
char s[10000];
ll n[1111],p[1111];
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll c=0;
        for (ll i = 0; i < 4; ++i)
        {
            ll n;
            cin >> n;

            c += n % 10;
            n /= 10;
            ll n1= ((n%10)*2);
            c+=n1%10;
            c+=n1/10;
            n1=0;
            n/=10;
            c += n % 10;
            n /= 10;
            n1= ((n%10)*2);
            c+=n1%10;
            c+=n1/10;

            //cout <<c<<endl;
        }
        if (c%10)
            cout << "Invalid\n";
        else
            cout << "Valid\n";
    }

    return 0;
}
