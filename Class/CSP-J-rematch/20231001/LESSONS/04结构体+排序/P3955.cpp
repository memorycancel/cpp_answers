#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int n,q,l,code;//lΪ�����볤�ȣ�codeΪ������
int book[1005];//�洢ͼ��ݱ��
//����ȡģ��mod[i]��ʾһ����ȡ��iλҪģ����
int mod[9]={0,10,100,1000,10000,100000,1000000,10000000,100000000};
int judge(){//�����������ҵ��ı��
    for(int i=1;i<=n;i++){
        if(book[i]%mod[l]==code) return book[i];//�����i��ͼ�����ĺ�lλ���õ���code,��ô���ҵ��˶�Ӧ����
    }
    return -1;
}
int main(){
    cin>>n>>q;
    for(int i=1;i<=n;i++) cin>>book[i];
    sort(book+1,book+1+n);//STL���ţ���С��������ȷ���ҵ�������С����
    for(int i=1;i<=q;i++){
        cin>>l>>code;
        cout<<judge()<<endl;
    }
    return 0;
}
