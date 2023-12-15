#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int l,m; cin>>l>>m;
    vector<int> lu(l+1,1);
    for(int i=0;i<m;i++)
    {
        int a,b; cin>>a>>b;
        for(int j=a;j<=b;j++) lu[j]=0;
    }
    cout<<count(lu.begin(),lu.end(),1);

    return 0;
}
