#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int m_bucket[201]={};
	int f_bucket[201]={};
	for(int i=0;i<n;i++)
	{
		char sex;
		double hei;
		cin>>sex>>hei;
		if(sex=='m') m_bucket[int(hei*100.0)]++;
		else f_bucket[int(hei*100.0)]++;
	}
	for(int i=0;i<201;i++)
		if(m_bucket[i]>0)
			for(int j=0;j<m_bucket[i];j++)
				//cout<<setprecision(3)<<i/100.0<<' ';
				printf("%.2lf ",i/100.0);
			
	for(int i=201;i>0;i--)
		if(f_bucket[i]>0)
			for(int j=0;j<f_bucket[i];j++)
				printf("%.2lf ",i/100.0);
	return 0;
}

