#include <iostream>
using namespace std;

int he(int n)
{
    if(n==1) return 1;
    return n+he(n-1);
}

int main()
{
    cout<<he(100);
    return 0;
}
