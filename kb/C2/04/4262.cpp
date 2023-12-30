#include <iostream>
using namespace std;

bool is_has_seven(int n)
{
	while(n>0)
	{
		if(n%10==7) return 1;
		n/=10;
	}
	return 0;
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		if(i%7==0&&is_has_seven(i)) cout<<i<<endl;
	}
	return 0;
}

