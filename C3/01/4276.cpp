#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int t;
            cin>>t;
            res+=t;
        }
    }
    cout<<res;

    return 0;
}
