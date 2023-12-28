#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;cin>>n;
    int a[n]={};
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0,r=0;
    cin>>l>>r;
    reverse(a+l,a+r);
    int m;cin>>m;
    for(int i=0;i<m;i++)
    {
        int t;cin>>t;
        cout<<a[t]<<endl;
    }

    return 0;
}
