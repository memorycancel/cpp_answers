#include <iostream>
using namespace std;

bool is_prime(int n)
{
	if(n<=1) return 0;
	for(int i=2;i*i<=n;i++)
		if(n%i==0) return 0;
	return 1;
}

int count_primes(int n)
{
	int i=1,count=0;
	while(n>1)
	{
		i++;
		while(n%i==0)
		{
			count++;
			n/=i;
		}
	}
	return count;
}

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(is_prime(count_primes(i)))
			cout<<i<<endl; 
	}
	
	return 0;	
}

