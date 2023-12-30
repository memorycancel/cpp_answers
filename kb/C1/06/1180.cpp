#include <iostream>
using namespace std;

int main()
{
	for(int i=100; i<=999; ++i)
	{
		if(i%9 == 0 && i % 10 == 6)
			cout << i << " ";
	}
	return 0;
}
