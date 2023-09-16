#include <iostream>
using namespace std;

int main()
{
	double height, weight;
	cin >> weight >> height; // 注意输入的时候不要把身高和体重弄反了！！！ 
	double BMI = weight / (height * height);

	if(BMI < 18.5)
		cout << "偏瘦" << endl;
	else if(BMI < 20.9)
		cout << "苗条" << endl;
	else if(BMI < 24.9)
		cout << "适中" << endl;
	else
		cout << "偏胖" << endl;
	
	return 0;
}

