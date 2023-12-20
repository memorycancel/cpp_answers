#include <iostream>
#include <algorithm>
using namespace std;

string rev(int i)
{
    string s=to_string(i);
    reverse(s.begin(),s.end());
    string res="";
    bool flag=true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='0') flag=false;
        if(flag)
        {
            if(s[i]=='0') continue;
        }
        else
        {
            res+=s[i];
        }
    }
    return res;
}

bool is_hui(int i)
{
    return to_string(i)==rev(i);
}

int main()
{
    int n,res=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        if(is_hui(i))res++;
    cout<<res;

    return 0;
}
