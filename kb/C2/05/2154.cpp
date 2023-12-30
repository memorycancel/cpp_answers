#include <iostream>
using namespace std;

int a[100];
int main()
{
	for(int i=0;i<100;i++) cin>>a[i];
	for(int i=0;i<100;i++) cout<<a[100-i-1]-10<<' ';
	
	return 0;
}

