#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int trees,n;
    cin>>trees>>n;
    int bucket[trees+1]={};
    for(int i=0;i<=trees;i++) bucket[i]=1;
    for(int i=0;i<n;i++){
        int b,e;
        cin>>b>>e;
        if(b>e)swap(b,e);
        for(int j=b;j<=e;j++) bucket[j]=0;
    }
    int res=0;
    for(int i=0;i<trees+1;i++){
    	if(bucket[i]==1)res++;
    }
    cout<<res;

    return 0;
}
