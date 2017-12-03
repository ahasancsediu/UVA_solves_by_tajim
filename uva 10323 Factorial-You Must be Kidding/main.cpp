#include <iostream>
#include <bits/stdc++.h>
#include <cctype>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    long long a;
    while(cin>>a)
    {
        if(a<0 && a%2==0) cout<<"Underflow!"<<endl;
        else if(a<0 && a%2!=0) cout<<"Overflow!"<<endl;
        else if(a==0 || a<=7) cout<<"Underflow!"<<endl;
        else if(a>13) cout<<"Overflow!"<<endl;
        else if(a==8) cout<<"40320"<<endl;
        else if(a==9) cout<<"362880"<<endl;
        else if(a==10) cout<<"3628800"<<endl;
        else if(a==11) cout<<"39916800"<<endl;
        else if(a==12) cout<<"479001600"<<endl;
        else if(a==13) cout<<"6227020800"<<endl;
    }

    return 0;
}
