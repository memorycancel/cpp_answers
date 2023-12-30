#include <iostream>
using namespace std;

// 用 int 溢出了 所以用 unsigned int即可 

int main()
{
	unsigned int a, b;
	cin >> a >> b;
	
	if(a + b < 10)
	{
		cout << "water";
	}
	else
	{
		if(a > b)
			cout << "tree";
		else
			cout << "tea";
	}
	
	return 0;
}
