#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> vi;

void print_b(int n)
{
    if(n==0) return;
    vi.push_back(n%2);
    print_b(n/2);
}

int main()
{
    int n;cin>>n;
    if(n==0)
    {
        cout<<0<<endl;
        cout<<0;
        return 0;
    }
    if(n>0) print_b(n);
    else print_b(abs(n));
    if(n>0)
    {
        for(auto i=vi.rbegin();i!=vi.rend();i++) cout<<*i;
        cout<<endl;
        for(auto i=vi.begin();i!=vi.end();i++) cout<<*i<<' ';
    }
    else
    {
        cout<<"-";
        for(auto i=vi.rbegin();i!=vi.rend();i++) cout<<*i;
        cout<<endl;
        cout<<"- ";
        for(auto i=vi.begin();i!=vi.end();i++) cout<<*i<<' ';
    }

    return 0;
}
