#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	float x, y;
	cin >> n >> x >> y;
	cout << n - ceil(y / x) << endl; 
	
	return 0;
}
