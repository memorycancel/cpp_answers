#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool is_zimishu(int n)
{
    string str_n=to_string(n);
    int n_len=str_n.size();
    int sum=0;
    for(int i=0;i<n_len;i++)
    {
        int digit=str_n[i]-'0';
        sum+=pow(digit,n_len);
    }
    return sum==n;
}

int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(is_zimishu(a[i])) cout<<'T'<<endl;
        else cout<<'F'<<endl;
    }
    return 0;
}
