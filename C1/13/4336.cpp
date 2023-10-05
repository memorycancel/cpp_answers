#include <iostream>
#include <vector>
using namespace std;

vector<int> fib_pro_arr(int n)
{
	vector<int> res;
	if(n == 1)
	{
		res.push_back(1);
		return res;
	}
	if(n == 2)
	{
		res.push_back(1);
		res.push_back(1);
		return res;
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
	return res;
}

int main()
{
	int n;
	cin >> n;
	vector<int> a = fib_pro_arr(n);
	for(int i=0; i<=a.size()-1; i++)
	{
		for(int j=0; j<a[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for(int i=a.size()-2; i>=0; i--)
	{
		for(int j=0; j<a[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

