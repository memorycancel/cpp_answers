#include <iostream>
using namespace std;

void door(int n)
{
    if(n==0) return;
    door(n-1);
    cout<<"�Ƽ��ô��˵�"<<n<<"����"<<endl;
}

void retdoor(int n)
{
    for(int i=n;i>=1;i--)
        cout<<"�Ƽ��÷��ص�"<<i<<"����"<<endl;
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
