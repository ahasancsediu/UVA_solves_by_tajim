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
    string ans[9999],b2;
    int c0,c1,c2,c3,c4,c5,c6,c7,c8,c9;
    int s;
    int n;
    ans[0]="1";
    ans[1]="1";
    for(int j=2; j<=3333; j++)
    {
        ans[j]=borofact(ans[j-1],j);
    }

    while(cin>>n)
    {
        if (n==0) break;
        b2=ans[n];
        //cout <<n<<"!"<<endl<<b2<<endl;
        s=b2.length();
        //cout<<"\n the size of the factorized number is = " <<s<<endl<<endl;
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
        for(int s1=0; s1<s; s1++)
        {

            if(ans[n][s1]=='0') c0++;
            else if (ans[n][s1]=='1') c1++;
            else if (ans[n][s1]=='2') c2++;
            else if (ans[n][s1]=='3') c3++;
            else if (ans[n][s1]=='4') c4++;
            else if (ans[n][s1]=='5') c5++;
            else if (ans[n][s1]=='6') c6++;
            else if (ans[n][s1]=='7') c7++;
            else if (ans[n][s1]=='8') c8++;
            else if (ans[n][s1]=='9') c9++;


        }

        cout <<n<<"! --"<<endl
             <<"   (0)    "<<c0<<"    (1)    "<<c1<<"    (2)    "<<c2<<"    (3)    "<<c3<<"    (4)    "<<c4<<endl
             <<"   (5)    "<<c5<<"    (6)    "<<c6<<"    (7)    "<<c7<<"    (8)    "<<c8<<"    (9)    "<<c9<<endl;

    }
    return 0;
}
