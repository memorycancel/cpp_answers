#include <iostream>
#include <algorithm>
using namespace std;

string high_add(string a,string b)
{
    // make sure a longer than b
    if(a.size()<b.size()) swap(a,b);
    // reverse a and b
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int arr[a.size()+1]={};
    for(int i=0;i<a.size();i++) arr[i]+=(a[i]-'0');
    for(int i=0;i<b.size();i++) arr[i]+=(b[i]-'0');
    // carry the arr
    for(int i=0;i<=a.size();i++)
    {
        if(arr[i]>9)
        {
            arr[i+1]+=arr[i]/10;
            arr[i]%=10;
        }
    }
    string res="";
    for(int i=a.size();i>=0;i--) res+=char(arr[i]+'0');
    // remove the 0 if the highest not carry
    if(res[0]=='0') return res.substr(1,a.size());
    else return res;
}

string high_mul(string a,string b)
{
    // make sure a longer than b
    if(a.size()<b.size()) swap(a,b);
    // reverse a and b
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int arr[a.size()+b.size()]={};
    // clever
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            arr[i+j]+=(a[i]-'0')*(b[j]-'0');
        }
    }
    // carry the arr
    for(int i=0;i<(a.size()+b.size()-1);i++)
    {
        if(arr[i]>9)
        {
            arr[i+1]+=arr[i]/10;
            arr[i]%=10;
        }
    }
    string res="";
    for(int i=(a.size()+b.size()-1);i>=0;i--) res+=char(arr[i]+'0');
    // remove the 0 if the highest not carry
    if(res[0]=='0') return res.substr(1,(a.size()+a.size()-1));
    else
        return res;
}


int main()
{
    int n;cin>>n;
    string res_str="0";
    for(int i=1;i<=n;i++)
    {
        string jiecheng="1";
        for(int j=1;j<=i;j++)
        {
            jiecheng=high_mul(jiecheng,to_string(j));
        }
        // cout<<"jiecheng:"<<i<<":"<<jiecheng<<endl;
        res_str=(high_add(res_str,jiecheng));
    }
    cout<<res_str;
    // cout<<high_mul("10","99");
    return 0;
}
