#include <iostream>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[i]) continue;
        if(s1[i]>s2[i])
        {
            cout<<s2<<endl;
            cout<<s1<<endl;
            return 0;
        }
        else
        {
            cout<<s1<<endl;
            cout<<s2<<endl;
            return 0;
        }
    }

    return 0;
}
