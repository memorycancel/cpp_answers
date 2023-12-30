#include<bits/stdc++.h>
using namespace std;
//https://www.luogu.com.cn/problem/P1135
int n,a,b,to[205];
bool vis[205];
struct node{int id,step;}x;//id表示楼层号，step表示按钮次数
queue<node> q;
int main()
{
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++) cin>>to[i];
	q.push((node){a,0});
	while(q.size())
	{
		x=q.front();q.pop();
		if(x.id==b) break;
		if(x.id+to[x.id]<=n&&!vis[x.id+to[x.id]])
		{
			q.push((node){x.id+to[x.id],x.step+1});
			vis[x.id+to[x.id]]=1;
		}
		if(x.id-to[x.id]>=1&&!vis[x.id-to[x.id]])
		{
			q.push((node){x.id-to[x.id],x.step+1});
			vis[x.id-to[x.id]]=1;
		}
	}
	if(x.id==b) cout<<x.step;
	else cout<<-1;
	return 0;
}
