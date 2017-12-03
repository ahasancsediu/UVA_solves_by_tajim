/// accepted :)

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>

#include <algorithm>
#include <cstring>
#define pi acos(-1.0)
#define MAX 1000000
#define ll long long
#define ull unsigned long long
#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

using namespace std;


int main()
{
    ll a,b,c;
    while(cin>>a>>b)
    {
        if(a>b)
            c=a-b;
        else
            c=b-a;
        cout<<c<<endl;
    }
    return 0;
}
