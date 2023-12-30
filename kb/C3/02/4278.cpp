#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        int lie[3];
        for(int j=0;j<3;j++)
        {
            lie[j]=a[j][i];
        }
        sort(lie,lie+3,greater<int>());
        for(int j=0;j<3;j++)
        {
            a[j][i]=lie[j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    
    return 0;
}
