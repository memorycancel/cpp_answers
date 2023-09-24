// 1153 一分钟倒计时

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    cout << "00:01:00" << endl;
    for(int i=59; i>=0; --i)
    {
        cout << "00:00:" << i << endl;
    }
    return 0;
}
