#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n,res=0;cin>>n;
    set<int> si;
    int a[n]={};
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++)
            {
                if(i==j||i==k||j==k) continue;
                if(a[i]==a[j]+a[k]) si.insert(a[i]);
                if(a[k]==a[i]+a[j]) si.insert(a[k]);
                if(a[j]==a[i]+a[k]) si.insert(a[j]);
            }
    cout<<si.size();

    return 0;
}
