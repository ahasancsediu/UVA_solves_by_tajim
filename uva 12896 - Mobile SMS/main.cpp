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
    ll t,u;
    cin>>t;
    char v  = '"';
    while(t--)
    {
        cin>>u;
        for(ll i=0; i<u; i++)
        {
            cin>>n[i];
        }
        for(ll j=0; j<u; j++)
        {
            cin>>p[j];
        }
        for(ll k=0; k<u; k++)
        {
            if(n[k]==0)
            {
                if(p[k]==1)
                    printf(" ");
            }
            if(n[k]==1)
            {
                if(p[k]==1)
                    printf(".");
                else if(p[k]==2)
                    printf(",");
                else if(p[k]==3)
                    printf("?");
                else printf("%c",v);
            }
            if(n[k]==2)
            {
                if(p[k]==1)
                    printf("a");
                else if(p[k]==2)
                    printf("b");
                else if(p[k]==3)
                    printf("c");
            }
            if(n[k]==3)
            {
                if(p[k]==1)
                    printf("d");
                else if(p[k]==2)
                    printf("e");
                else if(p[k]==3)
                    printf("f");
            }
            if(n[k]==4)
            {
                if(p[k]==1)
                    printf("g");
                else if(p[k]==2)
                    printf("h");
                else if(p[k]==3)
                    printf("i");
            }
            if(n[k]==5)
            {
                if(p[k]==1)
                    printf("j");
                else if(p[k]==2)
                    printf("k");
                else if(p[k]==3)
                    printf("l");
            }
            if(n[k]==6)
            {
                if(p[k]==1)
                    printf("m");
                else if(p[k]==2)
                    pf("n");
                else if(p[k]==3)
                    pf("o");
            }
            if(n[k]==7)
            {
                if(p[k]==1)
                    pf("p");
                else if(p[k]==2)
                    pf("q");
                else if(p[k]==3)
                    pf("r");
                else pf("s");
            }
            if(n[k]==8)
            {
                if(p[k]==1)
                    pf("t");
                else if(p[k]==2)
                    pf("u");
                else if(p[k]==3)
                    pf("v");
            }
            if(n[k]==9)
            {
                if(p[k]==1)
                    pf("w");
                else if(p[k]==2)
                    pf("x");
                else if(p[k]==3)
                    pf("y");
                else pf("z");
            }
        }
        pf("\n");
    }
}
