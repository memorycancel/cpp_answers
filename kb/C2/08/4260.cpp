#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    // less<int> by default!
    map<int,int> mii;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        if(mii[t]) mii[t]++;
        else mii[t]=1;
    }
    int candidates=0;
    int score_line;
    // since map is less<int> by default!
    // so need to iterate from end(rbegin) to start(rend)
    for(auto it=mii.rbegin();it!=mii.rend();it++)
    {
        candidates+=it->second;
        score_line=it->first;
        if(candidates>=m) break;
    }
    cout<<score_line<<' '<<candidates<<endl;
    for(auto it=mii.rbegin();it!=mii.rend();it++)
    {
        cout<<it->first<<endl;
        if(score_line==it->first) break;
    }
    
    return 0;
}
