#include<stdio.h>
#include<string.h>
int main()
{
    char s[11];
    int t=1;
    while(scanf("%s",s))
    {
        if(!strcmp(s,"*"))
        break;
        else if(!strcmp(s,"Hajj"))
        printf("Case %d: Hajj-e-Akbar\n",t++);
        else
        printf("Case %d: Hajj-e-Asghar\n",t++);
    }
    return 0;
}
