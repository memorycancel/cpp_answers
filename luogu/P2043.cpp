#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=0,jie=1;cin>>n;
    int stats[n+1]={};
    for(int i=2;i<=n;i++)
    {
        int tmp=i;
        for(int j=2;j<=sqrt(tmp);j++)
        {
            if(tmp%j) continue;
            int count=0;
            while(tmp%j==0)
            {
                count++;
                tmp/=j;
            }
            stats[j]+=count;
        }
        if(tmp>1) stats[tmp]++;
    }
    for(int i=0;i<=n;i++)
        if(stats[i]>0)
            cout<<i<<' '<<stats[i]<<endl;

    return 0;
}
