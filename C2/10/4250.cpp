#include <iostream>
using namespace std;

int main()
{
	string s1,s2;
	float thr;
	cin>>s1;
	cin>>s2;
	cin>>thr;
	float count=0.0;
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]==s2[i])count++;
	}
	float f=count/s1.size();
	if(f>=thr)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}

	return 0;
}

