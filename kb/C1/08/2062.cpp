#include <iostream>
using namespace std;

// �� int ����� ������ unsigned int���� 

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
