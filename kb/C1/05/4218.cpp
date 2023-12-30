#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if(a > 0)
		cout << "这是一个正数";
	else if( a == 0)
		cout << "这是零";
	else
		cout << "这是一个负数";
	
	return 0;
}
