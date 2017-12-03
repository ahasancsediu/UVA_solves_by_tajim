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
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define CLR1(a) memset(a,1,sizeof(a))
#include<stdio.h>
#include<string.h>
#include<ctype.h>

using namespace std;
char s[10000];
int a[111];

int main()
{
    int t,i,j,k,mx=0;
    cin>>t;
    getchar();
    for(i=0; i<t; i++)
    {
        gets(s);
        for(j='A'; j<='Z'; j++)
        {
            for(k=0; s[k]!='\0'; k++)
            {
                if(toupper(s[k])==j)
                    a[j]++;
            }
            if(a[j]>mx)
                mx = a[j];
        }
    }
    for(i=mx; i>0; i--)
    {
        for(j='A'; j<='Z'; j++)
        {
            if(a[j]==i) printf("%c %d\n",j,i);
        }
    }
    return 0;
}
