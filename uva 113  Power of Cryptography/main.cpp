/// Accepted :)

#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#define ll long long
using namespace std;
int main()
{
    double n,p;
    while(cin>>n>>p)
    {
        printf("%.0lf\n",pow(p,1/n));
    }
    return 0;
}
