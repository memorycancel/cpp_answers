#include <iostream>
using namespace std;

int main()
{
    int x,y,z,money;
    cin>>x;
    cin>>y;
    cin>>z;
    cin>>money;
    int spent=x*2+y*5+z*3;
    if(spent<=money)
    {
        cout<<"Yes"<<endl;
        cout<<money-spent;
    }
    else
    {
        cout<<"No"<<endl;
        cout<<spent-money;
    }

    return 0;

}
