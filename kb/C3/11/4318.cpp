#include <iostream>
using namespace std;

void door(int n)
{
    if(n==0) return;
    door(n-1);
    cout<<"�Ƽ��ô��˵�"<<n<<"����"<<endl;
}

int main()
{
    int n;cin>>n;
    door(n);
    return 0;
}
