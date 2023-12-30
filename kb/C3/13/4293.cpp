#include <iostream>
using namespace std;

int jiao(int n)
{
    if(n==1) return 1;
    return jiao(n-1)+1;
}

int main()
{
    cout<<jiao(100);
    return 0;
}
