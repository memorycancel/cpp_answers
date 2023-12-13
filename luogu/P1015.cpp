#include <iostream>
#include <algorithm>
using namespace std;

string n_add(int n,string a,string b)
{
    // make sure a longer than b
    if(a.size()<b.size()) swap(a,b);
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int c[a.size()+1]={};
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<='9') c[i]+=(a[i]-'0');
        else c[i]+=(a[i]-'A'+10);
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]<='9') c[i]+=(b[i]-'0');
        else c[i]+=(b[i]-'A'+10);
    }
    for(int i=0;i<a.size();i++)
    {
        if(c[i]>=n)
        {
            c[i+1]+=c[i]/n;
            c[i]%=n;
        }
    }
    string res="";
    for(int i=a.size();i>=0;i--)
    {
        if(c[i]<=9) res+=char(c[i]+'0');
        else res+=char((c[i]-10)+'A');
    }
    if(res[0]=='0') return res.substr(1,a.size());
    else return res;
}

bool is_hui(string n)
{
    string n_cp=n;
    reverse(n_cp.begin(),n_cp.end());
    return n==n_cp;
}

int main()
{
    int n;cin>>n;
    string m;cin>>m;
    for(int i=1;i<=30;i++)
    {
        string m_cp=m;
        reverse(m_cp.begin(),m_cp.end());
        m=n_add(n,m,m_cp);
        if(is_hui(m))
        {
            cout<<"STEP="<<i;
            return 0;
        }
    }
    cout<<"Impossible!";

    return 0;
}
