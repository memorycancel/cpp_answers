#include <iostream>
using namespace std;
int c,p,k,id;
int ans[100001];
int main()
{
	freopen("candy.in","r",stdin);
	freopen("candy.out","w",stdout);
	cin >> c >> p;
	int i=0;
	while(c>0)
	{
		ans[i%p]+=min(c,i+1);
		c-=min(c,i+1);
		i++;
	}
	
	for(int i=0;i<p;i++)
		cout << ans[i] << " ";
	return 0;
}

