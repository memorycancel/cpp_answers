#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	int n,s,r;
	cin>>n>>s>>r;
	
	if(r)
	{
		if(s)
		{
			set<int, less<int>>si;
			for(int i=0;i<n;i++)
			{
				int t;
				cin>>t;
				si.insert(t);
			}
			for(auto i:si) cout<<i<<' ';
			cout<<endl;
			if(*si.end()-*si.begin()>70000)
				cout<<"Xiaoheng is naughty";
			else
				cout<<"Xiaoheng is clever";
		}
		else
		{
			set<int, greater<int>>si;
			for(int i=0;i<n;i++)
			{
				int t;
				cin>>t;
				si.insert(t);
			}
			for(auto i:si) cout<<i<<' ';
			cout<<endl;
			if(*si.rend()-*si.rbegin()>70000)
				cout<<"Xiaoheng is naughty";
			else
				cout<<"Xiaoheng is clever";
		}
	}
	else
	{
		vector<int> vi;
		for(int i=0;i<n;i++)
		{
			int t;
			cin>>t;
			vi.push_back(t);
		}
		if(s) sort(vi.begin(),vi.end());
		else sort(vi.rbegin(),vi.rend());
		for(auto i:vi) cout<<i<<' ';
		cout<<endl;
		if(*vi.end()-*vi.begin()>70000)
			cout<<"Xiaoheng is naughty";
		else
			cout<<"Xiaoheng is clever";
	}
	

    return 0;
}
