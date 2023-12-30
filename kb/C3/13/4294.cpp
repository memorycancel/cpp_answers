#include <iostream>
using namespace std;

void print_tong(int n)
{
    if(n==0) return;
    printf("%5d",n);
    print_tong(n-1);
}

int main()
{
    int n;cin>>n;
    // first num is different! SHIT!@
    cout<<n;
    print_tong(n-1);

    return 0;
}
