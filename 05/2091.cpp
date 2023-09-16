#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if(a%c == 0 && b%c == 0)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
