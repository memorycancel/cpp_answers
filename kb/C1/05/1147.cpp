#include <iostream>
using namespace std;

int main()
{
	int money;
	cin >> money;
	if(money >= 1000)
		cout << money * 0.7 << endl;
	else if(money >= 500)
		cout << money * 0.8 << endl;
	else if(money >= 200)
		cout << money - 30 << endl;
	else if(money >= 100)
		cout << money - 10 << endl;
	else if(money >= 0) // �������⣬ͨ�������������Ӵ��� 
		cout << money << endl;
	else
		cout << "���ݲ��Ϸ�" << endl; 
	
	return 0;
}
