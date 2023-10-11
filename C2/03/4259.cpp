#include <iostream>
using namespace std;

int main()
{
	int n, res = 0;
	cin >> n;
	
	for(int i = n; i <= -1; i++)
	{
		int tmp = i * -1;
		while(tmp > 0)
		{
			if(tmp % 10 == 1) res ++;
			tmp /= 10;
		}
	}
	cout << res;
	
	return 0;
}

