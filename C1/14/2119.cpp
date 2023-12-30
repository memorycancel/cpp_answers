#include <iostream>
using namespace std;

int main()
{
	for(int a=1; a<=9; a++)
	{
		for(int b=0; b<=9; b++)
		{
			for(int c=0; c<=9; c++)
			{
				int n1 = a*100 + b*10 + c;
				int n2 = a*a*a + b*b*b + c*c*c;
				if(n1 == n2)
				{
					cout << n1 << " ";
				}
			}
		}
	}

	return 0;
}

