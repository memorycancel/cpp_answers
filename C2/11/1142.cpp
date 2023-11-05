#include <iostream>
using namespace std;

int main()
{
	char c;
	cin>>c;
	if(c>='a'&&c<='z') cout<<"这是一个小写字母";
	else if(c>='A'&&c<='Z') cout<<"这是一个大写字母";
	else if(c>='0'&&c<='9') cout<<"这是一个数字";
	else cout<<"这是其他字符";

	return 0;
}

