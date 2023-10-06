#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n > 0)
	{
		int t = n % 10;
		if(t == 0)
		{
			n /= 10;
			continue;
		}
		else
		{
			cout << t;
		}
		n /= 10;
	}
	return 0;
}

