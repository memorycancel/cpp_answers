#include <iostream>
using namespace std;

int main()
{
    double sum=0.0;
    int n=0;
    double k;cin>>k;
    while(sum<k)
    {
        n++;
        sum+=1.0/n;
    }
    cout<<n;
    return 0;
}
