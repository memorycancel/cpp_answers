#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	float res;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	if(n%2) res=a[n/2];
	else res=(a[n/2-1]+a[n/2])/2.0;
	cout<<res;
 
	return 0;
}

