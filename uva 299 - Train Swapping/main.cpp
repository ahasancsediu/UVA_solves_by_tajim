/// accepted :)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[99],s,t,n;
    cin>>t;
    while(t--)
    {
        int b;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        s=0;
        int temp=0;
        for(int i=0; i<n-1; i++)
            for(int j=0; j<n-i-1; j++)
                if(a[j]>a[j+1])
                {
                    s++;
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
        printf("Optimal train swapping takes %d swaps.\n",s);
    }
    return 0;
}
