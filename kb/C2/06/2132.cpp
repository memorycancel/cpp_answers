#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
    int bucket[1001]={};
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        bucket[t]++;
    }
    for(int i=0;i<1001;i++)
    {
        if(bucket[i]>0)
        {
            for(int j=0;j<bucket[i];j++) cout<<i<<' ';
        }
    }
    cout<<endl;
    for(int i=1000;i>=0;i--)
    {
        if(bucket[i]>0)
        {
            for(int j=0;j<bucket[i];j++) cout<<i<<' ';
        }
    }
	
	return 0;
}
