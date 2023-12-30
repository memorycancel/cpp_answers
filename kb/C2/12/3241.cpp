#include <iostream>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int da=0,xiao=0;
	for(int i=0;i<s.size();i++)
	{
		char c=s[i];
		if(c>='a'&&c<='z') xiao++;
		if(c>='A'&&c<='Z') da++;
	}
	cout<<xiao<<' '<<da;

	return 0;
}

