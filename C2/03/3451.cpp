#include <iostream>
using namespace std;


//����״̬
//ʱ�䳬��
//50
//����:  C++
//��ʱ: 1201 ms
//�ڴ�: 2220 kb
//���볤��: 357
//
//in: 40
//out: 940313

int main()
{
	// avoid overflow to AC 
	unsigned long long n, sum = 0;
	cin >> n;
	for(unsigned long long i = 1; i <= n; i++)
	{
		unsigned long long ji = 1;
		for(unsigned long long j = 1; j <= i; j++)
		{
			ji *= j;
		}
		sum += ji % 1000000;
	}
	cout << sum % 1000000 << endl;
	
	return 0;
}

