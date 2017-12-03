// Accepted :)

#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
    int N,n,c,k,a[109990],b[100990],f1,f,i,fr[999];
    while(cin>>n>>c>>k &&n)
    {
        N=n*c;
        memset(a,0,sizeof(a));
        memset(fr,0,sizeof(fr));
        //if(n==0 || c==0 || k==0) break;
        for(int i=1; i<=N; i++)
        {
            cin>>a[i];
            fr[a[i]]++;
        }
        sort(a,a+(N+1));
        //cout<<"\n\n-------"<<a[N]<<"-----"<<endl;
        f1=100099;
        int l=0;
        //int mn=0;
        //mn=min(a[N],k);
        for(int j=1; j<=k; j++)
        {
            f=0;
            for(i=1; i<=n*c; i++)
            {
                if(a[i]==j)
                {
                    f++;
                }
            }
            if(f<=f1)
            {
                f1=f;
                //b[l++]=j;
            }
        }
        //cout<<"\nLowest frequency : -----"<<f1<<endl;
        /*
        for(int m=0; m<l; m++)
        {
            //if(b[m]!= b[m-1])
            //{
                cout<<b[m]<<" ";
            //}
        }
        */
        bool z=false;
        for(int i=1;i<=k;i++)
        {
            if(f1==fr[i])
            {
                if(z) cout<<" ";
                cout<<i;
                z=true;
            }
        }
       cout<<endl;
    }
    return 0;
}
