#include <iostream>
using namespace std;

int main()
{
    int x,y;cin>>x>>y;
    int greater=max(x,y);
    int less=min(x,y);
    for(int i=less;i>0;i--)
    {
        if(less%i==0&&greater%i==0)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}
