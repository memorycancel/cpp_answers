#include <iostream>
using namespace std;

int main()
{
	int a,b;
	char op;
	cin>>a>>op>>b;
	if(op=='+') cout<<a+b;
	else if(op=='-') cout<<a-b;
	else if(op=='*') cout<<a*b;
	else if(op=='/')
	{
		if(b==0)
		{
			cout<<"Divided by zero!";
			return 0;
		}
		cout<<a/b;
	}
	else
	{
		cout<<"Invalid operator!";
	}

	return 0;
}

