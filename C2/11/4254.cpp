#include <iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	char grade=s[3];
	char klass=(s[4]-'0')*100+(s[5]-'0')*10+(s[6]-'0')-32;
	int no=(s[7]-'0')*100+(s[8]-'0')*10+(s[9]-'0');
	cout<<grade<<"Äê¼¶ "<<klass<<"°à "<<no<<"ºÅ";

	return 0;
}

