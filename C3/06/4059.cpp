#include <iostream>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    char mines[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mines[i][j];
        }
    }
    int x,y;cin>>x>>y;
    if(mines[x-1][y-1]=='*') cout<<"no";
    else cout<<"yes";

    return 0;
}
