#include <iostream>
using namespace std;

int cnt_one(int i)
{
    int cnt=0;
    while(i>0)
    {
        if(i%10==1) cnt++;
        i/=10;
    }
    return cnt;
}

int main()
{
    int n,res=0;cin>>n;
    for(int i=1;i<=n;i++) res+=cnt_one(i);
    cout<<res;

    return 0;
}
