/// accepted :)

/// uva 10035

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
#define ull unsigned long long
#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

using namespace std;

int main()
{
    ull a, b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0) break;
        ull c=0,r=0;
        while(a||b)
        {
            r=(a%10+b%10+r)/10;
            a=a/10;
            b=b/10;
            c+=r;
        }
        if (c==0) cout<<"No carry operation."<<endl;
        else if(c==1) cout<<"1 carry operation."<<endl;
        else cout<<c<<" carry operations."<<endl;
    }
    return 0;
}
