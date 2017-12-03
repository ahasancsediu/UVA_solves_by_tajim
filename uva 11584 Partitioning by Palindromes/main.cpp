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

int is[1010];
bool isPalindrome(int suru,int ses)
{
    int l= ses-suru+1;
    for(int i=suru; i<suru+(l/2); i++)
    {
        if(is[i]!=is[ses+suru-i])
        {
            return false;
        }
    }
    return true;
}
int dp[1111];
int main()
{
    CLR(is);
    char s[1111];
    int t;
    cin>>t;
    while(t--)
    {
        scanf("%s",&s);
        int l=strlen(s);
        for(int i=0; i<l; i++)
        {
            is[i]=(int)s[i];
        }
        for(int i=0; i<1111; i++) dp[i]=2000000000;
        dp[0] = 0;
        dp[1] = 1;
        for ( int i = 1; i < l; i++ )
        {
            for ( int j = 0; j <= i; j++ )
            {
                if ( isPalindrome (j, i) )
                {
                    dp[i + 1] = min (dp[i + 1],dp[j] + 1);
                }
            }
        }
        cout<<dp[l]<<endl;
    }
    return 0;
}
