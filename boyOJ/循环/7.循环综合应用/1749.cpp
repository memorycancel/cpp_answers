#include <iostream>
using namespace std;

bool is_run(int i)
{
    if(i%400==0) return 1;
    else if(i%100==0) return 0;
    else if(i%4==0) return 1;
    else return 0;
}

int main()
{
    int n,cnt=0;cin>>n;
    for(int i=1900;i<=n;i++)
        if(is_run(i)) cnt++;
    cout<<cnt;

    return 0;
}
