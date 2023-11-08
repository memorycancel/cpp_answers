#include <iostream>
#include <map>
using namespace std;

int main()
{
	string word;
	cin>>word;
	map<char,int> mci;
	for(int i=0;i<word.size();i++)
	{
		if(mci[word[i]]) mci[word[i]]++;
		else mci[word[i]]=1; 
	}
	
	for(auto kv: mci)
	{
		cout<<kv.first<<"->"<<kv.second<<endl;
	}
	
	return 0;
}

