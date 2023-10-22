#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	// STL sort
	int a[5];
	for(int i=0;i<5;i++) cin>>a[i];
	sort(a,a+5);
	for(int i=0;i<5;i++) cout<<a[i]<<' ';
	return 0;
}

