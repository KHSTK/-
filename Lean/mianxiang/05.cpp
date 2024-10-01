#include<iostream>
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
int main() {
	int i;
	cout << "请输入一个数" << endl;
	cin >> i;
	if (SS(i)) {
		cout << "该数是素数" << endl;
	}
	else {
		cout << "该数不是素数" << endl;
	}
}