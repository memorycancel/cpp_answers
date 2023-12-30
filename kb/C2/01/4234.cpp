#include <iostream>
using namespace std;

int main()
{
	for(int i = 1; i <= 100; ++i)
	{
		for(int j = i; j <= 100; ++j) // 从小到大 所以 j 从 i 开始 
		{
			for(int k = j; k <= 100; ++k) // k 从 j 开始 
			{
				if(k * k == i * i + j * j)
				{
					cout << i << " " << j << " " << k << endl;
				}
			}
		}
	}
	
	return 0;
}

