#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;cin>>n;
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    vector<int> vi;
    while(n>0)
    {
        vi.push_back(n%10);
        n/=10;
    }
    int flag=true;
    for(int i=0;i<vi.size();i++)
    {
        if(vi[i]) flag=false;
        if(flag)
        {
            if(vi[i]==0) continue;
        }
        else
        {
            cout<<vi[i];
        }
    }

    return 0;
}
