#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>

long long primecheck (long long x);
using namespace std;

int main()
{
    long long n,a[99999],c,p,i,j,temp,k,mx,mn;

    for( ; ; k++)
    {
        cin>>n;
        if(n==0) break;
        if(n<0)
        {
            n=n*(-1);
        }

        if(primecheck (n))
        {
            cout<<"-1"<<endl;
        }
        else
        {

            c=0;

            p=sqrt(n);
            j=0;
            for(i=2; i<=p; i++)
            {
                if(n%i==0)
                {
                    a[j++]=i;
                    n=n/i;
                    temp=i;
                    i=1;
                }
                c=j;
            }

            if(n>1)
            {
                a[j++]=n;
                c++;
            }

            mn=a[0];
            mx=a[0];
            for(i=0; i<c; i++)
            {
                if(mn>a[i])
                {
                    mn=a[i];
                }
                else if(mx<a[i])
                {
                    mx = a[i];
                }
            }
            if(mx==mn)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                cout<<mx<<endl;
            }


        }
    }
    return 0;
}

long long primecheck (long long x)
{
    long long i;
    if (x<=0)
        return 0;
    if (x==2)
        return 1;
    for (i=2; i<=sqrt(x); i++)
    {
        if (x%i==0)
            return 0;
    }
    return 1;
}
/*
#include <iostream>

using namespace std;

int main()
{
    long long N, Answer, i;

    int counter;

    while (cin>>N && N != 0)
    {

        if (N < 0)
            N *= -1;

        Answer = -1;
        counter = 0;

        for ( i = 2; i*i <= N && N != 1; i++)
        {
            while (N%i == 0)
            {
                N /= i;
                Answer = i;
            }
            if (Answer == i)
            {
                counter++;
            }
        }


        if (N != 1 && Answer!=-1)
            Answer = N;
        else if(counter == 1)
            Answer = -1;

        cout<<Answer<<endl;
    }

    return 0;
}
*/
