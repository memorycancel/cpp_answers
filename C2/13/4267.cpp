#include <iostream>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int longer=max(s1.size(),s2.size());
    for(int i=0;i<longer;i++)
    {
        char c1=s1[i];
        char c2=s2[i];
        if(c1>='A'&&c1<='Z') c1+=32;
        if(c2>='A'&&c2<='Z') c2+=32;
        if(c1==c2) continue;
        if(c1>c2)
        {
            cout<<'>';
            return 0;
        }
        if(c1<c2)
        {
            cout<<'<';
            return 0;
        }
    }
    cout<<'=';
    return 0;
}
