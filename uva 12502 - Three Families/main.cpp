#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        cout<<c*(2*a-b)/(a+b)<<endl;
    }

    return 0;
}
