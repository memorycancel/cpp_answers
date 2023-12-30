//https://www.luogu.com.cn/problem/P3395
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<stack>
using namespace std;
int n,k;//n是矩阵的大小 k是数据组数
int zx[2000],zy[2000];//zx，zy是障碍的坐标，k是数据组数
int xx[4]={0,0,1,-1},yy[4]={1,-1,0,0};//xx，yy是四个移动方向
//map是地图，vis看是否被访问
bool map[1001][1001],vis[1001][1001];
bool flag;//flag看是否可以到达
struct node
{
	int x,y,t;//记录坐标和现在的时间
};
void bfs(int x,int y,int t)
{
	queue<node>q;
	node now,net;
	now.x=x;now.y=y;now.t=t;
	q.push(now);
	while(!q.empty()) {
		now=q.front();//取出队头元素
		q.pop();//出队
		int a=now.x;int b=now.y;int c=now.t;//便于后面码代码
		if(a==n && b==n) {//到了终点
			flag=1;//改变标志
			break;//直接退出循环
		}
		map[zx[now.t-1]][zy[now.t-1]]=1;//要点，障碍降落，因为t是从0开始，所以要减1
		for(int i=0;i<4;i++) {//枚举四个方向
			int dx=a+xx[i];int dy=b+yy[i];
			if(dx>=1 && dx<=n && dy>=1 && dy<=n && map[dx][dy]==0 && vis[dx][dy]==0) {//在矩阵中，无障碍，无访问
				net.x=dx;net.y=dy;net.t=c+1;//时间加加
				vis[dx][dy]=1;
				q.push(net);//进入队列
			}
		}
	}
}
int main()
{
	cin>>k;
	while(k--) {//一般是到0就结束
		cin>>n;
		memset(map,0,sizeof(map));//初始化！！
		memset(vis,0,sizeof(vis));
		flag=0;//看是否可以到达终点的标志
		for(int i=1;i<=2*n-2;i++)//输入障碍
			cin>>zx[i]>>zy[i];
        vis[1][1]=1;//起点肯定被访问了
		bfs(1,1,0);//广搜
		if(flag==1)//判断
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
