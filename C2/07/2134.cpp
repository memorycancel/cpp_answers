#include <iostream>
using namespace std;

int main()
{
    int a[5];
    for(int i=0;i<5;i++) cin>>a[i];
    for(int i=0;i<4;i++)
    {
        int k=i;
        for(int j=i+1;j<5;j++)
        {
            if(a[j]<a[k]) k=j;
        }
        swap(a[i],a[k]);
    }
    for(int i=0;i<5;i++) cout<<a[i]<<' ';
    return 0;
}
