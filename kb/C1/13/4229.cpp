#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if(n == 1 || n == 2)
	{
		cout << n;
		return 0;
	}
	int pre = 1, pre_pre = 1;
	int fib = 0, sum = 2;
	for(int i = 3; i <= n; i++)
	{
		fib = pre + pre_pre;
		sum += fib;
		pre_pre = pre;
		pre = fib;
	}
	cout << sum;
	return 0;
}

