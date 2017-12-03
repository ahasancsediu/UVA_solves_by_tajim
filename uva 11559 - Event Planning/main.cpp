/// accepted :)

#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n,b,h,cost,w,i,j,ans,beds;
    while(scanf("%d%d%d%d",&n,&b,&h,&w)==4)
    {
        ans=b+1;
        for (i=0;i<h;i++)
        {
            scanf("%d",&cost);
            for(j=0;j<w;j++)
            {
                scanf("%d",&beds);
                if (beds>=n && cost*n<=b) ans=min(ans,cost*n);
            }
        }
        if(ans<=b) printf("%d\n",ans);
        else printf("stay home\n");
    }
    return 0;
}
/*

3 1000 2 3 200 0 2 2 300 27 3 20 5 2000 2 4 300 4 3 0 4 450 7 8 0 13

*/
