#include <iostream>
#define ll long long
using namespace std;

// TLE ERROR
ll slow_climb(ll n)
{
    if(n<3) return n;
    if(n==3) return 4;
    return slow_climb(n-1)+slow_climb(n-2)+slow_climb(n-3);
}

// BEST ANSWER
ll climb(ll n)
{
    if(n<3) return n;
    if(n==3) return 4;
    ll pre3=1,pre2=2,pre1=4,current;
    for(int i=4;i<=n;i++)
    {
        current=pre3+pre2+pre1;
        pre3=pre2;
        pre2=pre1;
        pre1=current;
    }
    return current;
}

int main()
{
    ll n;cin>>n;
    cout<<climb(n);
    return 0;
}
