#include <iostream>
using namespace std;

int mi(int n)
{
    if(n==0) return 1;
    return 2*mi(n-1);
}

int main()
{
    int n;cin>>n;
    cout<<mi(n);
    return 0;
}
