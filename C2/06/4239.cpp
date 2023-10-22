#include <iostream>
using namespace std;

int main()
{
	int n;
	int bucket[2002]={};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		if(t<0) bucket[1000-t]++;
		else bucket[t]++;
	}
	
	
	if(count<=1)
	{
		cout<<"na";
		return 0;
	}
	for(int i=1000;i<2002;i++)
		if(bucket[i]==max_kind) cout<<1000-i<<' ';
	for(int i=0;i<1000;i++)
		if(bucket[i]==max_kind) cout<<i<<' ';
	
    return 0;
}

