#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]>='0'&&s[i]<='9')||
            (s[i]>='a'&&s[i]<='z')||
            (s[i]>='A'&&s[i]<='Z'))
            count++;
    }
    cout<<count;
    return 0;
}
