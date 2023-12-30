#include <iostream>
#define ui unsigned int
using namespace std;

int main()
{
    string word;
    string sentence;
    getline(cin,word);
    getline(cin,sentence);
    for(ui i=0;i<word.size();i++)
        if(word[i]>='A'&&word[i]<='Z') word[i]+=32;
    for(ui i=0;i<sentence.size();i++)
        if(sentence[i]>='A'&&sentence[i]<='Z') sentence[i]+=32;
    // cout<<word<<endl;
    // cout<<sentence<<endl;
    string word_buf="";
    int count=0,pos=-1;
    bool flag=true;
    for(unsigned int i=0;i<sentence.size();i++)
    {
        if(sentence[i]!=' ') word_buf+=sentence[i];
        else
        {
            if(word_buf!=""&&word_buf==word)
            {
                if(flag)
                {
                    pos=i-word.size();
                    flag=false;
                }
                count++;
            }
            word_buf="";
        }
    }
    if(word_buf!=""&&word_buf==word)
    {
        if(flag)
        {
            pos=sentence.size()-word.size();
            flag=false;
        }
        count++;
    }
    if(pos==-1) cout<<-1;
    else cout<<count<<' '<<pos;

    return 0;
}
