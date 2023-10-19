#include <iostream>
using namespace std;

int main()
{
	int res=0,gou;
	int apples[10];
	for(int i=0;i<10;i++)
		cin>>apples[i];
	cin>>gou;
	gou+=30;
	for(int i=0;i<10;i++)
		if(apples[i]<=gou) res++;
	cout<<res;
		
	return 0;
}

