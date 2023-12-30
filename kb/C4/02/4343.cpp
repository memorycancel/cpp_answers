#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;cin>>n;
    set<int> si;
    for(int i=0;i<n;i++)
    {
        int t;cin>>t;
        si.insert(t);
    }
    cout<<si.size()<<endl;
    for(auto e:si) cout<<e<<' ';

    return 0;
}
