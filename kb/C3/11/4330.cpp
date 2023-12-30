#include <iostream>
using namespace std;

void print_digit(int n)
{
    if(n==0) return;
    print_digit(n/10);
    cout<<n%10<<' ';
}

int main()
{
    int n;cin>>n;
    print_digit(n);
    return 0;
}
