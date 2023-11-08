#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char,int>mci;
    mci[' ']=1;
    mci['a']=1;
    mci['b']=2;
    mci['c']=3;
    mci['d']=1;
    mci['e']=2;
    mci['f']=3;
    mci['g']=1;
    mci['h']=2;
    mci['i']=3;
    mci['j']=1;
    mci['k']=2;
    mci['l']=3;
    mci['m']=1;
    mci['n']=2;
    mci['o']=3;
    mci['p']=1;
    mci['q']=2;
    mci['r']=3;
    mci['s']=4;
    mci['t']=1;
    mci['u']=2;
    mci['v']=3;
    mci['w']=1;
    mci['x']=2;
    mci['y']=3;
    mci['z']=4;
    string s;
    getline(cin,s);
    int res=0;
    for(int i=0;i<s.size();i++)
        res+=mci[s[i]];
    cout<<res;
    return 0;
}
