#include <iostream>
using namespace std;
// 321 abc
// 211 bcc
// 532

int main()
{
	for(int a=1; a<=9; a++)
	{
		for(int b=0; b<=9; b++)
		{
			for(int c=0; c<=9; c++)
			{
				int n1 = a*100 + b*10 + c;
				int n2 = b*100 + c*10 + c;
				if(n1 + n2 == 532)
				{
					cout << a << " " << b << " " << c;
				}
			}
		}
	}
	
	return 0;
}

