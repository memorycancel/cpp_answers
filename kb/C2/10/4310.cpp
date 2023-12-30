#include <iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	cout<<'*';
	for(int i=s.size()-5;i<s.size();i++)
	{
		cout<<s[i];
	}

	return 0;
}

