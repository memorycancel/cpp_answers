#include <iostream>
using namespace std;

int main()
{
	int l, d, x;
	int max = -1, min = 10000;
	cin >> l >> d >> x;
	for(int i=l; i<=d; i++)
	{
		int tmp = i, sum = 0;
		while(tmp > 0)
		{
			sum += tmp % 10;
			tmp /= 10;
		}
		if(sum == x)
		{
			if(i > max) max = i;
			if(i < min) min = i;
		}
	}
	cout << min << endl;
	cout << max << endl;
	
	return 0;
}

