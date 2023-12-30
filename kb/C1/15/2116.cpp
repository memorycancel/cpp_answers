#include <iostream>
using namespace std;

int main()
{
	int n, i = 2;
	cin >> n;
	cout << n << '=';
	while(n > 1)
	{
		while(n % i == 0)
		{
			cout << i;
			n /= i;
			if(n > 1) cout << '*';
		}
		i++;
	}
	
	return 0;
}

