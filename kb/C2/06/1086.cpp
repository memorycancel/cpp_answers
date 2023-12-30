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
        bucket[t]=1;
    }
    int count=0;
    for(int i=0;i<1001;i++)
    {
        if(bucket[i])
        {
            count++;
        }
    }
        
    cout<<count<<endl;
    for(int i=0;i<1001;i++)
    {
        if(bucket[i])
        {
            cout<<i<<' ';
        }
    }

	return 0;
}
