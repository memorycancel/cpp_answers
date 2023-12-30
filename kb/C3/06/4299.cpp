#include <iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int nums[n][n]={};
    int max_num=-100000;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>nums[i][j];
        }
    }
    int x,y;cin>>x>>y;
    // This line below is very important!
    // As described by Q: the start point is (1,1)
    x--;y--;
    if(nums[x][y]>max_num) max_num=nums[x][y];
    if(x-1>=0&&nums[x-1][y]>max_num) max_num=nums[x-1][y];
    if(x+1<n&&nums[x+1][y]>max_num) max_num=nums[x+1][y];
    if(y-1>=0&&nums[x][y-1]>max_num) max_num=nums[x][y-1];
    if(y+1<n&&nums[x][y+1]>max_num) max_num=nums[x][y+1];
    if(x+1<n&&y+1<n&&nums[x+1][y+1]>max_num) max_num=nums[x+1][y+1];
    if(x-1>=0&&y-1>=0&&nums[x-1][y-1]>max_num) max_num=nums[x-1][y-1];
    if(x-1>=0&&y+1<n&&nums[x-1][y+1]>max_num) max_num=nums[x-1][y+1];
    if(x+1<n&&y-1>=0&&nums[x+1][y-1]>max_num) max_num=nums[x+1][y-1];
    cout<<max_num;

    return 0;
}
