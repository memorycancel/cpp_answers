#include <iostream>
using namespace std;

int count_factor(int n)
{
	int count = 0;
	for(int i = 1; i <= n; i++)
	{
		if(n % i == 0) count++;
	}
	return count;
}

int main()
{
	int max = -1, res;
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		int c = count_factor(i);
		if(c > max)
		{
			max = c;
			res = i;
		}
	}
	cout << res;
	
	return 0;
}

