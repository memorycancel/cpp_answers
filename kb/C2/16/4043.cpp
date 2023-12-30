#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int start;
    char c;
    cin>>start>>c;
    cin.ignore(); // this line is very important
    string s;
    getline(cin,s);
    vector<int> poses;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==c) poses.push_back(i);
    }
    string res="";
    for(int i=poses.front();i<=poses.back();i++)
    {
        if(s[i]!=' ') res+=s[i];
    }
    cout<<res;

    return 0;
}
