#include <iostream>
using namespace std;

bool duplicated(int i,int j,int k, int m, int n)
{
    int book[10]={};
    book[i]++;
    book[j]++;
    book[k]++;
    book[m]++;
    book[n]++;
    for(int i=0;i<10;i++) if(book[i]>1) return 1;
    return 0;
}

int main()
{
    for(int i=1;i<10;i++)
        for(int j=0;j<10;j++)
            for(int k=0;k<10;k++)
                for(int m=0;m<10;m++)
                    for(int n=0;n<10;n++)
                    {
                        if(duplicated(i,j,k,m,n)) continue;
                        if((i*1000+j*100+k*10+m)*n==m*1000+k*100+j*10+i)
                            cout<<i<<' '<<j<<' '<<k<<' '<<m<<' '<<n;
                    }

    return 0;
}
