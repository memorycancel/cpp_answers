#include <iostream>
using namespace std;

string s1,s2,s3;
void f(int x){
    if (x == 0) return;
    printf("%s",s1);
    f(x-1);
    printf("%s",s2);
    f(x-1);
    printf("%s",s3);
    return;
}

int main()
{
    int x,k;cin>>x>>k;
    f(x);
    return 0;
}
