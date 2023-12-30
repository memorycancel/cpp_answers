#include <iostream>
#include <vector>
using namespace std;

vector<int> vi;
void print_b(int n)
{
    if(n==0) return;
    cout<<n%2<<' ';
    vi.push_back(n%2);
    print_b(n/2);
}

int main()
{
    int n;cin>>n;
    print_b(n);
    cout<<endl;
    for(int i=vi.size()-1;i>=0;i--)
    {
        cout<<vi[i]<<' ';
    }
    return 0;
}
