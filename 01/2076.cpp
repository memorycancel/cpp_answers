// 2076  输出三角形

#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
  for (int i = 1; i <=3; ++i)
  {
    for (int j = 1; j <=i; ++j)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}