#include<iostream>
#include <stdlib.h>
using namespace std;
#define N 10000
int main(){
	int n/*����*/, m/*ˮ��ͷ��*/, a[N];
	cout << "�����ˮ��������ˮ��ͷ��" << endl;
	cin >> n >> m;
	cout << "����ÿλͬѧ��ˮ����" << endl;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int now= m + 1;/*�����Ŷӵĵ�һ��ͬѧ*/
	int sum = 0;/*�����ܽ�ˮ��ʱ��*/
	while (1){
		if (now > n)
			break;
		int min=N;
		for (int i = 1; i <= m; i++)/*����ÿ�����ٽ�ˮ����ͬѧ*/{
			if (a[i] < min)
				min = a[i];
		}
		sum = sum + min;/*���ϱ�����С��ˮ����ʱ��*/
		for (int i = 1; i <= m; i++){
			a[i] = a[i] - min;/*���ֵĽ�ˮ����ȥ��Сֵ*/
			if (a[i] == 0)/*������˽���ˮ�ˣ���ô�油����*/{
				a[i] = a[now];
				now++;/*�ŶӺ���*/
			}
		}
	}
	int max = 0;/*�����油��ͬѧ����ˮ��*/
	for (int i = 1; i <= m; i++)/*�ҵ����һ������ˮ��*/{
		if (a[i] > max)
			max = a[i];
	}
	sum = sum + max;/*��ˮ����ʱ*/
	cout <<"��ˮ��Ҫ��ʱ��Ϊ"<< sum<<endl;
	system("pause");
	return 0;
}