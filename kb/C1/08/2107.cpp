#include <iostream>
using namespace std;

// 10 4
// 4  1
// ¿¼ÂÇkÒç³öÇé¿ö 

int main()
{
	int n, k;
	cin >> n >> k;
	for(int i=0; i<k; ++i)
	{
		n = n / 2 - 1;
		if(n<=0)
		{
			cout << 0;
			return 0;
		}
	}
		
	cout << n;
	return 0;
}
