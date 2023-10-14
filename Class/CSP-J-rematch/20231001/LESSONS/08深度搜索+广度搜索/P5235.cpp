#include <iostream>
using namespace std;

//枚举后面四位（月份+日期）会更快。
//枚举后四位然后求出整个日期，判断是否在范围内即可。
//2月不需要判断是否是闰年，因为0229反过来是9220，
//整个日期是92200229，而9220年是闰年。

int main()
{
	int i,j,n,m,c,sum,ans;
	int s[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	
	cin>>n;
	cin>>m;
	for (i=1;i<=12;i++)//枚举月和日 
	    for (j=1;j<=s[i];j++)
	    {
	        c=(j%10)*1000+
	          (j/10)*100+
	          (i%10)*10+
	          (i/10);//算出前四位。
	        sum=c*10000+i*100+j;//算出整个日期 
	        if (sum<n||sum>m) continue;
	        ans++;//统计 
	    }
	cout<<ans;
	return 0;
}
