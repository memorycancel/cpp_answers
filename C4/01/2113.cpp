#include <iostream>
using namespace std;

bool is_wan(int n)
{
    int sum=0;
    for(int j=1;j<n;j++)
    {
        if(n%j) continue;
        sum+=j;
    }
    return sum==n;
}

int main()
{
    int n;cin>>n;
    for(int i=1;i<=n;i++) if(is_wan(i)) cout<<i<<' ';

    return 0;
}
