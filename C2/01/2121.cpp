#include <iostream>
using namespace std;

bool is_diff(int a, int b, int c, int d, int e)
{
	int book[10] = {};
	book[a]++;
	book[b]++;
	book[c]++;
	book[d]++;
	book[e]++;
	for(int i = 0; i < 10; i++)
	{
		if(book[i] > 1) return false;
	}
	return true;
}

int main()
{
	for(int a = 1; a <= 9; a++)
	{
		for(int b = 0; b <= 9; b++)
		{
			for(int c = 0; c <= 9; c++)
			{
				for(int d = 0; d <= 9; d++)
				{
					for(int e = 1; e <= 9; e++)
					{
						int x = a * 1000 + b * 100 + c * 10 + d;
						int y = d * 1000 + c * 100 + b * 10 + a;
						if(is_diff(a, b, c, d, e) && x * e == y)
						{
							cout << a << " " << b << " " << c << " " << d << " " << e << endl;
							return 0;
						}
					}
				}
			}
		}
	}
	
	return 0;
}

