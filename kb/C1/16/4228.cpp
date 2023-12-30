#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	if(n == 1 || n == 2)
	{
		cout << 1;
		return 0;
	}
	else
	{
		int i_1 = 1, i_2 = 1, current;
		for(int i = 0; i < n - 2; i++)
		{
			current = i_2 + i_1;
			i_2 = i_1;
			i_1 = current;
		}
		cout << current;
	}
	return 0;
}

