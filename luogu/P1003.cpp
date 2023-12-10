#include <iostream>
using namespace std;

int x=0,y=0;
bool is_cover(int a,int b,int g,int k)
{
    return x>=a&&x<=a+g&&y>=b&&y<=b+k;
}

int main()
{
    int n;cin>>n;
    int res=-1;
    int carpets[n+1][4]={};
    for(int i=1;i<=n;i++)
    {
        cin>>carpets[i][0]>>carpets[i][1]
           >>carpets[i][2]>>carpets[i][3];
    }
    cin>>x>>y;
    for(int i=1;i<=n;i++)
    {
        if(
            is_cover(
                carpets[i][0],carpets[i][1],
                carpets[i][2],carpets[i][3]
            )
        )   res=i;
    }

    cout<<res;

    return 0;
}
