#include <iostream>
using namespace std;

//注意要输出数量而不是几种。。。
//比如1+4=5与2+3=5是一种不是两种！！！！
int main()
{
	int a[100];
	int n;
	int num=0;   //答案数量
	int v[19999] = {};  //判断去重
    cin >> n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<n;i++)   //左边界
       for(int j=i+1;j<=n;j++)   //右边界
          for(int k=1;k<=n;k++)   //无脑暴搜
             if(k!=i&&k!=j&&i!=j&&a[i]+a[j]==a[k]&&v[k]==0)   //没有数过并且不是边界
                {
                   num++;
                   v[k]=1;   //用过啦~
                }
    cout << num;
    return 0;
}
