#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if(n<2) return 0;
    for(int i=2;i*i<n+1;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int a,b,count=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(is_prime(i)) count++;
    }
    cout<<count;
    return 0;
}
