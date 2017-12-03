
/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
//#define MAX 19999999
#define MAX 100000
#define ll long long
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define CLR1(a) memset(a,1,sizeof(a))
using namespace std;

const double cv = sin((108 * pi)/ 180) / sin((63 * pi)/180);
//#define cv 1.0673956817111818692592637626711;//from felix_halim
int main()
{
    double n;
    while(scanf("%lf",&n)==1) printf("%.10lf\n",n * cv);
    return 0;
}

//Consider the upper-right piece of the pentagon. Let A be the upper vertex, B be the right-most vertex, and C be the point where the square touches the right wall of the pentagon. Let O be the center of the pentagon.
//
//- The line OC is a diagonal of the square, so, the angle ACO must be 45 degrees.
//
//- The line OC is paralell to the bottom of the pentagon, so the angle OCB must be 108 degrees (the interior angle in a regular pentagon).
//
//- This means that the angle ACB must be 63 degrees (108 - 45).
//
//- Knowing this, and knowing that angle ABC is also 108 degrees, we can use the sine law to get our final answer:
//
//square length = pentagon length * (sin 108 / sin 63)

