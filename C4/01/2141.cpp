#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    for(int i=0;i<2;i++)
    {
        int scores[10]={};
        for(int j=0;j<10;j++) cin>>scores[j];
        sort(scores,scores+10);
        int sum=0;
        for(int i=1;i<9;i++) sum+=scores[i];
        cout<<sum/8<<' ';
    }

    return 0;
}
