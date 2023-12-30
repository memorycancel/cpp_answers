#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n)
{
    if(n<2) return 0;
    for(int i=2;i*i<n+1;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    string s;
    getline(cin,s);
    int N=0,M=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z') M++;
        if(s[i]>='A'&&s[i]<='Z') N++;
    }
    if(is_prime(abs(N-M)))
    {
        cout<<"Correct option"<<endl;
        cout<<abs(N-M);
    }
    else
    {
        cout<<"No Answer"<<endl;
        cout<<0;
    }
    return 0;
}
