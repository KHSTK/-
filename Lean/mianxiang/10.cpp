#include<iostream>
#include"tiji.h"
using namespace std;
int main() {
	tiji V1, V2, V3;
	cout << "��һ��������ĳ����" << endl;
	V1 = V1.Create();
	cout << "�ڶ���������ĳ����" << endl;
	V2 = V2.Create();
	cout << "������������ĳ����" << endl;
	V3 = V3.Create();
	cout << "�����Ϊ��" << V1.Showtiji() + V2.Showtiji() + V3.Showtiji() << endl;
}