#include<iostream>
#include"tiji.h"
using namespace std;
int main() {
	tiji V1, V2, V3;
	cout << "第一个长方体的长宽高" << endl;
	V1 = V1.Create();
	cout << "第二个长方体的长宽高" << endl;
	V2 = V2.Create();
	cout << "第三个长方体的长宽高" << endl;
	V3 = V3.Create();
	cout << "体积和为：" << V1.Showtiji() + V2.Showtiji() + V3.Showtiji() << endl;
}