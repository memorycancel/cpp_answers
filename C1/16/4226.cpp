#include <iostream>
using namespace std;

int main()
{
	long long unsigned n, i = 2;
	cin >> n;
	
	while(i * i <= n + 1)
	{
		// ������������ե�ɵĹ��� 
		while(n % i == 0)
		{
			n /= i;
		}
		i++;
	}
	cout << n;
	
	return 0;
}

