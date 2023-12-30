#include <iostream>
using namespace std;

int main()
{
	int n,q;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>q;
	int b[q][3]={};
	for(int i=0;i<q;i++)
	{
		cin>>b[i][0];
		if(b[i][0]==1) cin>>b[i][1]>>b[i][2];
		else cin>>b[i][1];
	}

	for(int i=0;i<q;i++)
	{
		if(b[i][0]==1) a[b[i][1]]=b[i][2];
		else cout<<a[b[i][1]]<<endl;
	}
	
	return 0;
}

