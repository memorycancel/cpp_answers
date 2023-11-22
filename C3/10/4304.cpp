#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if(n<2) return false;
    for(int i=2;i*i<n+1;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

bool is_perfect(int n)
{
    string n_s=to_string(n);
    int sum=0;
    for(int i=0;i<n_s.size();i++)
    {
        if(n_s[i]!='3'&&n_s[i]!='5') return false;
        sum+=n_s[i]-'0';
    }
    // *if this line below moving to top
    // will be TLE ERROR!
    if(!is_prime(n)) return false;
    return is_prime(sum);
}

int main()
{
    int a,b;cin>>a>>b;
    int count=0;
    for(int i=a;i<=b;i++)
    {
        if(is_perfect(i))
        {
            cout<<i<<' ';
            count++;
        }
    }
    if(count==0) cout<<"此范围内无完美数！";
    return 0;
}
