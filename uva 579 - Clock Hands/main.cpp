/// accepted :)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double dh,h,m,ans;
    while(scanf("%lf:%lf",&h,&m)==2)
    {
        if(h==0 && m==0) break;

        dh=h*30+(m/60)*30;
        ans=abs(dh-m*6);
        if(ans>180) ans=360-ans;
        printf("%.3lf\n",ans);
    }
    return 0;
}
