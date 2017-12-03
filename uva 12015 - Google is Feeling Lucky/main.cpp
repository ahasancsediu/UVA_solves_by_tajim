/// accepted :)

/* *** TAJIM *** */
/* **IIT_JU43** */

#include <bits/stdc++.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#include <algorithm>
#define pi acos(-1.0)
//#define MAX 19999999
#define MAX 100000
#define ll long long
#define INF 1000111222
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define CLR1(a) memset(a,1,sizeof(a))
using namespace std;

struct a
{
    int num1;
    char name[100];
};
bool acompare(a lhs, a rhs)
{
    return lhs.num1 < rhs.num1;
}


int main()
{
    a arr[1000];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int i=0; i<10; i++)
        {
            scanf("%s %d",&arr[i].name ,&arr[i].num1);
        }
        std::sort(arr, arr+10, acompare);
        // num1 onujayi sort hobe :)
        cout<<"Case #"<<i<<":"<<endl;
        for(int i=0; i<10; i++)
        {
            if(arr[i].num1==arr[9].num1) cout<<arr[i].name<<endl;
        }
    }
}
/*
2
www.youtube.com 1
www.google.com 2
www.google.com.hk 3
www.alibaba.com 10
www.taobao.com 5
www.bad.com 10
www.good.com 7
www.fudan.edu.cn 8
www.university.edu.cn 9
acm.university.edu.cn 10
www.youtube.com 1
www.google.com 2
www.google.com.hk 3
www.alibaba.com 11
www.taobao.com 5
www.bad.com 10
www.good.com 7
www.fudan.edu.cn 8
acm.university.edu.cn 9
acm.university.edu.cn 10

output........

Case #1:
www.alibaba.com
www.bad.com
acm.university.edu.cn
Case #2:
www.alibaba.com

*/

