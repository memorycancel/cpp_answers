#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;cin>>n;
    for(int i=1;i<sqrt(n);i++)
    {
        if(n%i) continue;
        cout<<n<<'='<<i<<'*'<<n/i<<endl;
    }

    return 0;
}
