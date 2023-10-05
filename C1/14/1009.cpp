#include <iostream>
using namespace std;

int main()
{
	for(int i=1; i<=9; i++)
	{
		for(int j=0; j<=9; j++)
		{
			for(int k=0; k<=9; k++)
			{
				for(int l=0; l<=9; l++)
				{
					int a = i*1000+j*100+k*10+l;
					int b = l*1000+k*100+j*10+i;
					if(a * 9 == b)
					{
						cout << a << endl;
					}
				}
			}
		}
	}
	
	return 0;
}

