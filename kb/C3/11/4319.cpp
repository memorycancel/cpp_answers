#include <iostream>
using namespace std;

void door(int n)
{
    if(n==0) return;
    door(n-1);
    cout<<"科技兔打开了第"<<n<<"扇门"<<endl;
}

void retdoor(int n)
{
    for(int i=n;i>=1;i--)
        cout<<"科技兔返回第"<<i<<"扇门"<<endl;
}

int main()
{
    int n;cin>>n;
    cout<<"Start"<<endl;
    door(n);
    retdoor(n-1);
    cout<<"Win"<<endl;
    return 0;
}
