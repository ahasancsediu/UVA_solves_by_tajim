// Accepted :)
//Uva live 4556 The Next Permutation (Regionals 2009 >> North America - Greater NY)

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#include <iostream>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 1000000
#define ll long long
#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

using namespace std;

int main(void)
{
    int t,c;
    char number[99];
    cin>>t;
    while(t--)
    {
        scanf("%d %s", &c, number);
        if(next_permutation(number, number + strlen(number)))
            printf("%d %s\n", c, number);
        else printf("%d BIGGEST\n", c);
    }
    return 0;
}
