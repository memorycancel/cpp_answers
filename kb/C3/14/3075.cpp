#include <iostream>
#include <map>
using namespace std;

// This answer's score: 90

// 10
// 510   410   310  210  110
// 2510  1510  2410 1410 1310 1210
// 12510 12410

map<string,int> umsi;
int to_int(string s)
{
    if(umsi[s]) return umsi[s];
    int num=0;
    for(int i=0;i<s.size();i++)
    {
        num=10*num+(s[i]-'0');
    }
    umsi[s]=num;
    return num;
}

int res=1;
void calc(string n)
{
    int t=to_int(n)/2;
    if(t==0) return;
    for(int i=1;i<=t;i++)
    {
        // cout<<to_string(i)+n<<endl;
        res++;
        calc(to_string(i));
    }
    
}

int main()
{
    string n;cin>>n;
    calc(n);
    cout<<res;
    return 0;
}
