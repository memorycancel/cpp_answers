#include <iostream>
using namespace std;

int main()
{
    int n,maxn=-2147483648;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        if(t>maxn) maxn=t;
    }
    cout<<maxn;

    return 0;
}
