#include <iostream>
#include <bits/stdc++.h>
//#define mx 1000000000
#define ll long long
using namespace std;

int main()
{
    ll n,ans,lastOdd;
    while(scanf("%lld",&n)==1)
    {
        lastOdd=(n*(n+2)-1)/2;
        ans=lastOdd+lastOdd-2+lastOdd-4;
        //cout<<lastOdd<<endl;
        cout<<ans<<endl;
    }
    return 0;
}
