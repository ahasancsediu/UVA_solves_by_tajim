// Accepted :)
//UVA live 2787..........

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
    int x,k,j;
    while (cin >> x && x != -1)
    {
        ll a[333],i=0;
        CLR(a);
        a[i++]=x;
        while (cin >> x && x != 0) a[i++]=x;
        sort(a,a+i);
        int answer = 0;
        //for(int j=0;j<i;j++) cout<<a[j]<<" ";
        //cout<<"======"<<i<<"------"<<a[i-1]<<endl;
        for(j=i-1;j>0;j--)
        {
            for(k=0;k<j;k++)
            {
                if(a[k]*2==a[j]) answer++;
            }
        }
        cout << answer << endl;
    }
    return 0;
}
