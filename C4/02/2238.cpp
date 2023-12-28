#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int v,k;cin>>v>>k;
    vector<int>chaged;
    for(int i=0;i<n;i++)
    {
        if(a[i]==v&&k>0)
        {
            k--;
            continue;
        }
        chaged.push_back(a[i]);
    }
    int m;cin>>m;
    cout<<chaged.size()<<endl;
    for(int i=0;i<m;i++)
    {
        int t;cin>>t;
        cout<<chaged[t]<<endl;
    }

    return 0;
}
