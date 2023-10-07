#include <iostream>
using namespace std;

bool is_diff(int a, int b, int c, int d, int e, int f)
{
	int book[7] = {};
	book[a]++;
	book[b]++;
	book[c]++;
	book[d]++;
	book[e]++;
	book[f]++;
	for(int i = 0; i < 7; i++)
	{
		if(book[i] > 1) return false;
	}
	return true;
}

int main()
{
	for(int a = 1; a <= 6; a++)
		for(int b = 1; b <= 6; b++)
			for(int c = 1; c <= 6; c++)
				for(int d = 1; d <= 6; d++)
					for(int e = 1; e <= 6; e++)
						for(int f = 1; f <= 6; f++)
						{
							int x = a + b + c;
							int y = c + d + e;
							int z = e + f + a;
							if(is_diff(a, b, c, d, e, f) && 
							x == y && y == z)
							{
								cout << a << ' ';
								cout << b << ' ';
								cout << c << ' ';
								cout << d << ' ';
								cout << e << ' ';
								cout << f << endl;
							}
						}
	
	return 0;
}

