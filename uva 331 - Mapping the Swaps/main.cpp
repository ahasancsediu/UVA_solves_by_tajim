/// accepted :)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int a[99],swapMap,t,n;
bool sorted()
{
    for(int i=2; i<=n; ++i) if(a[i] < a[i-1]) return false;
    return true;
}

void dfs()
{
    if(sorted())
    {
        swapMap++;
        return;
    }
    for(int i=1; i<n; i++)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
            dfs();
            swap(a[i],a[i+1]);
        }

    }
}

int main()
{
    t=1;
    a[0]=-99999;
    while(cin>>n && n!=0)
    {
        for(int i=1; i<=n; ++i) scanf("%d", &a[i]);
        swapMap=0;
        if(!sorted()) dfs();
        printf("There are %d swap maps for input data set %d.\n",swapMap,t++);
    }
    return 0;
}
