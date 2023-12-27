#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char,int> mci;
    for(int i=0;i<10;i++) mci[char(i+'0')]=0;
    string s;cin>>s;
    for(int i=0;i<s.size();i++) mci[s[i]]++;
    for(auto kv: mci) cout<<kv.second<<' ';

    return 0;
}
