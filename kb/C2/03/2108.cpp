#include <iostream>
using namespace std;

int main()
{
	int h, m, n, days = 1;
	cin >> h >> m >> n;
	
	while(1)
	{
		h -= m;
		if(h <= 0) break; // exit loop when jump out 
		h += n;
		days++;
	}
	cout << days;
	return 0;
}

