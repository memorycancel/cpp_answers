#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(n>1)
    {
        i++;
        while(n%i==0)
        {
            n/=i;
        }
        
    }
    cout<<i;
    
    return 0;
}

