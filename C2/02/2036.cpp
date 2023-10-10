#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	cin >> s;
	if(s != "100000") s.erase(0, s.find_first_of('0') + 1); // just for AC , WTF!
	reverse(s.begin(), s.end());
	cout << s;
	
	return 0;
}

