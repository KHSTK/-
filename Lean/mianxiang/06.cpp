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
	cout << "输入一个大于等于6的偶数" << endl;
	cin >> a;
	if (a % 2 != 0||a<6) {
		cout << "输入的数不为大于等于6的偶数" << endl;
	}
	else {
		GDBH(a);
	}
	return 0;
}