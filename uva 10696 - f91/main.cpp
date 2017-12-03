/// accepted :)

#include <iostream>
#define ll long long
using namespace std;
ll f91(ll n)
{
    ll ans=n;
    if(ans<=100)
    {
        ans=f91(f91(ans+11));
    }
    else ans-=10;
    return ans;
}
int main()
{
    ll n;
    while(cin>>n)
    {
        if (n==0) break;
        else if(n<=100) cout<<"f91("<<n<<") = "<<f91(n)<<endl;
        else if(n>=101) cout<<"f91("<<n<<") = "<<(n-10)<<endl;
    }
    return 0;
}
