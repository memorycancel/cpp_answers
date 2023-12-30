#include <iostream>
using namespace std;

int main()
{
    // Input
    int n,m;cin>>n>>m;
    char mines[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mines[i][j];
        }
    }

    // Process
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mines[i][j]=='*') continue;
            int count=0;
            if(j+1<m&&mines[i][j+1]=='*') count++;
            if(j-1>=0&&mines[i][j-1]=='*') count++;
            if(i+1<n&&mines[i+1][j]=='*') count++;
            if(i-1>=0&&mines[i-1][j]=='*') count++;
            if(i+1<n&&j+1<m&&mines[i+1][j+1]=='*') count++;
            if(i-1>=0&&j-1>=0&&mines[i-1][j-1]=='*') count++;
            if(i-1>=0&&j+1<m&&mines[i-1][j+1]=='*') count++;
            if(i+1<n&&j-1>=0&&mines[i+1][j-1]=='*') count++;

            mines[i][j]=char(count+'0');
        }
    }

    // Output
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<mines[i][j];
        }
        cout<<endl;
    }

    return 0;
}
