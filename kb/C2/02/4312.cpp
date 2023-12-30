#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int num, sum = 0;
	vector<int> vec;
	while(cin >> num)
	{
		if(num % 2 == 0) sum += num;
		vec.push_back(num);
		char ch = getchar();
		if(ch == '\n') break;
	}
	cout << sum;
	
	return 0;
}

