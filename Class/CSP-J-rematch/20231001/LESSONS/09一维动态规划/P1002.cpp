#include <iostream>
using namespace std;



int main()
{
	int x,y,ma_x,ma_y;
	cin>>x>>y>>ma_x>>ma_y;
    int dp[x][y]={};
    dp[0][1] = 0;
	dp[0][1] = 1;
	dp[1][0] = 1;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
        {
            dp[i][j]=dp[i-1][j]+dp[i+1][j]+dp[i][j-1]+dp[i][j+1];
        }
    }
	cout << dp[2][2];
	
	return 0;
}
