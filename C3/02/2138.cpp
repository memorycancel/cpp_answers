#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][m]={};
    for(int i=0;i<n;i++)
    {
        int x,y,c;
        cin>>x>>y>>c;
        a[x-1][y-1]=c;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    
    return 0;
}
