// Accepted . but i am not happy... some copied :(

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define MAX 200010
#define CLR(a) memset(a,0,sizeof(a))
using namespace std;
int a[MAX];


void change(int x, int val)
{
    while(x<=200000)
    {
        a[x]+=val;
        x+=(x & -x);  // er mane x theke x er right er j bit ta 1 ase seta bad.
    }
return;
}

int read(int x)
{
    int val=0;
    while(x)
    {
        val+=a[x];
        x-=x & -x;
    }
return val;
}


int main()
{
    int t=1,n,x,y,x1,z;
    string s;
    while(cin>>n && n)
    {
        CLR(a);
        for(int i=1; i<=n; i++)
        {
            cin>>x1;
            change(i,x1);
        }
        if(t>1) cout<<"\n";
        cout<<"Case "<<t++<<":\n";
        while(cin>>s && s!="END")
        {
            z=0;
            cin>>x>>y;
            if(s=="S")
            {
                change(x, y-read(x)+read(x-1));
            }
            else
            {
                z=read(y)-read(x-1);
                cout<<z<<"\n";
            }
        }
    }
    return 0;
}
