#include <iostream>
using namespace std;

bool is_prime(int n)
{
	if(n == 1) return false;
	for(int i = 2; i * i <= n + 1; i++)
	{
		if(n % i == 0) return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	for(int i = n; i >= 2; i--)
	{
		if(is_prime(i)) cout << i << endl;
	}
	return 0;
}

