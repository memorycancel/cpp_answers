#include<iostream>
using namespace std;

//��ʵ������ȫû��Ҫ�ܶ��if��䣬�ѻ÷���չ������
//��Ŀ����˼���Ǵӵ�һ���е㿪ʼ����ÿһ���������
//�ŵ������Ͻǡ��������Ͻ���������ŵ����·���

void ans1()
{
	int n;
	cin >> n;
	int a[40][40] = {};
	int x=1;//��ʼλ��Ϊ����һ��
	int y=(n+1)/2;//��ʼλ��Ϊ���е��м���
	for(int i=1;i<=n*n;i++)
	{
		a[x][y]=i;
		if(!a[(x-2+n)%n+1][y%n+1]) x=(x-2+n)%n+1,y=y%n+1;
		else x=x%n+1;//��ѧ����
	}

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}

// ��ģ��
void ans2()
{
	int a[40][40] = {};
	int n;
    std::cin >> n;            
    int step = 1;     // �����
    int posx, posy; // ��һ��������
    while (step <= n * n) {
        if (step == 1) 
            a[posx = 1][posy = n / 2 + 1] = step++;
        else if (posx == 1 && posy != n) 
            a[posx = n][++posy] = step++;
        else if (posx != 1 && posy == n) 
            a[--posx][posy = 1] = step++;
        else if (posx == 1 && posy == n) 
            a[++posx][posy] = step++;
        else if (posx != 1 && posy != n)
            if (a[posx - 1][posy + 1] == 0)
                a[--posx][++posy] = step++;
            else
                a[++posx][posy] = step++;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j)
            std::cout << a[i][j] << " ";
        std::cout << std::endl;
    }
}

int main()
{
	ans2();
	return 0;
}
