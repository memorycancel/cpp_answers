#include <iostream>
#include <stack>
using namespace std;
stack<int> x;//һ�������ֲ�������������ӵ�ջ
int main()
{
	int a,b;
	char c;
	cin>>a;//������һ�������Ժ����+��������
	int m=10000; //ע�⣺ֻ������4λ��ǰ��0 �������
	a=a%m;//����Ĳ���
	x.push(a);//ѹ��ջ��
	while(cin>>c>>b)// ע�⿴�����ɧ����
	{
		if(c=='*')//��*֮ǰ��������*֮������ֻ�����
		{
			a=x.top();
			x.pop();
			x.push(a*b%m);
		}
		else//��b����
			x.push(b);
	}
	a=0;
	while(x.size())
	{
		a+=x.top();
		a%=m;//ȡģ�����֮Դ
		x.pop();
	}
	cout<<a<<endl;
	return 0;
}
