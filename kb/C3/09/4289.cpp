#include <iostream>
#include <cmath>
using namespace std;

bool is_shuixianhua(int i)
{
    string s_i=to_string(i);
    int a=s_i[0]-'0';
    int b=s_i[1]-'0';
    int c=s_i[2]-'0';
    return pow(a,3)+pow(b,3)+pow(c,3)==i;
}

void print_shuixianhuashu()
{
    for(int i=100;i<1000;i++)
    {
        if(is_shuixianhua(i)) cout<<i<<' ';
    }
}

int main()
{
    print_shuixianhuashu();
    return 0;
}
