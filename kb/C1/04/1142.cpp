#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;
	switch(c)
	{
	    case '0' ... '9':
	        cout << "����һ������";
	        break;
	    case 'a' ... 'z':
	        cout << "����һ��Сд��ĸ";
	        break;
	    case 'A' ... 'Z':
	        cout << "����һ����д��ĸ";
	        break;
	    default:
	        cout << "���������ַ�";
	}

	return 0;
}\	
