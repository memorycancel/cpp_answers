#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	cin >> s;
	
	reverse(s.begin(), s.end());
	// remove the starts of '0's 
	s.erase(0, s.find_first_not_of('0'));
	cout << s;
	
	return 0;
}

