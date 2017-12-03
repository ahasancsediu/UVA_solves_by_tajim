// Accepted :)
//Uva live 3882 And Then There Was One (Regionals 2007 >> Asia - Tokyo)

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#include <iostream>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 1000000
#define ll long long
#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

using namespace std;

int main()
{
    int n,m,k,ans=0,a[11111];
    while(cin>>n>>k>>m)
    {
        if(m==0&&n==0&&k==0) break;
        a[1]=0;
        for(int i=2;i<=n;i++)
           a[i]=(a[i-1]+k)%i;
        int ans=(a[n]+m-k+1)%n;
        if(ans<=0) ans+=n;
        printf("%d\n",ans);
    }
  return 0;
}
