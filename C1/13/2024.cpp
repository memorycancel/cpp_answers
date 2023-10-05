#include <iostream>
using namespace std;

//45
//1134903170
//--------------------------------
//Process exited after 8.768 seconds with return value 0
// O(2^n)
int fib(int n)
{
	if(n == 1 || n == 2)
	{
		return 1;
	}
	return fib(n-1) + fib(n-2);
}

// O(n)
//45
//1134903170
//--------------------------------
//Process exited after 1.063 seconds with return value 0
int fib_pro(int n)
{
	if(n == 1 || n == 2)
	{
		return 1;
	}
	int pre = 1, pre_pre = 1;
	int ret = 0;
	for(int i = 3; i <= n; i++)
	{
		ret = pre + pre_pre;
		pre_pre = pre;
		pre = ret;
	}
	return ret;
}

int main()
{
	int n;
	cin >> n;
	cout << fib(n);
//	cout << fib_pro(n);
	return 0;
}

