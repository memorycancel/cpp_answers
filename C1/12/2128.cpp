#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, res = 0, power = 0;
	cin >> n;
	while(n != 0)
	{
		if(n % 10 == 1)
		{
			int powers = 1;
			for(int i=0; i<power; i++)
			{
				powers *= 2;
			}
			res += powers;
		}
		n /= 10;
		power += 1;
	}
	cout << res;

	return 0;
}
