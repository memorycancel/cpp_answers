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
        int hang[3];
        for(int j=0;j<3;j++)
        {
            hang[j]=a[i][j];
        }
        sort(hang,hang+3,greater<int>());
        for(int j=0;j<3;j++)
        {
            a[i][j]=hang[j];
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
