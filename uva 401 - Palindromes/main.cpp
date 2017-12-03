
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


bool is_palindrome(string s)
{
    string a="";
    int len=s.size();
    for(int i=len-1; i>=0; i--)
    {
        a+=s[i];
    }
    if(s==a) return true;
    else return false;
}

bool is_mirror(string s)
{
    string b="";
    char c[3000];
    CLR(c);
    c['A']='A';
    c['E']='3';
    c['H']='H';
    c['I']='I';
    c['J']='L';
    c['L']='J';
    c['M']='M';
    c['O']='O';
    c['S']='2';
    c['T']='T';
    c['U']='U';
    c['V']='V';
    c['W']='W';
    c['X']='X';
    c['Y']='Y';
    c['Z']='5';
    c['1']='1';
    c['2']='S';
    c['3']='E';
    c['5']='Z';
    c['8']='8';
    int len=s.size();
    for(int i=len-1; i>=0; i--)
    {
        b+=c[s[i]];
    }
    if (s==b) return true;
    else return false;
}

int main()
{
    string s;

    while(cin>>s)
    {
        ll p=0,m=0;
        if(is_palindrome(s)) p=1;
        if(is_mirror(s)) m=1;

        if(p==1 && m==1) cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
        else if(p==1 && m!=1) cout<<s<<" -- is a regular palindrome."<<endl<<endl;
        else if(p!=1 && m==1) cout<<s<<" -- is a mirrored string."<<endl<<endl;
        else cout<<s<<" -- is not a palindrome."<<endl<<endl;

    }
    return 0;
}
