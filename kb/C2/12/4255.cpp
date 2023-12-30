#include <iostream>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	if(s[0]>='0'&&s[0]<='9')
	{
		cout<<"no";
		return 0;
	}
	if(s=="for"||s=="int"||s=="float"||s=="string")
	{
		cout<<"no";
		return 0;
	}
	for(int i=0;i<s.size();i++)
	{
		if((s[i]>='a'&&s[i]<='z')||
			(s[i]>='A'&&s[i]<='Z')||
			s[i]=='_'||
			(s[i]>='0'&&s[i]<='9'))
			continue;
		else
		{
			cout<<"no";
			return 0;
		}
	}
	cout<<"yes";

	return 0;
}

