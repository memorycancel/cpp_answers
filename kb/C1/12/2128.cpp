#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string n;cin>>n;
    int res=0;
    for(int i=0;i<n.size();i++)
        res+=(n[i]-'0')*pow(2,n.size()-i-1);
    cout<<res;
}
