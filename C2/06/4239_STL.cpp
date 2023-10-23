#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    int n;
    cin>>n;
    // map is sorted map defaultly!
    map<int, int> mm;
    set<int> si;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        if(mm[t])mm[t]++;
        else mm[t]=1;
    }

    for (auto kv: mm)
    {
        si.insert(kv.second);
    }
    if(si.size()==1)
    {
        cout<<"na";
        return 0;
    }
    // the SET is sorted defaultly
    // so the rbegin(reverse begin) is the MAX
    int maxn=*si.rbegin();
    for (auto kv: mm) if(kv.second==maxn) cout<<kv.first<<' ';
        
    return 0;
}
