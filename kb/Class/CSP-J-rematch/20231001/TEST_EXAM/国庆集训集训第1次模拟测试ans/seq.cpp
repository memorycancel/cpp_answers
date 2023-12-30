#include<cstdio>
#include<cstring>
const int mo=1000000007;
typedef long long arr[3][3];
int n,T;
long long ans;
arr opt={{0,0,1},{1,0,0},{0,1,1}},b,t;
inline void mul(arr a,arr b,arr c)
{
	memset(t,0,sizeof(t));
	for(int k=0;k<3;k++)
	    for(int i=0;i<3;i++)
	        if (a[i][k])
	            for(int j=0;j<3;j++)
					t[i][j]=t[i][j]+a[i][k]*b[k][j];
	for(int i=0;i<3;i++)
	    for(int j=0;j<3;j++)
	        if (t[i][j]<mo) c[i][j]=t[i][j];
			else c[i][j]=t[i][j]%mo;
}
int main()
{
	freopen("sequence.in","r",stdin);
	freopen("sequence.out","w",stdout);
	for(scanf("%d",&T);T;T--)
	{
		scanf("%d",&n);
		arr a={{1,0,0},{0,1,0},{0,0,1}};
		memcpy(b,opt,sizeof(b));
		for(n-=3;n>0;n>>=1)
		{
			if (n&1) mul(a,b,a);
			mul(b,b,b);
		}
		ans=(a[2][0]+a[2][1]+a[2][2])%mo;
		printf("%d\n",ans);
	}
	return 0;
}
