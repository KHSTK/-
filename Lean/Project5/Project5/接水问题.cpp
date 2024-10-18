#include<iostream>
#include <stdlib.h>
using namespace std;
#define N 10000
int main(){
	int n/*人数*/, m/*水龙头数*/, a[N];
	cout << "输入接水的人数和水龙头数" << endl;
	cin >> n >> m;
	cout << "输入每位同学接水的量" << endl;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int now= m + 1;/*定义排队的第一个同学*/
	int sum = 0;/*计算总接水的时间*/
	while (1){
		if (now > n)
			break;
		int min=N;
		for (int i = 1; i <= m; i++)/*计算每轮最少接水量的同学*/{
			if (a[i] < min)
				min = a[i];
		}
		sum = sum + min;/*加上本轮最小接水量的时间*/
		for (int i = 1; i <= m; i++){
			a[i] = a[i] - min;/*本轮的接水量减去最小值*/
			if (a[i] == 0)/*如果有人接完水了，那么替补跟上*/{
				a[i] = a[now];
				now++;/*排队后移*/
			}
		}
	}
	int max = 0;/*所有替补的同学接完水后*/
	for (int i = 1; i <= m; i++)/*找到最后一轮最大接水量*/{
		if (a[i] > max)
			max = a[i];
	}
	sum = sum + max;/*接水量用时*/
	cout <<"接水需要总时间为"<< sum<<endl;
	system("pause");
	return 0;
}