#include <iostream>
using namespace std;

int main()
{	
	int n, ji = 0, ou = 0;
	cin >> n;
	bool flag = true;
	while(n > 0)
	{
		int i = n % 10;
		if(flag)
		{
			ji += i;
			flag = false;
		}
		else
		{
			ou += i;
			flag = true;
		}
		n /= 10;
	}
	int minus = ji - ou;
	if(minus % 11 == 0)
	{
		cout << "��������";
		cout << endl << minus / 11;
	}
	else
	{
		cout << "��������";
		cout << endl << minus;
	}
	
	return 0;
}

