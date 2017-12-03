// Accepted :)

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

string fun(string str,int key)
{
    string ret="";
    int len=str.length();
    key%=26;
    if(key<0) key+=26;
    for(int i=0; i<len; i++)
    {
        // if(str[i]==' ') ret+=' ';
        //else if(str[i]==',') ret+=',';
        //else
        //{
        int aski=(int)str[i];
        int nwp=0;
        if(aski>=65 && aski<=90)
        {
            nwp=aski+key;
            if(nwp>90)
            {
                nwp=nwp-90+64;
            }
        }
        else
        {
            nwp+=aski;
        }

        /* else if(aski>=97 && aski<=122)
         {
             if(nwp>122)
             {
                 nwp=nwp-122+96;  //97-122=a-z
             }
         }
         */
        ret+=(char)nwp;
        // }
    }
    return ret;
}

int main()
{
    string input,s,e;
    char aw;
    int key;
    while(1)
    {

        key=5;
        cin>>s;
        if(s=="ENDOFINPUT")
            break;
        else if(s=="START")
        {
            getchar();
            getline(cin,input);
            string decription=fun(input,-key);
            cout<<decription<<endl;
        }
        cin>>e;
    }
    return 0;
}
