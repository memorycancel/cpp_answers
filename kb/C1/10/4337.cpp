#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;cin>>n;
    long a[n]={};
    for(int i=0;i<n;i++) cin>>a[i];
    long maxn=-2147483649;
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxn) maxn=a[i];
    }
    long second_maxn=-2147483649;
    for(int i=0;i<n;i++)
    {
        if(a[i]>second_maxn&&a[i]<maxn) second_maxn=a[i];
    }
    if(second_maxn!=-2147483649) cout<<second_maxn;
    else cout<<"nil";

    return 0;
}
