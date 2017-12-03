/// accepted :)
///* *** TAJIM *** */
///* **IIT_JU43** */

#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define MAX 100000
#define ll int
#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define M 25001
//maximum share of each person, max coin is 500c and max number of coins is 100
using namespace std;

bool  dp[M];
int main()
{
    int i, j,t, NoOfCoins, m, sum, coins[101];
    cin >>t;
    while(t--)
    {
        cin >> NoOfCoins;
        for(sum = 0, i = 1; i <= NoOfCoins; i++)
            cin >> coins[i], sum += coins[i];
        //the share of each person (minus one if sum is odd)
        m = sum / 2;
        CLR(dp);
        dp[0] = 1;
        //fill the v table
        //for each coins of the coins check with true the elements off the table v that
        // can be reached by adding this coin//example adding first coin 3
        //v[0] = v[3] = true//adding 2
        // v[0] = v[2] = v[3] =v[5]
        for(i = 1; i <= NoOfCoins; i++)
            for(j = m; j >= 1; j--)
             {
                //if element j in the v table is false see if it could be reached or no//if its true leave it
                if(dp[j]==0)
                {
                     dp[j] = (coins[i] <= j)? dp[j-coins[i]] :0;
                }
             }

         //see which is the last element that can be reached within the rangeof the share of each person
        for(j = m; j >= 1; j--)
        {
            if(dp[j]!=0) break;
        }
        //the rest is the difference between total money and total shares
        cout <<abs(sum - j * 2)<<endl;
    }
    return 0;
}




//int sum, n, b, other, dif,coins[111],dp[MAX];
//int main()
//{
//    int t, ans;
//    scanf("%d", &t);
//    while(t--)
//    {
//        sum = 0;
//        ans = 1e9;
//        scanf("%d", &n);
//        for (int i =0; i<n; i++)
//        {
//            scanf("%d", &coins[i]);
//            sum += coins[i];
//        }
//        SET(dp);
//        int a = 1;
//        dp[0] = 1;
//        for (int i = 0; i < n; i++)
//        {
//            int l = a;
//            for (int j = 0; j <= l; j++)
//            {
//                if ((dp[j] != i && dp[j] != -1) || (j==0))
//                {
//                    b = j + coins[i];
//                    a = max(a,b);
//                    if (dp[b] == -1) dp[b] = i;
//                }
//            }
//        }
//        for (int i = 0; i<=a; i++)
//        {
//            if(dp[i] != -1) ans = min(ans, abs(sum - 2*i));
//        }
//        printf("%d\n", ans);
//    }
//    return 0;
//}

