#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> vi;
    for(int i=0;i<n;i++)
    {
        int t;cin>>t;
        vi.push_back(t);
    }
    int m;cin>>m;
    for(int j=0;j<m;j++)
    {
        int i,v;cin>>i>>v;
        // NOTICE: the limit of insert function!!!
        // OVERFLOW is always trap!!!
        if(vi.begin()+i+1<=vi.end())
            vi.insert(vi.begin()+i+1,v);
        else vi.insert(vi.end(),v);
    }
    for(int i=0;i<vi.size();i++) cout<<vi[i]<<' ';

    return 0;
}
