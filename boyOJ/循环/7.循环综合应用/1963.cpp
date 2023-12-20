#include <iostream>
using namespace std;

int have_six(int i)
{
    int cnt=0;
    while(i>0)
    {
        if(i%10==6) return 1;
        i/=10;
    }
    return 0;
}

int main()
{
    int n;cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++) sum+=have_six(i);
    if(sum%2) cout<<"library";
    else cout<<"playground";

    return 0;
}
