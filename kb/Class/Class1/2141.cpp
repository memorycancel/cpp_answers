#include <cstdio>
#include <iostream>
using namespace std;

// 找到最高和最低分的和
// 打擂台
int find(int scores[10])
{
    int min = 2147483647, max = -2147483648;
    for(int i = 0; i < 10; i++)
    {
        if(scores[i] > max)
            max = scores[i];
        if(scores[i] < min)
            min = scores[i];
    }
    return min + max;
}

int main()
{
    // freopen("2141.in", "r", stdin); // read
    // freopen("2141.out", "w", stdout); //write

    int scores1[10], scores2[10];
    int sum1 = 0, sum2 = 0;
    for(int i=0;i<10;i++)
    {
        cin>>scores1[i];
    }
    for(int i=0;i<10;i++)
    {
        cin>>scores2[i];
    }
    for(int i=0;i<10;i++)
    {
        sum1 += scores1[i];
        sum2 += scores2[i];
    }

    cout << (sum1 - find(scores1)) / 8;
    cout << " " << (sum2 - find(scores2)) / 8;
    return 0;
}