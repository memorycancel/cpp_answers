#include <iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int cnt=1,ji=0,ou=0;
    for(int i=n;i!=0;i/=10)
    {
        if(cnt%2) ji+=i%10;
        else ou+=i%10;
        cnt++;
    }
    if((ji-ou)%11) cout<<"不能整除"<<endl<<ji-ou;
    else cout<<"可以整除"<<endl<<(ji-ou)/11;

    return 0;
}
