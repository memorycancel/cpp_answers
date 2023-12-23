#include <iostream>
using namespace std;

//   1     1(1)
//   2     2(11 2)
//   3     4(111 12 21 3)
//   4     7(=1+2+4)


int main()
{
	int n;
	cin >> n;

	if(n == 1 || n == 2)
	{
		cout << n;
		return 0;
	}
	else if(n == 3)
	{
		cout << 4;
		return 0;
	}
	else
	{
		int n_1 = 4, n_2 = 2, n_3 = 1;
		int current;
		for(int i = 4; i <= n; i++)
		{
			current = n_1 + n_2 + n_3;
			n_3 = n_2;
			n_2 = n_1;
			n_1 = current;
		}
		cout << current;
	}

	return 0;
}

