#include <iostream>
using namespace std;

int main()
{
	int a, count = 0;
	cin >> a;
	for(int i = 0; i <= a; i++)
	{
		for(int j = 0; j <= a / 2; j++)
		{
			for(int k = 0; k <= a / 5; k++)
			{
				if(i + j * 2 + k * 5 == a)
				{
					count ++;
				}
			}
		}
	}
	cout << count;
	
	return 0;
}

