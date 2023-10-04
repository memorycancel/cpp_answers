#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int scores[n][3] = {};
	int res[3] = {};

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<3; j++)
		{
			int tmp;
			cin >> tmp;
			res[j] += tmp;
		}
	}
	
	for(int j=0; j<3; j++)
	{
		int tmp = res[j] / n;
		cout << tmp << " ";
	}
	
	return 0;
}
