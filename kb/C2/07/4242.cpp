#include <iostream>
#include <map>
#include <set>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    if(n==1)
    {
        ll t;
        cin>>t;
        cout<<t;
        return 0;
    }
    map<ll,ll> mm;
    set<ll>ss;
    for(ll i=0;i<n;i++)
    {
        ll t;
        cin>>t;
        if(mm[t]) mm[t]++;
        else mm[t]=1;
    }
    for(auto kv:mm) ss.insert(kv.second);
    if(ss.size()==1)
    {
        cout<<"na";
        return 0;
    }
    ll maxn=-1;
    for(auto i:ss) if(i>maxn) maxn=i;
    for(auto kv:mm)  if(kv.second==maxn) cout<<kv.first<<' ';
    
    return 0;
}
