#include <iostream>
using namespace std;

// getline(cin,s) can receive the ' '(blank char)
int main()
{
	string s;
	getline(cin,s);
	cout<<s.size();
	return 0;
}

