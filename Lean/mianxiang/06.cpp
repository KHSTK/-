#include<iostream>
#include<cmath>
using namespace std;
int SS(int a) {
	int i;
	for (i = 2; i < a; i++) {
		if (a % i == 0) {
			break;
		}
	}
	if (i == a) {
		return 1;
	}
	else {
		return 0;
	}
}
void GDBH(int a) {
	int m, n,x;
	for (m = 3; m < (a/2); m=m + 2) {
		if (SS(m)) {
			n = a - m;
			if (SS(n)) {
				cout << a << "=" << m << "+" << n << endl;
			}
		}
	}
}
int main() {
	int a;
	cout << "����һ�����ڵ���6��ż��" << endl;
	cin >> a;
	if (a % 2 != 0||a<6) {
		cout << "���������Ϊ���ڵ���6��ż��" << endl;
	}
	else {
		GDBH(a);
	}
	return 0;
}