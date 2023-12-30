//1169. 打印a~b之间的数

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	// 注意a b 的大小问题 
	if(a < b)
	{
		for(int i = a; i <= b ; ++i) cout << i << " ";
	}
	else
	{
		for(int i = a; i >= b ; --i) cout << i << " ";
	}
	
	cout << endl;
	return 0;
}

