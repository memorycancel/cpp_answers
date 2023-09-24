// 2052  除法运算

#include <iostream>
#include <cstdio>
using namespace std;

int during_sum(int m, int n)
{
  int sum = 0;
  for (int i = m; i <= n; ++i)
  {
    sum += i;
  }
  return sum;
}

int main()
{
  int m = 100;
  int n = 200;

  int res = during_sum(100, 200);

  cout << res << endl;

  return 0;
}
