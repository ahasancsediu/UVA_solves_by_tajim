

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#include <iostream>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 10000000
#define ll long long
#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        int mx=-9999,a = 0, b = 0;
        for(int i=1; i<=n; i++)
        {
            int l,w,h;
            cin>>l>>w>>h;
            if(h>=mx)
            {
                b = l * w * h;
                if(mx == h)
                {
                    if(b>a) a = b;
                }
                if(h>mx)
                {
                    mx = h;
                    a = b;
                }
            }
        }
        cout<<a<<endl;
    }
    return 0;
}
