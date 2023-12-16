#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int sum1 = 0, sum2 = 0;
	for(int i = 1; i <= n; i++)
	{
		if(i % k == 0)
			sum1 += i;
		else
			sum2 += i;
	}

	cout << sum1 << " " << sum2;

	return 0;
}
