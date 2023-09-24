#include <iostream>
using namespace std;

int main()
{
	for(int i=5; i>0; i--)
	{
		for(int j=0; j<i; j++)
		{
			cout << " ";
		}
		for(int i=0; i<6; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
