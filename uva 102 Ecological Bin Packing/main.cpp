#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main()
{
    long long a,b,c,d,e,f,g,h,i,s,t[7],BGC,BCG,CBG,CGB,GCB,GBC;
    while(cin>>a>>b>>c>>d>>e>>f>>g>>h>>i)
    {
        //cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;

        t[0]=BGC=d+g+b+h+c+f;
        t[1]=BCG=d+g+c+i+e+b;
        t[2]=CBG=f+i+a+g+e+b;
        t[3]=CGB=f+i+b+h+a+d;
        t[4]=GCB=e+h+c+i+a+d;
        t[5]=GBC=e+h+a+g+c+f;
        /*
        t[0]=BGC;
        t[1]=BCG;
        t[2]=CBG;
        t[3]=CGB;
        t[4]=GCB;
        t[5]=GBC;
            t[6]='BGC';
            t[7]='BCG';
            t[8]='CBG';
            t[9]='CGB';
            t[10]='GCB';
            t[11]='GBC';
        */
        s=pow(2,31);
        for(int i=0; i<6; i++)
        {
            s=min(s,t[i]);
        }
        /*
            cout<<s<<"----------"<<endl;
            for(int i=0; i<=6; i++)
            {
                cout<<t[i]<<"---";
            }
        */
        if(s==BCG)
        {
            cout <<"BCG "<<s<< endl;
        }
        else if(s==BGC)
        {
            cout <<"BGC "<<s<< endl;
        }

        else if(s==CBG)
        {
            cout <<"CBG "<<s<< endl;
        }
        else if(s==CGB)
        {
            cout <<"CGB "<<s<< endl;
        }
        else if(s==GBC)
        {
            cout <<"GBC "<<s<< endl;
        }
        else if(s==GCB)
        {
            cout <<"GCB "<<s<< endl;
        }
    }
    return 0;
}
