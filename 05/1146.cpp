#include <iostream>
using namespace std;

int main()
{
	int score;
	cin >> score;
	switch(score)
	{
		case 90 ... 100:
			cout << 'A';
			break;
		case 80 ... 89:
			cout << 'B';
			break;
		case 70 ... 79:
			cout << 'C';
			break;
		case 60 ... 69:
			cout << 'D';
			break;
		case 0 ... 59:
			cout << 'E';
			break;
		default:
			cout << "数据不合法";
	} 
	
	return 0;
}
