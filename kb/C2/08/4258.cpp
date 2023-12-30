#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(m)
    {
        set<int,greater<int>> si;
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            si.insert(t);
        }
        for(auto i:si)
        {
            cout<<i<<' ';
        }
    }
    else
    {
        set<int> si;
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            si.insert(t);
        }
        for(auto i:si)
        {
            cout<<i<<' ';
        }
    }

    return 0;
}
