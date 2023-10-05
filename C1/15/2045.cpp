#include <iostream>
using namespace std;

bool is_prime(int a)
{
	if(a == 1) return false;
	for(int i = 2; i * i <= a + 1; i++)
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
	// ÷ª”√≈–∂œµΩ n/2 
	for(int j = 2; j <= n / 2; j++)
	{
		if(is_prime(j) && is_prime(n - j)) count++;
	}
	cout << count;
	
	return 0;
}

