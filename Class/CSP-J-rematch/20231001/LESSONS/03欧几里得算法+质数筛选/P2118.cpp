#include <iostream>
using namespace std;

//ŷ������㷨�ֳ�շת�������
//��ָ���ڼ��������Ǹ�����a��b�����Լ����
int gcd(int x,int y)
{
    if(y==0) return x;
    return gcd(y,x%y);
}

int main()
{
    int i,j,a,b,ansa,ansb,l;
    cin>>a>>b>>l;
    ansa=l;ansb=1;
    //LС�ڵ���100�������ֱ��ö�ٷ��Ӻͷ�ĸ��
	//���Կ������ӷ�ĸ��ö�ٷ�Χ����1��L
    for(i=1;i<=l;i++)
        for(j=1;j<=l;j++)
            if(gcd(i,j)==1&& // ���ӷ�ĸ�����Լ��Ϊ1��Լ������
				i*b>=j*a&& //������˷� A'B >=AB'
				i*ansb<j*ansa)
            {
                ansa=i;
                ansb=j;
            }
    cout<<ansa<<' '<<ansb;
    return 0;
}
