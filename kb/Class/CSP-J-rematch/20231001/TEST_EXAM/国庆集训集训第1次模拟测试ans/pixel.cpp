#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int f[1010][2];
int n,m,x,y;
char a[1010][1010];
int col[1010][2],tot[1010][2];

int main(){
	freopen("pixel.in","r",stdin);
	freopen("pixel.out","w",stdout);
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			scanf("%c",&a[i][j]);
		scanf("\n");
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[j][i]=='.') col[i][0]++;
			else col[i][1]++;
		}
		tot[i][0]=col[i][0]+tot[i-1][0];
		tot[i][1]=col[i][1]+tot[i-1][1];
	}
	memset(f,0x3f,sizeof(f));
	f[0][0]=f[0][1]=0;
	for(int i=1;i<=m;i++){
		for(int j=i-x;j>=i-y && j>=0;j--){
			f[i][0]=min(f[i][0],f[j][1]+tot[i][1]-tot[j][1]);
			f[i][1]=min(f[i][1],f[j][0]+tot[i][0]-tot[j][0]);
		}
	}
	cout<<min(f[m][0],f[m][1]);
	return 0;
}


 
