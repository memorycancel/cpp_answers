#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a(100);
int main()
{
	for(int i=0;i<100;i++) cin>>a[i];
	reverse(a.begin(),a.end());
	for(int i=0;i<100;i++) cout<<a[i]-10<<' ';
	
	return 0;
}

