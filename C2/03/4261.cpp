#include <iostream>
using namespace std;

int main()
{
	long long num = 9, sum = 0;
	int i = 1;
	while(i <= 10)
	{
		sum += num;
		long long quan = 1;
		for(int j = 0; j < i; j++) quan *= 10;
		num += quan * 9;
		i++;
	}
	cout << sum;
	
	return 0;
}

