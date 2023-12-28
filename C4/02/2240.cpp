#include <iostream>
using namespace std;

int main()
{
    int m,n;cin>>m>>n;
    int a[m]={},b[n]={};
    for(int i=0;i<m;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int j=0;
    int res[m]={};
    for(int i=0;i<m;i++)
    {
        if(a[i]==b[j])
        {
            res[j]=i;
            j++;
        }
        if(j==n)
        {
            cout<<"yes"<<endl;
            for(int k=0;k<n;k++) cout<<res[k]<<' ';
            return 0;
        }
    }
    cout<<"no"<<endl;

    return 0;
}
