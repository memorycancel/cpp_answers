#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	vector<int> vi;
	for(int i=0;i<m;i++)
	{
		int t;
		cin>>t;
		vi.push_back(t);
	}
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		vi.push_back(t);
	}
	sort(vi.rbegin(),vi.rend());
	for(auto i:vi) cout<<i<<' ';

    return 0;
}
