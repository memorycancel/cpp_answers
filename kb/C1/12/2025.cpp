#include <iostream>
using namespace std;

int main()
{
	int m, n, sum = 0;
	cin >> m >> n;
	for(int i=m; i<=n; i++)
	{
		sum += i;
	}
	cout << sum;
	return 0;
}
