#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	if(n <= 0)
	{
		cout << "no";
		return 0;
	}
	if(n == 1)
	{
		cout << "no";
		return 0;
	}
	for(int i = 2; i * i <= n + 1; i++)
	{
		if(n % i == 0)
		{
			cout << "no";
			return 0;
		}
	}
	cout << "yes";
	
	return 0;
}

