#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int j = 1; j <= n; j++)
	{
		int sum = 0;
		for(int i = 1; i <= j / 2; i++)
		{
			if(j % i == 0) sum += i;
		}
		if(sum == j) cout << j << ' ';
	}
	
	return 0;
}

