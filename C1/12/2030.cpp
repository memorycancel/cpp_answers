#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int mentals[n][3], res[4]={};
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<3; j++)
		{
			int tmp;
			cin >> tmp;
			res[j] += tmp;
			res[3] += tmp;
		}
	}
	for(int i=0; i<4; i++)
	{
		cout << res[i] << " ";
	}
	cout << endl;

	return 0;
}
