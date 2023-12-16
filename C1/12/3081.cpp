#include <iostream>
using namespace std;

//1
//2 2
//3 3 3
//4 4 4 4

// int main()
// {
//  for(int i=1; i*(i-1)<=2*k; i++)
//  {
//      for(int j=1; j<=i; j++)
//      {
//          sum += i;
//      }
//  }
//  return 0;
// }


int main()
{
    int n;
    cin>>n;
    int i=1;
    int res=0;
    int day=0;
    while(1)
    {
        for(int j=0;j<i;j++)
        {
            day++;
            res+=i;
            if(day==n)
            {
                cout<<res;
                return 0;
            }
        }
        i++;
    }

    return 0;
}
