#include <iostream>
using namespace std;

int main()
{
    int start;
    char c;
    cin>>start>>c;
    cin.ignore(); // this line is very important
    string s;
    getline(cin,s);
    string res="";
    for(int i=start+1;i<s.size();i++)
        if(s[i]!=' ') res+=s[i];
    cout<<res;

    return 0;
}
