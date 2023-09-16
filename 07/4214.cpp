#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n % 2 == 0)
	{
		for(int i=0; i<3; ++i)
		{
			for(int j=0; j<4; ++j) cout << "#";
			cout << endl;
		}
	}
	else
	{
		for(int i=0; i<4; ++i)
		{
			for(int j=0; j<3; ++j) cout << "*";
			cout << endl;
		}
	}
	
	return 0;
}
