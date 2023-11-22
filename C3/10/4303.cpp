#include <iostream>
using namespace std;

void common_var(int a,int b)
{
    int greater_num=max(a,b);
    int less_num=min(a,b);
    for(int i=less_num;i>1;i--)
    {
        if(less_num%i==0&&greater_num%i==0)
        {
            cout<<i;
            return;
        }
    }
    cout<<"»¥ÖÊ";
}

int main()
{
    int a,b;
    cin>>a>>b;
    common_var(a,b);
    return 0;
}
