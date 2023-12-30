#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word,sentence;

    getline(cin,word);
    getline(cin,sentence);
    for (int i=0;i<word.length();++i){
        word[i]=tolower(word[i]);
    }
    for (int i=0;i<sentence.length();++i){
        sentence[i]=tolower(sentence[i]);
    }
    int pos,count=0;
    int i=0;
    string current_word="";
    while(i<sentence.size())
    {
        if(sentence[i]!=' ')
        {
            current_word+=sentence[i];
        }
        else
        {
            if(current_word==word)
            {
                if(count==0)
                {
                    pos=i-word.size();
                }
                count++;
            }
            current_word="";
        }
        i++;
    }
    if(current_word==word)
    {
        count++;
    }
    if(count>0) cout<<count<<' '<<pos;
    else cout<<-1;

    return 0;
}
