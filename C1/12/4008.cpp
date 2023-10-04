#include <iostream>
using namespace std;

int main()
{
	long a, b, res = 1;
	cin >> a >> b;
	for(int i=0; i<b; i++)
	{
		res *= a;
		if(res > 1000000000)
		{
			cout << -1;
			return 0;
		}
	}
	cout << res;
	
	return 0;
}
