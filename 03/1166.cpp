#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
  for (int i = 1; i <= 100; ++i)
  {
    if (i % 2 == 0)
      cout << i << endl;
  }
  return 0;
}
