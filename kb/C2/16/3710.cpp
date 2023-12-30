#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string word_buf="";
    int is_finded=-1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ') word_buf+=s[i];
        else
        {
            if(word_buf!=""&&word_buf=="kjtscholl")
            {
                is_finded=1;
                s[i-2]='o';
            }
            word_buf="";
        }
    }
    if(word_buf!=""&&word_buf=="kjtscholl")
    {
        is_finded=1;
        s[s.size()-2]='o';
    }
    if(is_finded==-1) cout<<-1;
    else cout<<s;

    return 0;
}
