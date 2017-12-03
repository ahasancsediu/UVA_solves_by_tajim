/**Bismillahir Rahamnir Rahim.**/

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
char s[10000];
int main()
{
    while(cin>>s)
    {
        ll l=strlen(s);
        for(ll i=0; i<l; i++)
        {
            if((s[i]=='A')||(s[i]=='B')||(s[i]=='C'))
                printf("2");
            else if((s[i]=='D')||(s[i]=='E')||(s[i]=='F'))
                printf("3");
            else if((s[i]=='G')||(s[i]=='H')||(s[i]=='I'))
                printf("4");
            else if((s[i]=='J')||(s[i]=='K')||(s[i]=='L'))
                printf("5");
            else if((s[i]=='M')||(s[i]=='N')||(s[i]=='O'))
                printf("6");
            else if((s[i]=='P')||(s[i]=='Q')||(s[i]=='R')||(s[i]=='S'))
                printf("7");
            else if((s[i]=='T')||(s[i]=='U')||(s[i]=='V'))
                printf("8");
            else if((s[i]=='W')||(s[i]=='X')||(s[i]=='Y')||(s[i]=='Z'))
                printf("9");
            else
                printf("%c",s[i]);
        }
        cout<<endl;
    }

    return 0;
}
