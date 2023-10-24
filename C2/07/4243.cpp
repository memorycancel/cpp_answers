#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        int k=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[k]) k=j;
        }
        swap(a[i],a[k]);
    }
    if(n%2) cout<<a[n/2];
    else cout<<(a[n/2]+a[n/2-1])/2.0;
    return 0;
}
