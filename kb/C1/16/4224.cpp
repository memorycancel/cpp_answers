#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int n_2 = 1, n_1 = 1;
	if(n == 1 || n == 2)
	{
		cout << "yes";
		return 0;
	}
	int current;
	while(current < n)
	{
		current = n_2 + n_1;
		if(current == n)
		{
			cout << "yes";
			return 0;
		}
		n_2 = n_1;
		n_1 = current;
	}
	cout << "no";
	return 0;
}

