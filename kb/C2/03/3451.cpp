#include <iostream>
using namespace std;


//评测状态
//时间超限
//50
//语言:  C++
//用时: 1201 ms
//内存: 2220 kb
//代码长度: 357
//
//in: 40
//out: 940313

int main()
{
	// avoid overflow to AC 
	unsigned long long n, sum = 0;
	cin >> n;
	for(unsigned long long i = 1; i <= n; i++)
	{
		unsigned long long ji = 1;
		for(unsigned long long j = 1; j <= i; j++)
		{
			ji *= j;
		}
		sum += ji % 1000000;
	}
	cout << sum % 1000000 << endl;
	
	return 0;
}

