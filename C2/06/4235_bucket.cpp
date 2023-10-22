#include <iostream>
using namespace std;

int main()
{
	// bucket sort
	int a[11]={};
	for(int i=0;i<5;i++)
	{
		int t;
		cin>>t;
		a[t]=1;
	}
	for(int i=0;i<11;i++)
		if(a[i]==1) cout<<i<<' ';

	return 0;
}

