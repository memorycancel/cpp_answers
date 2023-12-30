#include <iostream>
using namespace std;

bool duplicated(int i,int j,int k,int m,int n,int o)
{
    int book[7]={};
    book[i]++;
    book[j]++;
    book[k]++;
    book[m]++;
    book[n]++;
    book[o]++;
    for(int i=0;i<7;i++) if(book[i]>1) return 1;
    return 0;
}

int main()
{
    for(int i=1;i<7;i++)
        for(int j=1;j<7;j++)
            for(int k=1;k<7;k++)
                for(int m=1;m<7;m++)
                    for(int n=1;n<7;n++)
                        for(int o=1;o<7;o++)
                        {
                            if(duplicated(i,j,k,m,n,o)) continue;
                            if(i+j+k==k+m+n&&k+m+n==n+o+i)
                                cout<<i<<' '<<j<<' '<<k<<' '<<m<<' '<<n<<' '<<o<<endl;
                        }

    return 0;
}
