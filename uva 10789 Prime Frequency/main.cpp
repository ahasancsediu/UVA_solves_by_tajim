/// Accepted :)

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
//#define MAX 19999999
#define MAX 2005
#define ll long long
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
using namespace std;

//sieve start
ll isprime[MAX],primes[MAX],pt;
void sieve()
{
    ll k=sqrt(MAX);
    isprime[0]=1;
    isprime[1]=1;
    for(ll i=4; i<=MAX; i+=2)
        isprime[i]=1;

    for(ll i=3; i<=k; i+=2)
    {
        if(isprime[i]==0)
        {
            for(ll j=i*i; j<MAX; j+=2*i)
                isprime[j]=1;
        }
    }
//
//    pt=0; // total numbers of prime
//
//    for(ll i=2; i<MAX; i++)
//    {
//        if(isprime[i]==0)
//        {
//            primes[pt++]=i;
//        }
//
//    }
    //isprime[something]==0 hoile ta prime :) evabe prime check dea jabe :)
}


int main()
{
    sieve();
//    int b='z'; //122
//    int c='A';
//    int d='0'; //48
//    cout<<d<<endl<<b-d<<endl;
    long long n,tc,l,cnt[155] = {0};
    char str[2222];
    //char res[2222];
    cin>>tc;
    for(int ii=1; ii<=tc; ii++)
    {
        int p=0;
        cin>>str;
        l=strlen(str);
        for(int i=0; i<l; i++)
        {
            cnt[str[i]-'0']++;
        }
        char ch='0';
//        for(int i=0; i<75; i++)
//        {
//            cout<<ch<<" "<<cnt[i]<<endl;
//            ch++;
//        }
        cout<<"Case "<<ii<<": ";
        for(int i=0; i<75; i++)
        {
            //cout<<"-------"<<cnt[i]<<endl;
            if(isprime[cnt[i]]==0)
            {
                cout<<ch;
                p=1;
            }
            ch++;
        }
        if (p==0) cout<<"empty";
        cout<<endl;
        CLR(cnt);
    }
    return 0;
}
