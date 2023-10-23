#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int bucket[12]={};
    for(int i=0;i<=10;i++) bucket[i]=1;
    for(int i=0;i<3;i++){
        int b,e;
        cin>>b>>e;
        if(b>e)swap(b,e);
        for(int j=b;j<=e;j++) bucket[j]=0;
    }
    int res=0;
    for(int i=0;i<12;i++){
    	if(bucket[i]==1)res++;
    }
    cout<<res;

    return 0;
}
