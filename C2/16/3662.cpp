#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    map<string,int> ms;
    for(int i=0;i<n;i++)
    {
    	for(int j=1;j<n+1-i;j++)
    	{
    		//all substrs
    		string subs=s.substr(i,j);
    		if(ms[subs]) ms[subs]++;
			else ms[subs]=1;
		}
	}
    // for(auto kv:ms) cout<<kv.first<<' '<<kv.second<<endl;
    // build the book for statistic the map length->count
	int book[n+1]={};
    for(auto kv:ms)
    {
    	if(kv.second>book[kv.first.size()])
    		book[kv.first.size()]=kv.second;
	}
	for(int i=0;i<=n;i++)
	{
		if(book[i]==1)
		{
			cout<<i;
			return 0;
		}
	}
    
	return 0;
}
