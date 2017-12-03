// Accepted :)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,n1,k,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        y=0;
        for(int j=0;j<n;j++)
        {
            cin>>n1;
            y=y+(n1/k);
        }
        cout<<y<<endl;
    }
    return 0;
}
