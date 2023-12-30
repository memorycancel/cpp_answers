#include <iostream>
using namespace std;

int main()
{
    int maxn=-10001,x,y;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int t;
            cin>>t;
            if(t>maxn)
            {
                maxn=t;
                x=i;
                y=j;
            }
        }
    }
    cout<<maxn<<' '<<x<<' '<<y;
    
    return 0;
}
