//ACCEPTED :)

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string e;
    int a,b,c,d,t=0,k=0;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        a=0;
        b=0;
        c=0;
        d=0;
        cin>>e;
        reverse(e.begin(), e.end());
        for (int i = 0; i < 8; ++i)
        {
            a += (int(e[i]) - 48)*pow(2, i);
        }
        for (int i = 8,i2=0; i < 16; ++i)
        {
            b += (int(e[i]) - 48)*pow(2, i2);
            i2++;
        }
        for (int i = 16,i3=0; i < 24; ++i)
        {
            c += (int(e[i]) - 48)*pow(2, i3);
            i3++;
        }
        for (int i = 24,i4=0; i < 32; ++i)
        {
            d += (int(e[i]) - 48)*pow(2, i4);
            i4++;
        }
        cout <<d<<"."<<c<<"."<<b<<"."<<a<< endl;
        a=0;
        b=0;
        c=0;
        d=0;
    }
    return 0;
}
