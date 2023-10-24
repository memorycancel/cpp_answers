#include <iostream>
using namespace std;

int main()
{
    int n,op;
    cin>>n>>op;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        int k=i;
        for(int j=i+1;j<n;j++)
        {
            if(op==1&&a[k]>a[j]) k=j;
            if(op==-1&&a[k]<a[j]) k=j;
        }
        swap(a[i],a[k]);
    }
    for(int i=0;i<n;i++) cout<<a[i]<<' ';
    return 0;
}
