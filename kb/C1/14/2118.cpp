#include <iostream>
using namespace std;

// soliution 1
// int main()
// {
//     int n, sum = 0;
//     cin >> n;
//     for(int i = 0; i < 3; i++)
//     {
//         sum += n % 10;
//         n /= 10;
//     }
//     cout << sum;

//     return 0;
// }

// solution 2
int main()
{
    int n, sum = 0;
    cin >> n;
    for(int i = n; i!=0; i/=10)
    {
        sum += i % 10;
    }
    cout << sum;

    return 0;
}
