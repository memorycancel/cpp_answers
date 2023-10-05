#include <iostream>
using namespace std;

int funny_fib(int n)
{
	if(n == 1 || n == 2 || n == 3)
	{
		return n;	
	}	
	return funny_fib(n - 3) + funny_fib(n - 2) - funny_fib(n - 1);
} 

int main()
{
	int n;
	cin >> n;
	cout << funny_fib(n);
	return 0;
}

