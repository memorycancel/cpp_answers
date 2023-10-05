#include <iostream>
using namespace std;

bool is_prime(int n)
{
	for(int i = 2; i * i < n + 1; i++)
	{
		if(n % i == 0) return false;	
	}
	return true;
} 

int main()
{
	int n, count = 1, index = 3;
	cin >> n;
	while(count < n)
	{
		if(is_prime(index))
		{
			count++;
		}
		index++;
	}
	cout << index - 1;
	
	return 0;
}

