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
    for(int i=1;i<=100;i++)
    {
        if(is_prime(i)) cout<<i<<' ';
    }
    return 0;
}
