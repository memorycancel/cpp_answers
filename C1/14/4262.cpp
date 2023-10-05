#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=7; i<=n; i++)
	{
		int tmp = i;
		if(tmp % 7 != 0) continue;
		while(tmp > 0)
		{
			if(tmp % 10 == 7)
			{
				cout << i << endl;
				break;
			}
			tmp /= 10;
		}
	}
	
	return 0;
}

