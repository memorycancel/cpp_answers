#include <iostream>
using namespace std;

int main()
{
	int n, index = 0, count = 0;
	cin >> n;
	// ��ȡ���鳤�� 
	int tmp = n;
	while(tmp > 0)
	{
		count ++;
		tmp /= 10;
	}
	// ����ÿһλ���� 
	int a[count];
	while(n > 0)
	{
		a[index] = n % 10;
		n /= 10;
		index ++;
	}
	// ������� 
	for(int i=0; i<count; i++)
	{
		cout << a[i];
	}
	
	return 0;
}

