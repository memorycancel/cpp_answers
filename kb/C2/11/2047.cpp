#include <iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int xiao=0,da=0,shu=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='a'&&s[i]<='z') xiao++;
		if(s[i]>='A'&&s[i]<='Z') da++;
		if(s[i]>='0'&&s[i]<='9') shu++;
	}
	cout<<xiao<<' '<<da<<' '<<shu;

	return 0;
}

