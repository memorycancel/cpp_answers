#include <iostream>
using namespace std;

int main()
{
    long long n;cin>>n;
    while(n>9)
    {
        long long mul=1;
        while(n>0)
        {
            if(n%10) mul*=n%10;
            n/=10;
        }
        n=mul;
    }
    cout<<n;

    return 0;
}
