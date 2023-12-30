#include <iostream>
#include <cmath>
using namespace std;

int a[10];
int main()
{
	int i=0;
	while(i<10)
	{
		cin>>a[i];
		i++;
	}
	int j=0;
	while(j<10)
	{
		cout<<pow(a[j],2)<<' ';
		j++;
	}
	return 0;
}

