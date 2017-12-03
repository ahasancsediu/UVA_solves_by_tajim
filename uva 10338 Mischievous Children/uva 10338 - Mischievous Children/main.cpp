/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 19999999
#define ll unsigned long long
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
using namespace std;

ll ar[30],f20[21];
ll fact(ll a)
{
    if (a==0) return 1;
    else return a*fact(a-1);
}

int main()
{
    string s;
    f20[0]=1;
    f20[1]=1;
    for(int i=2; i<=20; i++)
    {
        f20[i]=fact(i);
    }
    //for(int i=0;i<=20;i++) cout<<f20[i] <<endl;
    int i,j,a,t;
    cin>>t;
    for(int tt=1; tt<=t; tt++)
    {
        cin>>s;
        int l=s.length();
        ll a1=f20[l];
        //cout<<a1;
        for(i=0; i<l; i++)
        {
            ar[s[i]-'A']++;
        }
//    char c='A';
//    for(i=0;i<26;i++)
//    {
//        cout<<c<<" "<<ar[i]<<endl;
//        c++;
//    }
        for(i=0; i<26; i++)
        {
            if(ar[i]>1)
            {
                a1/=f20[ar[i]];
            }
        }
        cout<<"Data set "<<tt<<": "<<a1<<endl;
        a1=1;
        CLR(ar);
    }
    return 0;
}
