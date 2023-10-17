#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int g[N][N],dist,max_d=-10*N,n,m;
bool vis[N];
void dfs(int st){//深度优先搜索
    for(int i=1;i<=n;i++){
        if(g[st][i]&&!vis[i]){
            cout<<st<<" -> "<<i<<" : "<<g[st][i]<<endl;
            vis[i]=1;
            dist+=g[st][i];
            dfs(i);
            cout<<"回溯到"<<st<<endl;
            dist-=g[st][i];
        }
    }
    // 走到这一层的st就无路可走了
    cout<<st<<" dist:"<<dist<<endl;
    max_d=max(max_d,dist);//统计最大深度
    vis[st]=0;//回溯
    return;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y,z;
        cin>>x>>y>>z;//读入边和对应的权值
        g[x][y]=z;
        g[y][x]=z;
    }
    for(int i=1;i<=n;i++){
        vis[i]=1;
        cout<<"从 "<<i<<" 开始："<<endl;
        dfs(i);
        cout<<"-------回到新的起点--------"<<endl;
        memset(vis,0,sizeof(vis));//记得清空标记数组
    }
    cout<<max_d;
    return 0;
}
