// 1
// 2 2
// 3 3 3
// 4 4 4 4

#include <iostream>
using namespace std;

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
