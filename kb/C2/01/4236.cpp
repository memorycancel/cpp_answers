#include <iostream>
using namespace std;

// 或者用插板法 C(9 2) =  9 * 8 / 2 = 36
int main()
{
	int count = 0;
	for(int i = 1; i < 10; i++)
		for(int j = 1; j < 10; j++)
			for(int k = 1; k < 10; k++)
				if(i + j + k == 10) count++;

	cout << count;
	
	return 0;
}

