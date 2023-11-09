#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<string> vs;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string t;
		cin>>t;
		vs.push_back(t);
	}
	sort(vs.begin(),vs.end());
	for(int i=0;i<n;i++) cout<<vs[i]<<endl;
	
	return 0;
}

