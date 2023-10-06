#include <iostream>
using namespace std;

// 注意是所有因数
// 例如：6=1+2+3 28=1+2+4+7+14 
bool is_perfect(int n)
{
	int sum = 0;
	for(int i = 1; i < n; i++)
	{
		if(n % i == 0) sum += i;
	}
//	cout << sum << " " << n << endl;
	return n == sum;
}

int main()
{
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		if(is_perfect(i))
		{
			cout << i << " ";
		}
	}
	
	return 0;
}

