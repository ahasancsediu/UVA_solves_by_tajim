
/// accepted :)

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
char s1[10000];
int main()
{
    int j;
    while(gets(s1))
    {
        int word=0, i,start=0;
        for (i=0; s1[i]!='\0'; i++)
        {
            if(((s1[i]>='a' && s1[i]<='z') || ( s1[i]>='A' && s1[i]<='Z')))
            {
                start=1;
            }
            else
            {
                if(start)
                {
                    word++;
                    start=0;
                }
            }
        }
        if(s1[i]=='\0' && start==1)
        {
            word++;
            printf("%d\n", word);
        }
        else if(s1[i]=='\0')cout<<word<<endl;
    }
    return 0;
}
