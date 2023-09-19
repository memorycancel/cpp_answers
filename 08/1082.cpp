#include <iostream>

using namespace std;

// 读题模拟，一次过。
// 变量声明 
int main()
{
	string ret_name;
	int max_prize=0, sum_prize=0, n;
	cin >> n;
		
	for(int i=0; i<n; ++i)
	{
		int qimo, banji, lunwen;
		string name;
		char is_bangan, is_xibu;
		cin >> name >> qimo >> banji >>
		is_bangan >> is_xibu >> lunwen;
		int current_prize = 0;
		if(qimo > 80 && lunwen >= 1)
			current_prize += 8000;
		if(qimo > 85 && banji > 80)
			current_prize += 4000;
		if(qimo > 90)
			current_prize += 2000;
		if(qimo > 85 && is_xibu == 'Y')
			current_prize += 1000;
		if(banji > 80 && is_bangan == 'Y')
			current_prize += 850;
			
		if(max_prize < current_prize)
		{
			max_prize = current_prize;
			ret_name = name;
		}
		sum_prize += current_prize;
	}
	
	cout << ret_name << endl;
	cout << max_prize << endl;
	cout << sum_prize << endl;
	
	return 0;
}
