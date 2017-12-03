/// Accepted :)
/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 19999999
#define ll long long
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
using namespace std;
int main()
{
    int cnt[10],n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        CLR(cnt);
        for(int i=1; i<=n; i++)
        {
            int tmp=i;
            while(tmp)
            {
                cnt[tmp%10]++;
                tmp/=10;
            }
        }
        for(int i=0; i<=9; i++)
        {
            if(i!=0) cout<<" ";
            cout<<cnt[i];
        }
        cout<<endl;
    }
}
