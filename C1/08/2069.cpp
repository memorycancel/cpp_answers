#include <iostream>
using namespace std;
// 1. »­³öÍ¼ 2. float input

int main()
{
	float x, y;
	cin >> x >> y;
	if(x>=-1 && x <= 1 && y>=-1 && y<=1) 
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
