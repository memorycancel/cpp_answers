#include <iostream>
#include <stack> 
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	stack<int> a;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a.push(t);
	}
	while(a.size())
	{
		cout<<a.top()-10<<' ';
		a.pop();
	}
	
	return 0;
}

