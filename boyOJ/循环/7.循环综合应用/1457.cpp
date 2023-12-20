#include <iostream>
#include <vector>
using namespace std;

bool is_ok(int i,int k)
{
    vector<int> vi;
    while(i>0)
    {
        vi.push_back(i%10);
        i/=10;
    }
    int sub1=vi[4]*100+vi[3]*10+vi[2];
    int sub2=vi[3]*100+vi[2]*10+vi[1];
    int sub3=vi[2]*100+vi[1]*10+vi[0];
    return sub1%k==0&&sub2%k==0&&sub3%k==0;
}

int main()
{
    int k;cin>>k;
    vector<int> vi;
    for(int i=10000;i<=30000;i++)
        if(is_ok(i,k)) vi.push_back(i);
    if(vi.size()==0) cout<<"No";
    else for(int i=0;i<vi.size();i++) cout<<vi[i]<<endl;

    return 0;
}
