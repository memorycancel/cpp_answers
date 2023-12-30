#include <iostream>
using namespace std;

int eat_apple(int n)
{
    if(n<3) return n;
    return eat_apple(n-1)+eat_apple(n-2);
}

int main()
{
    int n;cin>>n;
    cout<<eat_apple(n);

    return 0;
}
