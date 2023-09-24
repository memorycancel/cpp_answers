#include <iostream>
using namespace std;

int main()
{
	int a, b, ret = 0;
	cin >> a >> b;
	for(int i=a; i<=b; ++i)
		if(i%10 == 7) ret += 1;
		
	cout << ret; 
	return 0;
}
