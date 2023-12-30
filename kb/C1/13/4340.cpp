#include <iostream>
#include <vector> 
using namespace std;

// vector 方法的使用 
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> res;
	if(n == 1)
	{
		res.push_back(1);
	}
	if(n == 2)
	{
		res.push_back(1);
		res.push_back(1);
	}
	res = vector<int>(2, 1);
	int pre = 1, pre_pre = 1;
	int fib = 0;
	for(int i = 3; i <= n; i++)
	{
		fib = pre + pre_pre;
		res.push_back(fib);
		pre_pre = pre;
		pre = fib;
	}
	int count = 0;
	while(count < m)
	{
		int e = res.back();
		res.pop_back();
		cout << e << " ";
		count ++;
	}
	return 0;
}

