#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

//int GCD(int a, int b)
//{
//    if(b==0)
//        return a;
//    return GCD(b, a%b);
//}



int main()
{
    int a[333],l,k,N,t,c,mgcd;
    string inputs;
    cin>>t;
    getchar();
    for(k=0; k<t; k++)
    {
        getline(cin,inputs);
        stringstream ss(inputs); //stringstream used.
        c=0;
        while(ss>>a[c]) c++;

        /*
        l=0;
        cin>>N;
        while(N!='\n')
        {
            a[l++]=N;
            c=l+1;
        }
        for(l=0;l<100; l++)
        {
            cin>>N;
            a[l]=N;
            c=l+1;
            if(N=='\n') break;

        }
        cout<<c<<endl;
        */

        mgcd = 0;
        for(int i = 0; i<c; ++i)
            for(int j = i+1; j<c; ++j)
                mgcd = max(mgcd,__gcd(a[i],a[j]));
        cout<<mgcd<<endl;

    }
    return 0;
}
