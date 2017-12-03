
/* *** TAJIM *** */
/* **IIT_JU43** */

#include <iterator>
#include <numeric>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <deque>
#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
//#include<conio.h>
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
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#define BIT(n) (1<<(n))
#define AND(a,b) ((a) & (b))
#define OR(a,b) ((a) | (b))
#define XOR(a,b) ((a) ^ (b))
#define sqr(x) ((x) * (x))

#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define count_one(a) __builtin_popcount(a) // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define parity(i) __builtin_parity(i) //even parity 0 and odd parity 1
#define blz(a) __builtin_clz(a) //Returns the number of leading zeroes in a number(a)
#define btz(a) __builtin_ctz(a) //Returns the number of trailing zeroes in a number(a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
using namespace std;

int main()
{
    ll a,b,c,t;
    cin>>t;
    while(t--)
    {
        cin>>b>>c;
        if(b>c) printf(">\n");
        else if(b<c) printf("<\n");
        else printf("=\n");

    }
    return 0;
}
