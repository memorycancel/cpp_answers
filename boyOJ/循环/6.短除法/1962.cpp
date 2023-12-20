#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> vi;
    while(n>0)
    {
        vi.push_back(n%10);
        n/=10;
    }
    cout<<vi.size()<<endl;
    for(auto i=vi.rbegin();i!=vi.rend();i++) cout<<*i<<' ';
    cout<<endl;
    for(int i=0;i<vi.size();i++) cout<<vi[i];

    return 0;
}
