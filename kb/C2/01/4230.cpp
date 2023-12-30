#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	
	for(int ji = 0; ji <= a; ji++)
	{
		for(int tu = 0; tu <= a; tu++)
		{
			if(ji + tu == a && ji * 2 + tu * 4 == b)
			{
				cout << ji << endl << tu;
			}
		}
	}
	
	return 0;
}

