#include<cstdio>
#include<ctime>
const int mo=1000000007;
int n,a,b,c,d,T;
int main()
{
	freopen("sequence.in","r",stdin);
	freopen("sequence.out","w",stdout);
	for(scanf("%d",&T);T;T--)
	{
		scanf("%d",&n);
		a=b=c=1;
		for(int i=3;i<n;i++)
		{
			d=c+a;
			if (d>=mo) d-=mo;
		    a=b;b=c;c=d;
		}
		printf("%d\n",&c);
	}

}

