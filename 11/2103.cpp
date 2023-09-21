#include <iostream>
using namespace std;

int main()
{
	int n, offset=0;
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		int current_row_count = 0;
		for(int j=1; j<=i; j++)
		{
			cout << offset + j << " ";
			current_row_count += 1;
		}
		offset += current_row_count;
		cout << endl;
	}
	
	return 0;
}

