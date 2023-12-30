#include <iostream>
using namespace std;

int main()
{
	string s;
	char c;
	cin>>s;
	cin>>c;
	int ssize=s.size();
	for(int i=0;i<ssize;i++)
	{
		if(s[ssize-i-1]==c)
		{
			cout<<ssize-i;
			return 0;
		}
	} 
	return 0;
}

