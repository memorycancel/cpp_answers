#include <iostream>
#define ll long long
using namespace std;

int main()
{
	// is a number prime
	ll n;
	cin>>n;
	if(n<2) cout<<n<<"��������";
	else
	{
		for(int i=2;i*i<n+1;i++)
		{
			if(n%i==0)
			{
				cout<<n<<"��������";
				return 0; 
			}
		}
		cout<<n<<"������";
	}
	return 0;
}

