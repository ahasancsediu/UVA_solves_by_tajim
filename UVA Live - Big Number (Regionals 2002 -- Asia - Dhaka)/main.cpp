// Accepted :)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long i,n,b,test,p;
double f[10000011];
int main()
{
    cin>>test;
    for(i=1; i<=10000001; i++) f[i]=log((i))+f[i-1];
    for(p=1; p<=test; p++)
    {
        cin>>n;
        cout<<(long)(f[n]/(f[10]-f[9]))+1<<endl;
    }
    return 0;
}
