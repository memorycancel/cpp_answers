#include <iostream>
using namespace std;

int main()
{
    int apples[10];
    for(int i=0;i<10;i++) cin>>apples[i];
    int high; cin>>high;
    int res=0;
    for(int i=0;i<10;i++)
        if(high+30>=apples[i]) res++;
    cout<<res;

    return 0;
}
