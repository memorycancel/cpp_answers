#include <iostream>
using namespace std;

// 4    years    run
// 100  years no run
// 400  year     run again
bool is_run(int year)
{
    if(year%400==0) return 1;
    else if(year%100==0) return 0;
    else if(year%4==0) return 1;
    else return 0;
}

int main()
{
    int year;cin>>year;
    cout<<is_run(year);

    return 0;
}
