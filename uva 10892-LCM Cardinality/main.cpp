#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>


using namespace std;

long long GCD(long long a, long long b)
{
    if(b==0)
        return a;
    return GCD(b, a%b);
}

long long lcm(long long a,long long b)
{
    return a*(b/GCD(a,b));
}
int main()
{
    long long temp,n2=0,n,a[99999],c,p,i,j,t1,t2,counter,k;

    for( ; ; k++)
    {
        cin>>n;
        if(n==0) break;
        n2=n;
        i=2,c=0,j=0;
        a[j++]=1;
        a[j++]=n;
        while(i <= sqrt(n))
        {
            if(n%i==0)
            {
                //printf("%d,",i);
                a[j++]=i;
                //c++;
                if (i != (n / i))
                {
                    //printf("%d,",n/i);
                    a[j++]=n/i;
                    //c++;
                }
            }

            i++;
        }

        /*
                cout<<endl<<"Total number of divisors : "<<j<<" including "<<n<<" & 1"<<endl;
                for(int kt=0;kt<j;kt++)
                    cout<<a[kt]<<endl;
        */
        temp=0;
        counter=0;
        for(t1=0; t1<j; t1++)
        {

            for(t2=t1; t2<j; t2++)
            {
                if(lcm(a[t1],a[t2])==n2 && t1!=t2)
                {
                    counter++;
                }

            }

        }
        //cout<<n2<<" "<<counter+1<<endl;
        if(n2==1)
        {
            printf("%lld 1\n",n2);
        }
        else
        {
            printf("%lld %lld\n",n2,counter+1);

        }
    }

    return 0;
}
