#include <iostream>
using namespace std;

int main()
{
    int n,mul=1;cin>>n;
    for(int i=2;i<=n;i++) mul*=i;
    cout<<mul;

    return 0;
}
