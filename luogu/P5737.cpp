#include <iostream>
#include <vector>

using namespace std;

bool is_run(int year)
{
    if(year%400==0) return 1;
    else if(year%100==0) return 0;
    else if(year%4==0) return 1;
    else return 0;
}

int main()
{
    int from=0,to=0;
    cin>>from>>to;
    vector<int> vi;
    for(int year=from;year<=to;year++)
        if(is_run(year)) vi.push_back(year);
    cout<<vi.size()<<endl;
    for(int i=0;i<vi.size();i++)
        cout<<vi[i]<<' ';

    return 0;
}
