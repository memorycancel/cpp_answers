#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int gou,res=0;
class statistics{
	public:
		bool operator()(int value)
		{
			return value<=gou;
		}
};

int main()
{
	vector<int> apples(10);
	for(int i=0;i<10;i++) cin>>apples[i];
	cin>>gou;
	gou+=30;
	res=count_if(apples.begin(),apples.end(),statistics());
	cout<<res;
		
	return 0;
}

