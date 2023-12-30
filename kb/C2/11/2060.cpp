#include <iostream>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		char c=s[i];
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			char t=c+3;
			if((t>'Z'&&t<'a')||t>'z') t-=26; 
			cout<<char(t);
		}
		else
			cout<<c;
	} 

	return 0;
}

