#include <iostream>
using namespace std;

int main()
{
	int month;
	cin >> month;
	switch(month)
	{
		case 3 ... 5:
			cout << "´º¼¾";
			break;
		case 6 ... 8:
			cout << "ÏÄ¼¾";
			break;
		case 9 ... 11:
			cout << "Çï¼¾";
			break;
		case 12:
			cout << "¶¬¼¾";
			break;
		case 1 ... 2:
			cout << "¶¬¼¾";
			break;
		default:
			cout << "Êý¾Ý²»ºÏ·¨";
	}	
	return 0;
}
