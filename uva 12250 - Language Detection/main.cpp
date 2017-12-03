
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
    int t=0;
    while(1)
    {
        string s;
        cin>>s;
        t++;
        if(s=="#") break;
        if(s=="HELLO") printf("Case %d: ENGLISH\n",t);
        else if(s=="HOLA") printf("Case %d: SPANISH\n",t);
        else if(s=="HALLO") printf("Case %d: GERMAN\n",t);
        else if(s=="BONJOUR") printf("Case %d: FRENCH\n",t);
        else if(s=="CIAO") printf("Case %d: ITALIAN\n",t);
        else if(s=="ZDRAVSTVUJTE") printf("Case %d: RUSSIAN\n",t);
        else printf("Case %d: UNKNOWN\n",t);
    }
    return 0;
}
