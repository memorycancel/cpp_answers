#include <iostream>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    char alpha[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>alpha[i][j];
        }
    }

    int i,j;cin>>i>>j;
    i--;j--;
    int book[27]={};
    if(j+1<m&&alpha[i][j+1]) book[alpha[i][j+1]-'A']++;
    if(j-1>=0&&alpha[i][j-1]) book[alpha[i][j-1]-'A']++;
    if(i+1<n&&alpha[i+1][j]) book[alpha[i+1][j]-'A']++;
    if(i-1>=0&&alpha[i-1][j]) book[alpha[i-1][j]-'A']++;
    if(i+1<n&&j+1<m&&alpha[i+1][j+1]) book[alpha[i+1][j+1]-'A']++;
    if(i-1>=0&&j-1>=0&&alpha[i-1][j-1]) book[alpha[i-1][j-1]-'A']++;
    if(i-1>=0&&j+1<m&&alpha[i-1][j+1]) book[alpha[i-1][j+1]-'A']++;
    if(i+1<n&&j-1>=0&&alpha[i+1][j-1]) book[alpha[i+1][j-1]-'A']++;

    int max_num=0;
    for(int i=0;i<27;i++)
    {
        if(book[i]>max_num) max_num=book[i];
    }
    for(int i=0;i<27;i++)
    {
        if(book[i]==max_num)
        {
            cout<<char('A'+i)<<' '<<book[i];
            return 0;
        }
    }

    return 0;
}
