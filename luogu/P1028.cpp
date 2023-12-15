#include <iostream>
#include <vector>
using namespace std;

// 暴力25分 TLE超时
// int main()
// {
//     int n;cin>>n;
//     vector<int> vi={n};
//     int res=0;
//     while(!vi.empty())
//     {
//         vector<int> tmp;
//         res+=vi.size();
//         for(int i=0;i<vi.size();i++)
//             for(int j=1;j<=vi[i]/2;j++)
//                 if(j>=1) tmp.push_back(j);
//         vi=tmp;
//     }
//     cout<<res;

//     return 0;
// }

// 1 2 3 4 5 6
// 1 2 2 4 4 6
// f[1]=1
// f[2]=2=f[1]+1
// f[3]=2=f[1]+1
// f[4]=4=f[1]+f[2]+1
// f[5]=4=f[1]+f[2]+1
// f[6]=6=f[1]+f[2]+f[3]+1

int main()
{
    int n;cin>>n;
    int f[1001]={};
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i/2;j++)
        {
            f[i]+=f[j];
        }
        f[i]++;
    }
    cout<<f[n];

    return 0;
}
