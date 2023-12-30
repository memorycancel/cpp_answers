#include<cstdio>
#include<iostream>
using namespace std;
//https://www.luogu.com.cn/problem/P1135
int n,a,b,ans=0x7ffffff;
int to[205];
bool vis[205];
void dfs(int now,int sum)//now表示当前搜到的楼层,sum表示按钮次数
{
    if(now==b) ans=min(ans,sum);
    if(sum>ans) return;
    vis[now]=1;
    //不越界就搜
    if(now+to[now]<=n&&!vis[now+to[now]]) dfs(now+to[now],sum+1);
    if(now-to[now]>=1&&!vis[now-to[now]]) dfs(now-to[now],sum+1);
    vis[now]=0;//回溯
}
int main()
{
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++) cin>>to[i];
    vis[a]=1;
    dfs(a,0);
    if(ans!=0x7ffffff) cout<<ans;
    else cout<<-1;
    return 0;
}
