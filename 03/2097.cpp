// 2097  1打印到100再到1

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for(int i=1; i<=n; ++i)
    cout << i << " ";
  for(int i=n-1; i>=1; --i)
    cout << i << " ";

  return 0;
}
