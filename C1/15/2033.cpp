#include <iostream>
using namespace std;

bool is_prime(int a)
{
	if(a == 1) return false;
	for(int i=2; i*i<=a; i++)
	{
		if(a % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n, count = 0;
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		if(is_prime(i))
		{
			count++;
		}
	}
	cout << count;
	
	return 0;
}

