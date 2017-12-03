#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int GCD(int a, int b)
{
    if(b==0)
        return a;
    return GCD(b, a%b);
}


/*int gcd(int a,int b)
{
    return b==0 ? a:gcd(b,a%b);
}
*/
int lcm(int a,int b)
{
    return a*(b/GCD(a,b));
}
int main()
{
    int N,i,temp,j,p;
    for( ; ; j++)
    {
        scanf("%d",&N);
        int G=0;
        for(i=1; i<N; i++)
            for(j=i+1; j<=N; j++)
            {
                G+=GCD(i,j);
            }


        cout<<G;

    }

    return 0;
}
