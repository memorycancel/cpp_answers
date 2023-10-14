#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    stringstream ss;

    for(int i=1;i<=n;i++)ss<<i;
    string sss=ss.str();
    cout<<count(sss.begin(),sss.end(),x+'0');

    return 0;
}
