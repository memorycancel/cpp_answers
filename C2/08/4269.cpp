#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> ji;
	vector<int> ou;
	vector<int> res;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		if(i%2==0) ou.push_back(t);
		else ji.push_back(t);
	}
	sort(ji.rbegin(),ji.rend());
	sort(ou.begin(),ou.end());
	
	for(int i=0;i<n/2;i++)
	{
		res.push_back(ou[i]);
		res.push_back(ji[i]);
	}
	// 'ji' is one more than 'ou'
	if(n%2) res.push_back(ji[n/2+1]);
	
	for(auto i:res) cout<<i<<' ';

    return 0;
}
