#include <iostream>
#include <map>
#include <vector>
using namespace std;

// :-1 KONJAC %50 points!!!!
int main()
{
    int n;cin>>n;
    int a[n]={};
    for(int i=0;i<n;i++) cin>>a[i];
    int target;cin>>target;
    map<vector<int>,vector<int>> mvii;
    for(int j=n-1;j>=1;j--)
    {
        if(a[j]>=target) continue;
        for(int i=0;i<j;i++)
        {
            vector<int> k;
            vector<int> v;
            if(a[i]+a[j]==target)
            {
                k.push_back(a[i]);
                k.push_back(a[j]);
                v.push_back(i);
                v.push_back(j);
                if(mvii.count(k)!=0)
                {
                    if(i+j<mvii[k][0]+mvii[k][1]) mvii[k]=v;
                }
                else mvii[k]=v;
            }
        }
    }
    cout<<mvii.size()<<endl;
    for(auto kv:mvii)
        cout<<kv.second[0]<<' '<<kv.second[1]<<endl;

    return 0;
}
