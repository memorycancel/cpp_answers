#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int n,q,l,code;//l为需求码长度，code为需求码
int book[1005];//存储图书馆编号
//方便取模，mod[i]表示一个数取后i位要模多少
int mod[9]={0,10,100,1000,10000,100000,1000000,10000000,100000000};
int judge(){//函数，返回找到的编号
    for(int i=1;i<=n;i++){
        if(book[i]%mod[l]==code) return book[i];//如果第i个图书编码的后l位正好等于code,那么就找到了对应的数
    }
    return -1;
}
int main(){
    cin>>n>>q;
    for(int i=1;i<=n;i++) cin>>book[i];
    sort(book+1,book+1+n);//STL快排，从小到大排序，确保找到的是最小的数
    for(int i=1;i<=q;i++){
        cin>>l>>code;
        cout<<judge()<<endl;
    }
    return 0;
}
