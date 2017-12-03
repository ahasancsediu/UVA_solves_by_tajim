// Accepted :)

#include <iostream>

using namespace std;

int main()
{
    int t,ans=0,n,a,d,a2;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>d;
        ans=a;
        a2=0;
        for(int i=1;i<n;i++)
        {
            ans+=d;
            a2+=ans;
        }
    cout << a2+a << endl;

    }
    return 0;
}
