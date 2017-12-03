/// accepted :)

#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int i,l,t,j,count;
    scanf("%d",&t);
    getchar();
    for(i=1; i<=t; i++)
    {
        gets(s);
        l=strlen(s);
        count=0;
        for(j=0; j<l; j++)
            switch(s[j])
            {
            case 'a':
                count=count+1;
                break;
            case 'b':
                count=count+2;
                break;
            case 'c':
                count=count+3;
                break;
            case 'd':
                count=count+1;
                break;
            case 'e':
                count=count+2;
                break;
            case 'f':
                count=count+3;
                break;
            case 'g':
                count=count+1;
                break;
            case 'h':
                count=count+2;
                break;
            case 'i':
                count=count+3;
                break;
            case 'j':
                count=count+1;
                break;
            case 'k':
                count=count+2;
                break;
            case 'l':
                count=count+3;
                break;
            case 'm':
                count=count+1;
                break;
            case 'n':
                count=count+2;
                break;
            case 'o':
                count=count+3;
                break;
            case 'p':
                count=count+1;
                break;
            case 'q':
                count=count+2;
                break;
            case 'r':
                count=count+3;
                break;
            case 's':
                count=count+4;
                break;
            case 't':
                count=count+1;
                break;
            case 'u':
                count=count+2;
                break;
            case 'v':
                count=count+3;
                break;
            case 'w':
                count=count+1;
                break;
            case 'x':
                count=count+2;
                break;
            case 'y':
                count=count+3;
                break;
            case 'z':
                count=count+4;
                break;
            case ' ':
                count=count+1;
                break;
            }
        printf("Case #%d: %d\n",i,count);
    }
    return 0;
}

