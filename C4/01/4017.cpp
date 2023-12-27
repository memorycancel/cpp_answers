#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int n;cin>>n;
    set<string> ss;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        ss.insert(s);
    }
    cout<<ss.size();

    return 0;
}
