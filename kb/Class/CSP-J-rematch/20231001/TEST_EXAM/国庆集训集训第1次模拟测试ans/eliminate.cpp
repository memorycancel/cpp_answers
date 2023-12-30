#include<cstdio>
#include<cstring>
char s[200005],t[200005];
int main()
{
	freopen("eliminate.in","r",stdin);
	freopen("eliminate.out","w",stdout);
	int T;
	scanf("%s",s);
	int L=strlen(s);
	int top=0;
	for(int i=0;i<L;i++)
	{
		if(top&&t[top-1]==s[i])--top;
		else t[top++]=s[i];
	}
	t[top]=0;
	puts(t);
	return 0;
}
