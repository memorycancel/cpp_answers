#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    int x;cin>>x;
    for(int i=0;i<x;i++)
    {
        int op,b1,b2;
        cin>>op>>b1>>b2;
        if(op==0)
        {
            for(int c=0;c<m;c++)
            {
                swap(a[b1-1][c],a[b2-1][c]);
            }
        }
        else
        {
            for(int c=0;c<n;c++)
            {
                swap(a[c][b1-1],a[c][b2-1]);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
