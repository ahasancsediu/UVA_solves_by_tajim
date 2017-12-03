#include <iostream>
#include <bits/stdc++.h>
#include <cctype>
#include <string>
#include <cstring>
using namespace std;

string borofact(string a, int aa)
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
    string ans[10099],b2;
    int c0,c1,c2,c3,c4,c5,c6,c7,c8,c9;
    int s;
    int n;
    ans[0]="1";
    ans[1]="1";
    for(int j=2; j<=10000; j++)
    {
        ans[j]=borofact(ans[j-1],j);
    }

    while(cin>>n)
    {
        b2=ans[n];
        //cout <<n<<"!"<<endl<<b2<<endl;
        s=b2.length();
        //cout<<"\n the size of the factorized number is = " <<s<<endl<<endl;
        //cout<<"-----last element is "<<ans[n][s-1]<<endl;
        c0=0;
        c1=0;
        c2=0;
        c3=0;
        c4=0;
        c5=0;
        c6=0;
        c7=0;
        c8=0;
        c9=0;
        for(int s1=s-1; s1>=0; s1--)
        {
            if(ans[n][s1]>'0') break;
            else c0++;


        }
        printf("%5d -> ",n);
        cout<<ans[n][s-c0-1]<<endl;

    }
    return 0;
}
