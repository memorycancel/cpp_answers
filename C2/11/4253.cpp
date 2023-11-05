#include <iostream>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	bool flag=true;
	for(int i=0;i<s.size();i++)
	{
		char c=s[i];
		if(c<'A'||(c>'Z'&&c<'a')||c>'z')
		{
			cout<<c;
			flag=true;
			continue;
		}
		if(flag)
		{
			cout<<char(c-32);
			flag=false;
		}
		else
		{
			cout<<char(c);
		}
	}
	return 0;
}

