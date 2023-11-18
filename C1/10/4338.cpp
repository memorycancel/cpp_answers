#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i];

	// bubble sort
	for(int i=0; i<n; ++i)
		for(int j=0; j<n-1-i; ++j)
			if(a[j] < a[j+1]) swap(a[j], a[j+1]);

	for(int i=0; i<n-1; ++i)
	{
		if(a[i] > a[i+1])
		{
			cout << a[i+1];
			return 0;
		}
	}
	cout << "nil";
	return 0;
}
