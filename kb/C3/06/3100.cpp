#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n;cin>>n;
    ll a[n+1][n+1]={};
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(j==0||j==i-1)
            {
                a[i][j]=1;
                cout<<1<<' ';
            }
            else
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
                cout<<a[i][j]<<' ';
            }
        }
        cout<<endl;
    }
    
    return 0;
}
