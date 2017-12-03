// Accepted :)

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 1000000
#define ll long long
#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

using namespace std;


int main()
{
    int n,t=1;
    float a;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>a>>s;
        if (s=="kg")
        {
            printf("%d %.4f lb\n",t++,a*2.2046);
            //cout<<t++<<" "<<a*2.2046<<" lb"<<endl;
        }
        else if (s=="lb")
        {
            printf("%d %.4f kg\n",t++,a*0.4536);
            //cout<<t++<<" "<<a*0.4536<<" kg"<<endl;
        }
        else if (s=="l")
        {
            printf("%d %.4f g\n",t++,a*0.2642);
            //cout<<t++<<" "<<a*0.2642<<" g"<<endl;
        }
        else if (s=="g")
        {
            printf("%d %.4f l\n",t++,a*3.7854);
            //cout<<t++<<" "<<a*3.7854<<" l"<<endl;
        }
    }
    return 0;
}
