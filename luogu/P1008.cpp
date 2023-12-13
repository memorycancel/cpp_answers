#include <iostream>
using namespace std;

// 192 384 576
// 219 438 657
// 273 546 819
// 327 654 981

bool judge(int i,int j,int k)
{
    int book[10]={};
    book[i/100]++;
    book[i%100/10]++;
    book[i%10]++;
    book[j/100]++;
    book[j%100/10]++;
    book[j%10]++;
    book[k/100]++;
    book[k%100/10]++;
    book[k%10]++;
    if(book[0]>0) return false;
    for(int i=0;i<10;i++)
    {
        if(book[i]>1) return false;
    }
    return true;
}

int main()
{
    for(int i=100;i<=999;i++)
    {
        for(int j=100;j<=999;j++)
        {
            for(int k=100;k<=999;k++)
            {
                if(judge(i,j,k)&&i*2==j&&i*3==k)
                {
                    cout<<i<<' '<<j<<' '<<k<<endl;
                }
            }
        }
    }

    return 0;
}
