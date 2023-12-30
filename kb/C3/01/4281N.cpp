#include <iostream>
using namespace std;

int main()
{
    int a1,b1,a2,b2;
    cin>>a1>>b1>>a2>>b2;
    int c1[a1][b1]={0};
    int c2[a2][b2]={0};
    for(int i=0;i<a1;i++)
    {
        for(int j=0;j<b1;j++)
        {
            cin>>c1[i][j];
        }
    }
    for(int i=0;i<a2;i++)
    {
        for(int j=0;j<b2;j++)
        {
            cin>>c2[i][j];
        }
    }
    int res[a1][b2]={0};
    for(int i=0;i<a1;i++) //0 1
    {
        for(int j=0;j<b2;j++) // 0 1
        {
            
        }
    }
    for(int i=0;i<a1;i++)
    {
        for(int j=0;j<b2;j++)
        {
            cout<<res[i][j]<<' ';
        }
        cout<<endl;
    }
    
    return 0;
}
