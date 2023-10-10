#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int res = 0, quan = 1;
	
	if(s[0] == '-')
	{
		s.erase(s.find_last_not_of('0')+1, s.size()-1);
		reverse(s.begin()+1, s.end());
		for(int i = s.size() - 1; i >= 1; i--)
		{
			res += (s[i] - '0') * quan;
			quan *= 10;
		}
		res *= -1;
	}
	else
	{
		reverse(s.begin(), s.end());
		s.erase(0, s.find_first_not_of('0'));
		for(int i = s.size() - 1; i >= 0; i--)
		{
			res += (s[i] - '0') * quan;
			quan *= 10;
		}
	}
	
	
	
	cout << res * 2;
	
	return 0;
}

