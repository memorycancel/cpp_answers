#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<string> vs;
	for(int i=0;i<3;i++)
	{
		string t;
		cin>>t;
		vs.push_back(t); 
	}
	sort(vs.begin(),vs.end());
	string res="";
	for(int i=0;i<3;i++) res+=vs[i]+" ";
	cout<<res;
	
	return 0;
}

