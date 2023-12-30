#include <iostream>
using namespace std;

int main()
{
//	8 0 8
//	4 1 4*2
//	2 2 2*2
//	1 3 1*2
//	0 4 0
	int n, count = 0, distance = 0;
	cin >> n;
	while(n > 0)
	{
		distance += n; // down
		distance += n / 2; // up
		count++;
		n /= 2;
	}
	cout << count << ' ' << distance;
	
	return 0;
}

