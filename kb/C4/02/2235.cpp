#include <iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int a[n]={};
    for(int i=0;i<n;i++) cin>>a[i];
    int target;cin>>target;
    // double point
    for(int j=n-1;j>=1;j--)
    {
        if(a[j]>=target) continue;
        for(int i=0;i<j;i++)
        {
            if(a[i]+a[j]==target)
            {
                cout<<i<<' '<<j;
                return 0;
            }
        }
    }

    return 0;
}
