#include <iostream>
using namespace std;

int main()
{
	int n, res = 0;
	cin >> n;
	for(int i = 1; i < n; i++)
	{
		cout << i << '^' << 2 << '+';
		res += i * i;
	}
	cout << n << '^' << 2 << '=';
	res += n * n;
	cout << res;
	return 0;
}

