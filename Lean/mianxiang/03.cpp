#include<iostream>
#include<stdio.h>
#include<time.h>
#define N 5
using namespace std;
int main() {
	int i, j, max,maxj,m = 0;
	int a[N][N];
	srand(time(NULL));
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			a[i][j]=rand()%10+1;
		}
	}
	cout << "该数组是" << endl;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			cout<<a[i][j]<<"\t";
		}
		cout << endl;
	}
	for (i = 0; i < N; i++) {
		max = a[i][0];//行最大
		maxj = 0;  //行最大的列标
		for (j = 0; j < N; j++) {
			if (max < a[i][j]) {
				max = a[i][j];
				maxj = j;//行最大的列标
			}
		}
		for (m= 0; m < N; m++) {
			if (max > a[m][maxj]) {
				break;
			}
		}
		if (m ==N) {
			cout << "二维数组的鞍点是" << "a[" << i << "][" << maxj << "]=" << max << endl;
			break;
		}
	}
	if (i == N) {
		cout << "该数组没有鞍点" << endl;
	}
	return 0;
}
