#include <iostream>
using namespace std;

int a[5];
int main()
{
	for(int i=0;i<5;i++) cin>>a[i];
	int i=0,ins_num,printed=0;
	cin>>ins_num;
	while(i<5)
	{
		if(a[i]>ins_num&&!printed)
		{
			cout<<ins_num<<' ';
			printed=1;
		}
		cout<<a[i]<<' ';
		i++;
	}
	// if not printed, print the last one! AC 
	if(!printed) cout<<ins_num;

	return 0;
}

