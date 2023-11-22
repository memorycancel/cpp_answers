#include <iostream>
#include <vector>
using namespace std;

double avg(vector<double> vi)
{
    double sum=0;
    for(int i=0;i<vi.size();i++)
    {
        sum+=vi[i];
    }
    return double(sum/vi.size());
}

int main()
{
    int n;cin>>n;
    vector<double> vi;
    for(int i=0;i<n;i++)
    {
        double t;
        cin>>t;
        vi.push_back(t);
    }
    cout<<avg(vi);

    return 0;
}
