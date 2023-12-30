#include <iostream>
using namespace std;

int yd[12]={31,28,31,30,31,30,31,31,30,31,30,31};

bool is_run_year(int n)
{
    if(n%400==0) return true;
    else if(n%100==0) return false;
    else if(n%4==0) return true;
    else return false;
}

int main()
{
    // start from year: 1900
    int year=1900;
    int current_week_day=1;
    int week_day_count[8]={};
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int current_year=year+i;
        if(is_run_year(current_year)) yd[1]=29;
        else yd[1]=28;
        for(int j=0;j<12;j++)
        {
            for(int day=1;day<=yd[j];day++)
            {
                if(current_week_day==7) current_week_day=1;
                else current_week_day++;
                if(day==13)
                {
                    week_day_count[current_week_day]++;
                }
            }
        }
    }
    cout<<week_day_count[7]<<' ';
    for(int i=1;i<7;i++)
    {
        cout<<week_day_count[i]<<' ';
    }
    
    return 0;
}
