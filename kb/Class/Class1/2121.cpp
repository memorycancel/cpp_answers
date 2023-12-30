// 2121. 填数游戏（进阶版）
#include <cstdio>
#include <iostream>
using namespace std;

//检查是否相同
int check(int a, int b, int c, int d, int e)
{
    int book[10] = {0};
    book[a]++;
    book[b]++;
    book[c]++;
    book[d]++;
    book[e]++;
    for (int i = 0; i <= 9; i++)
    {
        if (book[i] > 1)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    // freopen("2121.in", "r", stdin); // read
    // freopen("2121.out", "w", stdout); //write
    for (int a = 0; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                for (int d = 0; d <= 9; d++)
                {
                    for (int e = 0; e <= 9; e++)
                    {
                        if (((a * 1000 + b * 100 + c * 10 + d) * e) ==
                                (d * 1000 + c * 100 + b * 10 + a))
                        {
                            if (check(a, b, c, d, e))
                            {
                                cout << a << " " << b << " " << c << " " << d
                                     << " " << e;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}