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

// put the middle result in [mem]ory
// O(n)
// 1982175104
//--------------------------------
//Process exited after 0.1346 seconds with return value 0
int fib_mem(int n, vector<int> &mem)
{
	if(n == 1 || n == 2) return 1;
	if(mem[n] != -1) return mem[n];
	int res = fib_mem(n - 1, mem) + fib_mem(n - 2, mem);
	mem[n] = res;
	return res;
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
//	cout << fib_mem(n);
	return 0;
}

