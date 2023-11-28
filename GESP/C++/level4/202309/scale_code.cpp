#include <iostream>
#include <vector>
using namespace std;

string to_b(long long n)
{
    string res="";
    while(n)
    {
        res.insert(0,to_string(n%2));
        n/=2;
    }
    return res;
}

vector<string> to_arrs(string b)
{
    vector<string> res;
    for(int i=b.size()-7;i>=0;i-=7)
    {
        string s="";
        res.push_back(b.substr(i,7));
    }
    int left_len=b.size()-res.size()*7;
    string s="";
    for(int i=0;i<left_len+1;i++)
    {
        s+="0";
    }
    s+=b.substr(0,left_len);
    res.push_back(s);
    return res;
}

int main()
{
    vector<string> vs=to_arrs(to_b(926));
    for(int i=0;i<vs.size();i++)
    {
        cout<<vs[i]<<' ';
    }

    return 0;
}
