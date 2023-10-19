#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n; 
	int res=0,gou;
	int apples[n];
	for(int i=0;i<n;i++)
		cin>>apples[i];
	cin>>gou;
	gou+=30;
	for(int i=0;i<n;i++)
		if(apples[i]<=gou) res++;
	cout<<res;
		
	return 0;
}

