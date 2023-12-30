#include <iostream>
using namespace std;


int name_to_num(string s)
{
    int res=1;
    for(int i=0;i<s.size();i++)
        res*=s[i]-'A'+1;
    return res%47;
}

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(name_to_num(s1)==name_to_num(s2)) cout<<"GO";
    else cout<<"STAY";

    return 0;
}
