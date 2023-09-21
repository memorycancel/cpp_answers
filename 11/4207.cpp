#include <iostream>
using namespace std;

// 分解3块 
// 对称性 
// 逐行尝试边界 

int main()
{
	int n;
	cin >> n;
	
	// 上三角 
	for(int i=0; i<n-1; i++)
	{
		for(int j=n-i-1; j>0; j--)
		{
			cout << " ";
		}
		for(int k=0; k<2*i+1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	// 腰部 
	for(int i=0; i<2*n-1; i++)
	{
		cout << "*";
	}
	cout << endl;
	// 下三角
	for(int i=n-1; i>0; i--)
	{
		for(int j=n-i; j>0; j--)
		{
			cout << " ";
		}
		for(int k=0; k<2*i-1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
