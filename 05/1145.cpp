#include <iostream>
using namespace std;

int main()
{
	double height, weight;
	cin >> weight >> height; // ע�������ʱ��Ҫ����ߺ�����Ū���ˣ����� 
	double BMI = weight / (height * height);

	if(BMI < 18.5)
		cout << "ƫ��" << endl;
	else if(BMI < 20.9)
		cout << "����" << endl;
	else if(BMI < 24.9)
		cout << "����" << endl;
	else
		cout << "ƫ��" << endl;
	
	return 0;
}

