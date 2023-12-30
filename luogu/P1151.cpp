#include <iostream>
using namespace std;

int main()
{
    int k;cin>>k;
    int cnt=0;
    for(int i=10000;i<=30000;i++)
    {
        int a1=i/10000%10;
        int a2=i/1000%10;
        int a3=i/100%10;
        int a4=i/10%10;
        int a5=i/1%10;
        int sub1=a1*100+a2*10+a3;
        int sub2=a2*100+a3*10+a4;
        int sub3=a3*100+a4*10+a5;
        if(sub1%k==0&&sub2%k==0&&sub3%k==0)
        {
            cout<<i<<endl;
            cnt++;
        }
    }
    if(cnt==0) cout<<"No";

    return 0;
}
