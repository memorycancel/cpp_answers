#include <iostream>
#include <vector>
using namespace std;

bool is_ok(int i)
{
    vector<int> v1,v2;
    int ii=i*i;
    while(i>0)
    {
        v1.push_back(i%10);
        i/=10;
    }
    while(ii>0)
    {
        v2.push_back(ii%10);
        ii/=10;
    }
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]!=v2[i]) return false;
    }
    return true;
}

int main()
{
    int n,cnt=0;cin>>n;
    for(int i=1;i<=n;i++)
        if(is_ok(i)) cnt++;
    cout<<cnt;

    return 0;
}
