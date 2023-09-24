// 1104. 笨小猴
// 1. 列表 “一个萝卜一个坑”
// 2. 判断质数
// 36
// 2   3   4   6
// 18  12  9   6
#include <cmath>
#include <iostream>
using namespace std;

int diff(string a)
{
    int maxn = -2147483648;
    int minn = 2147483647;
    int book[26] = {0};
    for (int i = 0; i < a.size(); i++)
    {
        book[a[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (book[i] > maxn)
            maxn = book[i];
        if (book[i] < minn && book[i] != 0)
            minn = book[i];
    }
    return maxn - minn;
}

bool is_prime(int a)
{
    if (a <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    freopen("1104.in", "r", stdin); // read
    freopen("1104.out", "w", stdout); //write
    string s;
    cin >> s;
    if (is_prime(diff(s)))
        cout << "Lucky Word" << endl << diff(s);
    else
        cout << "No Answer" << endl << 0;
    return 0;
}