#include <iostream>
using namespace std;

int main()
{
	int month;
	cin >> month;
	switch(month)
	{
		case 3 ... 5:
			cout << "����";
			break;
		case 6 ... 8:
			cout << "�ļ�";
			break;
		case 9 ... 11:
			cout << "�＾";
			break;
		case 12:
			cout << "����";
			break;
		case 1 ... 2:
			cout << "����";
			break;
		default:
			cout << "���ݲ��Ϸ�";
	}	
	return 0;
}
