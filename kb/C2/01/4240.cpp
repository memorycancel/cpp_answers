#include <iostream>
using namespace std;

// x µÄ n´Î·½
int mi(unsigned long long x, unsigned long long n)
{
	unsigned long long res = 1;
	for(unsigned long long i = 0; i < n; i++)
	{
		res *= x;	
	}
	return res;
} 

int main()
{
	int n, m;
	cin >> n >> m;
	
	for(unsigned long long x = 1; x <= m; x++)
		for(unsigned long long y = 1; y <= m; y++)
			for(unsigned long long z = 1; z <= m; z++)
				if(mi(x, n) + mi(y, n) == mi(z, n))
				{
					cout << "yes";
					return 0;
				}
	cout << "no";
	return 0;
}

