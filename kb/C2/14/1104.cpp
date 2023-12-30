#include <iostream>
#include <map>
using namespace std;

bool is_prime(int n)
{
    if(n<2) return false;
    for(int i=2;i*i<n+1;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    string word;
    cin>>word;
    map<char,int> mci;
    for(int i=0;i<word.size();i++)
    {
        if(mci[word[i]]) mci[word[i]]++;
        else mci[word[i]]=1;
    }
    int maxn=-2147483648;
    int minn=2147483647;
    for(auto kv: mci)
    {
        if(kv.second>maxn) maxn=kv.second;
        if(kv.second<minn) minn=kv.second;
    }
    if(is_prime(maxn-minn))
    {
        cout<<"Lucky Word"<<endl;
        cout<<maxn-minn<<endl;
    }
    else
    {
        cout<<"No Answer"<<endl;
        cout<<0<<endl;
    }

    return 0;
}
