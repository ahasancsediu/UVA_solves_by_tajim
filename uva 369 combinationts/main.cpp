/* *** TAJIM *** */
/* **IIT_JU43** */
///uva 369

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
ll nCr(ll n,ll m)
{
    ll res=1,i;
    if(n-m<m)
        m=n-m;
    for(i=1; i<=m; i++,n--)
    {
        res=res*n;
        res=res/i;
    }
    return res;
}
int main()
{
    long long n,r;
    while(cin>>n>>r)
    {
        if(n==0&&r==0)
            break;
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,nCr(n,r));
    }
    return 0;
}

//
//int main()
//{
//    ll nCase,tCase,n,r;
//    cin>>nCase;
//    for(tCase=1; tCase<=nCase; tCase++)
//    {
//        cin>>n>>r;
//        ll rr=0;
//        rr=nCr(n,r);
//        rr%=1000003;
//        cout<<"Case "<<tCase<<": "<<rr<<endl;
//    }
//    return 0;
//}
