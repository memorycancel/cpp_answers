#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if(n<2) return false;
    for(int i=2;i*i<n+1;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int n;cin>>n;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(is_prime(i)) count++;
    }
    cout<<count;
    return 0;
}
