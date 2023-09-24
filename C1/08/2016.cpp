#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	if(x / 10 > 0 || y / 20 > 0)
		cout << 1;
	else
		cout << 0;
	
	return 0;
}
