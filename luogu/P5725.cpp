#include <iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=i*n+1;j<=(i+1)*n;j++)
        {
            if(j<10) cout<<0<<j;
            else cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--) cout<<"  ";
        int cnt=0;
        for(int j=0;j<i;j++) cnt+=j;
        for(int j=cnt+1;j<=cnt+i;j++)
        {
            if(j<10) cout<<0<<j;
            else cout<<j;
        }
        cout<<endl;
    }

    return 0;
}
