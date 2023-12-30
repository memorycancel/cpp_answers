#include <iostream>
#include <cmath>
#include <map>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    m=floor(m*1.5);
    map<int,int> m_id_score;
    map<int,int> m_score_count;
    for(int i=0;i<n;i++)
    {
    	int id,score;
    	cin>>id>>score;
    	m_id_score[id]=score;
    	if(m_score_count[score]) m_score_count[score]++;
    	else m_score_count[score]=1;
	}
	// the variable must be initialized
	int score_line=0;
	int candidates=0;
	// from high score to low score
	for(auto it=m_score_count.rbegin();it!=m_score_count.rend();it++)
	{
		candidates+=it->second;
		if(candidates>=m)
		{
			score_line=it->first;
			break;
		}
	}
	// print the id and scores
	cout<<score_line<<' '<<candidates<<endl;
	for(auto it=m_score_count.rbegin();it!=m_score_count.rend();it++)
	{
		for(auto kv:m_id_score)
		{
			if(kv.second==it->first)
			{
				cout<<kv.first<<' '<<kv.second<<endl;
			}
		}
		if(it->first==score_line) break;
	}

    return 0;
}
