/// accepted :)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string borofact (string a, int aa)
{
    reverse(a.begin(),a.end());
    string b;
    int t,i, carry= 0;
    for(int i=0; i<a.size(); i++)
    {
        t= (a[i]-'0')*aa+carry;
        b+=(t%10)+'0';
        carry=t/10;
    }
    while(carry>0)
    {
        b+=(carry%10)+'0';
        carry/=10;
    }
    reverse(b.begin(),b.end());
    return b;
}

int main()
{
    string ans[9999];
    ans[0]="1";
    ans[1]="1";
    for(int j=2; j<=3333; j++)
    {
        ans[j]=borofact(ans[j-1],j);
    }

    int n;
    while(cin>>n)
    {
        cout <<n<<"!"<<endl<<ans[n]<<endl;
    }
    return 0;
}
