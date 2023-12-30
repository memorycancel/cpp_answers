#include <iostream>
#define ull unsigned long long
using namespace std;

void print_r(int num)
{
    if(!num) return;
    cout<<num%10;
    print_r(num/10);
}

int main()
{
    ull num;
    cin>>num;
    print_r(num);

    return 0;
}
