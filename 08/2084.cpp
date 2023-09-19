#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	switch(n)
	{
		case 0:
			cout << "!=";
			break;
		case 1:
			cout << "==";
			break;
		case 2:
			cout << "<";
			break;
		case 3:
			cout << "<=";
			break;
		case 4:
			cout << ">";
			break;
		case 5:
			cout << ">=";
			break;
	}
	
	return 0;
}
