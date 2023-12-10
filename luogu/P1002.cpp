#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int bx,by,horsex,horsey;
    cin>>bx>>by>>horsex>>horsey;
    // +=2 to avoid overflow
    bx+=2;by+=2;horsex+=2;horsey+=2;
    ll dp[40][40]={};
    bool ma[40][40]={};
    ma[horsex][horsey]=1;
    ma[horsex-1][horsey-2]=1;
    ma[horsex+1][horsey+2]=1;
    ma[horsex-1][horsey+2]=1;
    ma[horsex+1][horsey-2]=1;
    ma[horsex-2][horsey-1]=1;
    ma[horsex+2][horsey+1]=1;
    ma[horsex-2][horsey+1]=1;
    ma[horsex+2][horsey-1]=1;
    // init dp value
    dp[2][1]=1;
    for(int i=2;i<=bx;i++)
    {
        for(int j=2;j<=by;j++)
        {
            if(ma[i][j]) continue;
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    cout<<dp[bx][by];

    return 0;
}
