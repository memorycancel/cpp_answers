#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string,int> msi;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        string no;
        int score;
        cin>>no>>score;
        msi[no]=score;
    }
    string q_no;
    cin>>q_no;
    if(msi[q_no]) cout<<msi[q_no];
    else cout<<"na";

    return 0;
}
