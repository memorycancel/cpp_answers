#include <iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int i=2,cnt=0;
    while(n>1)
    {
        while(n%i==0)
        {
            cout<<i<<' ';
            n/=i;
            cnt++;
        }
        i++;
    }
    cout<<endl<<cnt;

    return 0;
}
