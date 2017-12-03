#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <cstring>
using namespace std;

long long factorial(long long a)
{
    if (a==0) return 1;
    else return a*factorial(a-1);
}

int main()
{
    long long n,tc,l,res1,res2;
    char str[100];
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {

        int c = 0, cnt[26] = {0};
        cin>>str;
        l=strlen(str);
        while (str[c] != '\0')
        {

            if (str[c] >= 'A' && str[c] <= 'Z')
                cnt[str[c]-'A']++;
            c++;
        }
        res1=1;
        for (c = 0; c < 26; c++)
        {
            if (cnt[c] >=2)
            {
                //printf("%c occurs %d times in the entered string.\n",c+'A',cnt[c]);
                res1*=factorial(cnt[c]);
            }
        }
        res2=factorial(l)/res1;
        printf("Data set %d: %lld\n",i,res2);
    }

    return 0;
}
