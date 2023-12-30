#include <iostream>
#include <vector>
using namespace std;

void print_xing(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<'*';
    }
    cout<<endl;
}

int main()
{
    int n;cin>>n;
    vector<int> vi;
    if(n==1) vi.push_back(1);
    else if(n==2)
    {
        vi.push_back(1);
        vi.push_back(1);
    }
    else
    {
        vi.push_back(1);
        vi.push_back(1);
        int pre=1,prepre=1,current;
        for(int i=3;i<=n;i++)
        {
            current=pre+prepre;
            vi.push_back(current);
            prepre=pre;
            pre=current;
        }
    }
    for(int i=0;i<n;i++)
    {
        print_xing(vi[i]);
    }
    for(int i=n-2;i>=0;i--)
    {
        print_xing(vi[i]);
    }
    
    return 0;
}
