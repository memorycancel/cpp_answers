#include <iostream>
using namespace std;

int main()
{
	int n, a;
	cin >> n >> a;
	for(int i=1; i<=n; ++i)
	{
		if(i%a == 0)
			cout << i << " ";
	}
	return 0;
}
