#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// why?
// For Example1: 5  50 -> 550>505   => 5  > 50
// For Example2: 12 13 -> 1312>1213 => 13 > 12
bool comps(string a,string b)
{
    return (a+b)>(b+a);
}

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
    sort(vs.begin(),vs.end(),comps);
    string res_str="";
    for(string s:vs) res_str+=s;
    cout<<res_str;

    return 0;
}
