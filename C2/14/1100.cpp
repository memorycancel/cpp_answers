#include <iostream>
using namespace std;

int main()
{
	string s1;
	cin>>s1;
	string s2=s1;
	int c1=s1[0]-'0';
	int c2=s1[2]-'0';
	int c3=s1[3]-'0';
	int c4=s1[4]-'0';
	int c5=s1[6]-'0';
	int c6=s1[7]-'0';
	int c7=s1[8]-'0';
	int c8=s1[9]-'0';
	int c9=s1[10]-'0';
	int l=s1[12]-'0';
	int sum=c1*1+c2*2+c3*3+c4*4+c5*5+c6*6+c7*7+c8*8+c9*9;
	int m=sum%11;
	if(m==10) s2[12]='X';
	else s2[12]=char('0'+m);
	if(s2==s1) cout<<"Right";
	else cout<<s2;
	 
	
	return 0;
}

