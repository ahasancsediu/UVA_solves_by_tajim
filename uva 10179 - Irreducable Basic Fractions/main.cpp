/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define INT_MIN (-2147483648)
#define pi acos(-1.0)
#define MAX 1000000
#define ll long long
#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

using namespace std;
//ll gcdcnt(ll n)
//{
//    ll cnt=0;
//    for(ll i=1;i<=n;i++)
//    {
//        if(__gcd(n,i)==1) cnt++;
//    }
//    return cnt;
//}

ll eular_phi(ll n)
{
    ll res;
    ll j;

    if (n==1) return 1;

    res=n;
    if (n%2==0)
    {
        res-=res/2;
        while(n%2==0) n/=2;
    }
    for (j=3; j*j<=n; j+=2)
    {
        if (n%j==0)
        {
            res-=res/j;
            while (n%j==0) n/=j;
        }
    }
    /* If i>1, then it's the last factor at this point. */
    if (n>1) res-=res/n;
    return res;
}
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0) break;
        //cout<<gcdcnt(n);
        cout<<eular_phi(n)<<endl;
    }
    return 0;
}

