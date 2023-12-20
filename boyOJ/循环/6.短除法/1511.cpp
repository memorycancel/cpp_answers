#include <iostream>
using namespace std;

bool is_ok(int i)
{
    int sum=0;
    while(i>0)
    {
        sum+=i%10;
        i/=10;
    }
    return sum==13;
}

int main()
{
    int n,res=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        if(is_ok(i))res++;
    cout<<res;

    return 0;
}
