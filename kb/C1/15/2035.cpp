#include <iostream>
#include <math.h>
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

// 暴力法 超时 
int violent_max_prime(int n)
{
	int max = -1;
	for(int i=sqrt(n); i<=n; i++)
	{
		if(n%i == 0 && is_prime(i) && i>max)
		{
			max = i;
		}
	}
	return max;
}

int biggest_prime_factor(int n)
{
	int i = 1;
	while(n > 1)
	{
		i++;
		if(is_prime(n))
		{
			return n;	
		}
		// 如果一个数是另外一个数的倍数，那么他们的最大质因数一定相同 
		while(n % i == 0)
		{
			n /= i;
		}
	}	
	return i;
} 

int main()
{
	int n;
	cin >> n;
	
	cout << biggest_prime_factor(n);
	
	return 0;
}

