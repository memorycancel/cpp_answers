#include <iostream>
using namespace std;

int main()
{
	char c;
	cin>>c;
	if(c>='a'&&c<='z') cout<<"����һ��Сд��ĸ";
	else if(c>='A'&&c<='Z') cout<<"����һ����д��ĸ";
	else if(c>='0'&&c<='9') cout<<"����һ������";
	else cout<<"���������ַ�";

	return 0;
}

