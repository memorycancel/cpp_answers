// 2100  弹跳的皮球
// 高 8 落地 弹 4
// 高 4 落地 弹 2
// 高 2 落地 弹 1
// 高 1 落地 弹 0

// 高 80 落地 弹 40
// 高 40 落地 弹 20
// 高 20 落地 弹 10
// 高 10 落地 弹 5
// 高 5 落地 弹 2
// 高 2 落地 弹 1
// 高 1 落地 弹 0
// 7 236
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int
    n,
    count = 0,
    distance = 0;
  cin >> n;
  while(n != 0) {
    distance += n;
    n /= 2;
    distance += n;
    count += 1;
  }
  cout << count << " " << distance << endl;

  return 0;
}
