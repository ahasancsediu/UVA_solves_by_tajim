/// Accepted :)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    for(int ii=1;ii<=n;ii++)
    {
        int matches=0,i=0;
        cin>>matches;
        char wins[11];
        cin>>wins;
        int A=0,B=0,T=0,W=0;
        for(i=0; i<matches; i++)
        {
            if(wins[i]=='A')
                A++;
            else if(wins[i]=='B')
                B++;
            else if(wins[i]=='T')
                T++;
            else if(wins[i]=='W')
                W++;
        }
        if((B+A==matches)&& B!=0)
            printf("Case %d: BANGLAWASH\n",ii);
        else if((W+A==matches) && W!=0)
            printf("Case %d: WHITEWASH\n",ii);
        else if(A==matches)
            printf("Case %d: ABANDONED\n",ii);
        else if(B>W)
            printf("Case %d: BANGLADESH %d - %d\n",ii,B,W);
        else if(B<W)
            printf("Case %d: WWW %d - %d\n",ii,W,B);
        else if(B==W)
            printf("Case %d: DRAW %d %d\n",ii,B,T);
    }
    return 0;
}

