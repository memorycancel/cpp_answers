#include <iostream>
using namespace std;

int main()
{
	int n,res=0;
	cin>>n;
	while(n!=1)
	{
		res++;
		if(n%2) n=3*n+1;
		else n/=2;
	}
	cout<<res;

	return 0;
}

