#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s=="0")
    {
        cout<<"0";
        return 0;
    }
    if(s[0]=='-')
    {
        s.erase(s.find_last_not_of('0')+1,s.size()-1);
        reverse(s.begin()+1, s.end());
    }
    else
    {
        reverse(s.begin(), s.end());
        s.erase(0,s.find_first_not_of('0'));
    }
    cout<<s;

    return 0;
}
