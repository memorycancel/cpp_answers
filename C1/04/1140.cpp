//8    day1
//4    day2
//2    day3
//1    day4

#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if(a == 0 || a == 1)
	{
		cout << 1;
	}
	else
	{
		int day = 1;
		while(a != 1)
		{
			a /= 2;
			day += 1;
		}
		cout << day;
	}
	
	return 0;
}
