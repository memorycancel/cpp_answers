#include <iostream>
using namespace std;

int main()
{
	int n, index = 0, count = 0;
	cin >> n;
	// 获取数组长度 
	int tmp = n;
	while(tmp > 0)
	{
		count ++;
		tmp /= 10;
	}
	// 保存每一位数据 
	int a[count];
	while(n > 0)
	{
		a[index] = n % 10;
		n /= 10;
		index ++;
	}
	// 反向输出 
	for(int i=0; i<count; i++)
	{
		cout << a[i];
	}
	
	return 0;
}

