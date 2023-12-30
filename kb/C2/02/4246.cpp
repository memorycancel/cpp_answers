#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	cin >> s;

	// remove the end of '0's 
	s.erase(s.find_last_not_of('0')+1, s.size()-1);
	// reverse skip the '-'
	reverse(s.begin() + 1, s.end());
	
	
	cout << s;
	
	return 0;
}

