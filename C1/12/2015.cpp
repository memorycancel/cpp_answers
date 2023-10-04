#include <iostream>
using namespace std;

int main()
{
	int x, res = 1;
	cin >> x;
	for(int i=1; i<=x; i++)
	{
		res *= i;
	}
	cout << res;
	return 0;
}
