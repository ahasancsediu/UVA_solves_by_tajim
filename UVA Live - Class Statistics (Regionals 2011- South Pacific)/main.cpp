// Accepted :)
// UVA live 5682

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
    int t,n,j,a[52],i;
    cin>>t;
    if(t>=1 && t<=100)
    {
        for(int i1=1; i1<=t; i1++)
        {
            CLR(a);
            cin>>n;
            if(n>=2 && n<=50)
            {
                for(i=1; i<=n; i++)
                {
                    cin>>a[i];
                }
                int n2=n+1;
                sort(a,a+n2);
                int gap=0,diff=0,temp;

                for(i=2; i<=n; i++)
                {
                    gap=a[i]-a[i-1];
                    if(gap>=diff)
                        diff=gap;
                }
                cout<<"Class "<<i1<<endl
                <<"Max "<<a[n]<<", Min "
                <<a[1]<<", Largest gap "
                <<diff<<endl;
            }
        }
    }
    return 0;
}
