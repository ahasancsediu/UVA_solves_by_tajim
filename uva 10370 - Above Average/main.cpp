
/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
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
using namespace std;

int main()

{
    int a[1001],i,t,d,cnt,m;
    float avg,k,n,j;
    while(cin>>t)
    {
        for(int i=1; i<=t; i++)
        {
            avg=0;
            cnt=0;
            k=0;
            cin>>j;
            for(int i=0; i<j; i++)
            {
                scanf("%d",&a[i]);
                k+=a[i];
            }
            avg=k/j;
            for(m=0; m<j; m++)
            {
                if(a[m]>avg) cnt++;
            }
            n=(100*cnt)/j;
            printf("%.3f%%\n",n);
        }
    }
    return 0;
}
