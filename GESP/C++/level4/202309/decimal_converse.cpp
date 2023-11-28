#include <iostream>
#include <cmath>
using namespace std;

int to_digit(char c)
{
    if(c<='9') return c-'0';
    return c-'A'+10;
}

long long deci_conv(int decimal,string num)
{
    long long res=0;
    for(int i=0;i<num.size();i++)
    {
        res+=to_digit(num[i])*pow(decimal,num.size()-i-1);
    }
    return res;
}

int main()
{
    int n=0;cin>>n;
    for(int i=0;i<n;i++)
    {
        int decimal;
        string num;
        cin>>decimal>>num;
        cout<<deci_conv(decimal,num)<<endl;
    }

    return 0;
}
