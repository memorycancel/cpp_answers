#include <iostream>
using namespace std;

char trans_digit(int d)
{
    char a[11]={'0','7','5','3','1','8','6','4','2','9'};
    return a[d];
}

string trans_num_s(string num_s)
{
    for(int i=num_s.size()-1;i>=0;i--)
    {
        if((num_s.size()-i)%2)
            num_s[i]=trans_digit(num_s[i]-'0');
    }
    return num_s;
}

string is_lucky_num(string s)
{
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=s[i]-'0';
    }
    return sum%8==0 ? "T":"F";
}

int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        string num;
        cin>>num;
        cout<<is_lucky_num(trans_num_s(num))<<endl;
    }

    return 0;
}
