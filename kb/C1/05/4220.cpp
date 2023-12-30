#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int yushu = n % 7;
	if(yushu == 0)
		cout << "yes";
	else
		cout << yushu;
	
	return 0;
}
