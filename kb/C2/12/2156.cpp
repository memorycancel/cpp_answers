#include <iostream>
using namespace std;

int main()
{
	string s;
	int i;
	cin>>s>>i;
	if(i==1)
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='A'&&s[i]<='Z') cout<<char(s[i]+32);
			else cout<<s[i]; 
		}
	}
	if(i==2)
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='a'&&s[i]<='z') cout<<char(s[i]-32);
			else cout<<s[i]; 
		}
	}
	if(i==3)
	{
		if(s[0]>='a'&&s[0]<='z') cout<<char(s[0]-32);
		for(int i=1;i<s.size();i++)
		{
			if(s[i]>='A'&&s[i]<='Z') cout<<char(s[i]+32);
			else cout<<s[i]; 
		}
		
	}

	return 0;
}

