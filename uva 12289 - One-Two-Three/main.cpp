/// accepted :)


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
    string s;
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if (s.size()==5) printf ("3\n");
        else
        {
            ll c=0;
            if ( s [0] == 't' ) c++;
            if ( s [1] == 'w' ) c++;
            if ( s [2] == 'o' ) c++;
            if (c>=2) cout<<"2"<<endl;
            else cout<<"1"<<endl;
        }
    }
    return 0;
}
