#include <iostream>
using namespace std;

//欧几里得算法又称辗转相除法，
//是指用于计算两个非负整数a，b的最大公约数。
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
    //L小于等于100，则可以直接枚举分子和分母。
	//可以看出分子分母的枚举范围都是1到L
    for(i=1;i<=l;i++)
        for(j=1;j<=l;j++)
            if(gcd(i,j)==1&& // 分子分母的最大公约数为1就约不动了
				i*b>=j*a&& //交叉相乘法 A'B >=AB'
				i*ansb<j*ansa)
            {
                ansa=i;
                ansb=j;
            }
    cout<<ansa<<' '<<ansb;
    return 0;
}
