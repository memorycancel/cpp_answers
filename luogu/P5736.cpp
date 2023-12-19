#include <iostream>
#include <cmath>
using namespace std;

bool is_zhi(int n)
{
    if(n==1) return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int n=0;cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        if(is_zhi(t)) cout<<t<<' ';
    }

    return 0;
}
