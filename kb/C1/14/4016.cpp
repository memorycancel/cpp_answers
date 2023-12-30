#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long tmp = n;
	while(tmp > 0)
	{
		int i = tmp % 10;
		if(i == 0)
		{
			tmp /= 10;
			continue;	
		}
		if(n % i != 0)
		{
			cout << "not clever";
			return 0;
		}
		tmp /= 10;
	}
	cout << "clever";
	
	return 0;
}

