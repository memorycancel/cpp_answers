#include <iostream>
using namespace std;

int main()
{
	int m, n, sum = 0;
	cin >> m >> n;
	//	��ע��m��һ������n
	if(m > n) swap(m, n);
	for(int i=m; i<=n; i++)
	{
		if(i % 2 != 0) sum += i;
	}
	cout << sum;

	return 0;
}
