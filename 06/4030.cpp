#include <iostream>
using namespace std;

int main()
{
	int m, n, sum=0;
	cin >> m >> n;
	if(m > n)
	{
		int t = m;
		m = n;
		n = t;
	}
	for(int i=m; i<=n; ++i)
	{
		if(i%10==7 || i%7==0)
			sum += i;
	}
	cout << sum;
	return 0;
}
