#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;
	switch(c)
	{
	    case '0' ... '9':
	        cout << "这是一个数字";
	        break;
	    case 'a' ... 'z':
	        cout << "这是一个小写字母";
	        break;
	    case 'A' ... 'Z':
	        cout << "这是一个大写字母";
	        break;
	    default:
	        cout << "这是其他字符";
	}

	return 0;
}\	
