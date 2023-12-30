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
    int sum_row=0,sum_col=0;
    int x,y;
    cin>>x>>y;
    for(int i=0;i<m;i++)
    {
        sum_row+=a[x-1][i];
    }
    for(int i=0;i<n;i++)
    {
        sum_col+=a[i][y-1];
    }
    cout<<sum_row<<endl;
    cout<<sum_col<<endl;
    return 0;
}
