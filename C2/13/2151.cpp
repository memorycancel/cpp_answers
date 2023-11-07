#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[10];
    char s2[10];
    cin>>s1>>s2;
    // as same as strcat
    // need a null var
    char tmp[10];
    strcpy(tmp,s1);
    strcpy(s1,s2);
    strcpy(s2,tmp);
    cout<<s1<<' '<<s2;

    return 0;
}
