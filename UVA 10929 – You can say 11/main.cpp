#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,s;
    char n[1099];
    cin>>n;

    while(n[0]!='0'||strlen(n)>1)
    {
        s=0;
        i=strlen(n);
        for(j=0; j<i; j++)
        {
            s=s*10+n[j]-'0';
            s=s%11;
        }

        if(s==0)
        {
            printf("%s is a multiple of 11.\n",n);
        }
        else printf("%s is not a multiple of 11.\n",n);

        cin>>n;

    }
    return 0;
}


/*
example, 811414. The arithmetic we perform is 4-1+4-1+1-8=-1.
Because this is a negative number we ignore the minus sign and are left with 1.
This is not a multiple of 11, and so neither is 811414.
Another example: 1080706:

6-0+7-0+8-0+1=22. 22 is a multiple of 11 so 1080706 is also.

And for our final example: 92939190:
0-9+1-9+3-9+2-9= -30. Ignore the minus sign and we have 30, which is not a multiple of 11, which means that 92939190 is not either.
*/
