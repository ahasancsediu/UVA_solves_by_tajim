#include <iostream>
using namespace std;

int main()
{
    int cs,n1,n2;
    cin>>cs;
    for(int i=0; i<cs; i++)
    {
        cin>>n1;
        cin>>n2;

        if(n2%n1==0)
        {
            cout<<n1<<" "<<n2<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}

