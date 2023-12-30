#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	for(int i=a; i<=b; ++i)
	{
		if(i%10 == 6 || i%6 == 0)
			cout << "pass" << endl;
		else
			cout << i << endl;
	}
	
	return 0;
}
