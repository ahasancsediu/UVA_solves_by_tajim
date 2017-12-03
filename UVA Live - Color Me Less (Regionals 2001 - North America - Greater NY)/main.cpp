// Accepted :)
//Uva live 2281 :)

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
    int R[16],G[16],B[16];
    for(int i = 0; i<16; ++i)
        scanf("%d %d %d",&R[i],&G[i],&B[i]);
    int r,g,b;
    while(1)
    {
        scanf("%d %d %d",&r,&g,&b);
        if(r==-1 && g==-1 && b==-1) break;
        int ans = -1,D = 0;
        for(int i = 0; i<16; i++)
        {
            int ans2 = (R[i]-r)*(R[i]-r)+(G[i]-g)*(G[i]-g)+(B[i]-b)*(B[i]-b);
            if(ans==-1 || ans2<D)
            {
                ans = i;
                D = ans2;
            }
        }
        printf("(%d,%d,%d) maps to (%d,%d,%d)\n",r,g,b,R[ans],G[ans],B[ans]);
    }
    return 0;
}
