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
	for(int i = 1; i <= 1000; i++)
	{
		if(i > 100 && i <= 300) continue;
		if(i > 400 && i <= 600) continue;
		if(i > 700 && i <= 900) continue;
		if(is_prime(i)) cout << i << endl;
	}
	
	return 0;
}

