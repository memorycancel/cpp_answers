#include <iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int pos=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='@')
		{
			pos=i;
			break; 
		}
	}
	for(int i=pos+1;i<s.size();i++) cout<<s[i];
	cout<<'@';
	for(int i=0;i<pos;i++) cout<<s[i];

	return 0;
}

