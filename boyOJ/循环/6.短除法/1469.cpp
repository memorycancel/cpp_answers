#include <iostream>
using namespace std;

int count(int i,int x)
{
    int res=0;
    while(i>0)
    {
        if(i%10==x)res++;
        i/=10;
    }
    return res;
}

int main()
{
    int n,x,res=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)res+=count(i,x);
    cout<<res;

    return 0;
}
