#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<string> vs;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        vs.push_back(s);
    }
    sort(vs.rbegin(),vs.rend());
    string res_str="";
    for(string s:vs) res_str+=s;
    cout<<res_str;

    return 0;
}
