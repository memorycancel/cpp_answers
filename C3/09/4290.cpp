#include <iostream>
using namespace std;

void A()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
}

void B()
{
    for(int i=0;i<9;i++) cout<<"*********"<<endl;
}

void C()
{
    for(int i=0;i<9;i++)
    {
        for(int j=9-i-1;j>=0;j--)
        {
            cout<<' ';
        }
        cout<<"*********"<<endl;
    }
}

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A') A();
        if(s[i]=='B') B();
        if(s[i]=='C') C();
    }
    return 0;
}
