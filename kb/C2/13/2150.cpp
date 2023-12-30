#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[10];
    char s2[10];
    // must use the third var des[20]
    // or can not resolve the null string
    char des[20];
    cin>>s1>>s2;
    strcat(des,s1);
    strcat(des,s2);
    cout<<des;
    return 0;
}
