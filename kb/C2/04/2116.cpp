#include <iostream>
using namespace std;

int main()
{
	int n,i=1;
	cin>>n;
	cout<<n<<'=';
	while(n>1)
	{
		i++;
		while(n%i==0)
		{
			cout<<i;
			n/=i;
			if(n>1) cout<<'*';
		}
	}

	return 0;	
}

