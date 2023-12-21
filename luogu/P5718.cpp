#include <iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int min=2147483647;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        if(t<min) min=t;
    }
    cout<<min;

    return 0;
}
