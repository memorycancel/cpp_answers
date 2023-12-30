// 1155.输出三角形（@）

#include <iostream>
#include <cstdio>
using namespace std;

int print_trangle()
{
  for(int i=1; i<=3; ++i)
  {
    for(int j=0; j<i; ++j)
    {
      cout << '@';
    }
    cout << endl;
  }
  return 0;
}

int main(int argc, char const *argv[])
{
  print_trangle();
  return 0;
}
