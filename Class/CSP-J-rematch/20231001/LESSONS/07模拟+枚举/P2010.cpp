#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

//ö�ٺ�����λ���·�+���ڣ�����졣
//
//ö�ٺ���λȻ������������ڣ��ж��Ƿ��ڷ�Χ�ڼ��ɡ�
//
//2�²���Ҫ�ж��Ƿ������꣬��Ϊ0229��������9220��
//����������92200229����9220�������ꡣ

int i,j,n,m,a,b,c,sum,ans;
int s[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
    cin>>n;
    cin>>m;
    for (i=1;i<=12;i++)//ö���º��� 
        for (j=1;j<=s[i];j++)
        {
            c=(j%10)*1000+
              (j/10)*100+
              (i%10)*10+
              (i/10);//���ǰ��λ��
            sum=c*10000+i*100+j;//����������� 
            if (sum<n||sum>m) continue;
            ans++;//ͳ�� 
        }
    cout<<ans;
    return 0;
}
