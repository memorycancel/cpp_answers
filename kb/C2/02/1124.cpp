#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

// using string STL function
// using  'find_last_not_of' to remove the '0's in tail
// using 'find_first_not_of' to remove the '0' in front

int main()
{
	int n;
	cin >> n;
	vector<string> string_vectors(n, "");
	for(int i = 0; i < n; i++)
	{
		cin >> string_vectors[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(string_vectors[i][0] == '-')
		{
			// remove the '0's in tail
			string_vectors[i].erase(string_vectors[i].find_last_not_of('0')+1, string_vectors[i].size()-1);
			reverse(string_vectors[i].begin() + 1, string_vectors[i].end());
			
		}
		else
		{
			reverse(string_vectors[i].begin(), string_vectors[i].end());
			// remove starts_with '0'
			string_vectors[i].erase(0, string_vectors[i].find_first_not_of('0'));
		}
		cout << string_vectors[i] << endl;
	}

	return 0;
}

