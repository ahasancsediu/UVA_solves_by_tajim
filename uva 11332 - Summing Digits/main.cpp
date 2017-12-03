/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 19999999
#define ll long long
using namespace std;

ll getSum(ll num)
{
    ll t=0,remainder=0,sum=0;
        t = num;
        while (t != 0)
        {
            remainder = t % 10;
            sum       = sum + remainder;
            t         = t / 10;
        }
    return sum;
}

int main()
{
    ll n,sum;
    while(cin>>n)
    {
        if (n==0) break;
        sum =n;
        while(sum>9)
        {
            sum=getSum(sum);
        }
        cout<<sum<<endl;
    }
    return 0;
}


/*

int main()
{
    int n, t, sum = 0, remainder;

    printf("Enter an integer\n");
    //scanf("%d", &n);
    while(cin>>n)
    {
        t=0,remainder=0,sum=0;
        t = n;
        while (t != 0)
        {
            remainder = t % 10;
            sum       = sum + remainder;
            t         = t / 10;
        }
        printf("Sum of digits of %d = %d\n", n, sum);
    }
    return 0;
}
*/
