#include <iostream>
using namespace std;

int main()
{
	for(int i = 1; i <= 100; ++i)
	{
		for(int j = i; j <= 100; ++j) // ��С���� ���� j �� i ��ʼ 
		{
			for(int k = j; k <= 100; ++k) // k �� j ��ʼ 
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

