#include <iostream>
using namespace std;

//ע��Ҫ������������Ǽ��֡�����
//����1+4=5��2+3=5��һ�ֲ������֣�������
int main()
{
	int a[100];
	int n;
	int num=0;   //������
	int v[19999] = {};  //�ж�ȥ��
    cin >> n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<n;i++)   //��߽�
       for(int j=i+1;j<=n;j++)   //�ұ߽�
          for(int k=1;k<=n;k++)   //���Ա���
             if(k!=i&&k!=j&&i!=j&&a[i]+a[j]==a[k]&&v[k]==0)   //û���������Ҳ��Ǳ߽�
                {
                   num++;
                   v[k]=1;   //�ù���~
                }
    cout << num;
    return 0;
}
