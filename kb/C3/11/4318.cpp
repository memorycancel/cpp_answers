#include <iostream>
using namespace std;

void door(int n)
{
    if(n==0) return;
    door(n-1);
    cout<<"科技兔打开了第"<<n<<"扇门"<<endl;
}

int main()
{
    int n;cin>>n;
    door(n);
    return 0;
}
