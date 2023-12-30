#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n;
    int num=0;
    int v[19999] = {};
    cin >> n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            for(int k=1;k<=n;k++)
                if(k!=i&&k!=j&&i!=j&&a[i]+a[j]==a[k]&&v[k]==0)
                {
                   num++;
                   v[k]=1;
                }
    cout << num;
    return 0;
}
