#include<iostream>
using namespace std;

//其实这题完全没必要很多的if语句，把幻方扩展开来，
//题目的意思就是从第一行中点开始，把每一个下面的数
//放到“右上角”，若右上角有数，则放到正下方。

void ans1()
{
	int n;
	cin >> n;
	int a[40][40] = {};
	int x=1;//起始位置为：第一行
	int y=(n+1)/2;//起始位置为：行的中间列
	for(int i=1;i<=n*n;i++)
	{
		a[x][y]=i;
		if(!a[(x-2+n)%n+1][y%n+1]) x=(x-2+n)%n+1,y=y%n+1;
		else x=x%n+1;//数学运算
	}

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}

// 纯模拟
void ans2()
{
	int a[40][40] = {};
	int n;
    std::cin >> n;            
    int step = 1;     // 填到几了
    int posx, posy; // 上一个点坐标
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
