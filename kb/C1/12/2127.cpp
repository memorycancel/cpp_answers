#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vi;
    for(int i=0;i<32;i++)
    {
        if(n==0) break;
        vi.push_back(n%2);
        n/=2;
    }
    for(int i=vi.size()-1;i>=0;i--) cout<<vi[i];
    return 0;
}
