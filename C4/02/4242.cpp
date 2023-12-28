#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

int main()
{
    map<int,int> umii;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;cin>>t;
        if(umii.count(t)) umii[t]++;
        else umii[t]=1;
    }
    set<int> si;
    int maxn=-1;
    for(auto kv:umii)
    {
        si.insert(kv.second);
        if(kv.second>maxn) maxn=kv.second;
    }
    if(si.size()<=1&&n>1)
    {
        cout<<"na";
        return 0;
    }
    for(auto kv:umii)
    {
        if(kv.second==maxn) cout<<kv.first<<' ';
    }

    return 0;
}
