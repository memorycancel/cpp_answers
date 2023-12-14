#include <iostream>
using namespace std;

int main()
{
    string m;
    string n;
    cin>>m>>n;
    string res="";

    for(int i=0;i<n.size();i++)
    {
        if(n[i]=='0') continue;
        if(n[i]<='9') res+=n[i];
        else res+=(n[i]-'A'+10);
        res+="*"+m+"^"+to_string(n.size()-i-1)+"+";
    }
    cout<<res.substr(0,res.size()-1);
    return 0;
}
