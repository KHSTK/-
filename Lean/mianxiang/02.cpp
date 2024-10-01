#include<iostream>
using namespace std;
int main() {
	int a,a1, n,i;
	int s = 0;
	cout << "求和：s=a+aa+aaa+…+aa…a(n个a)" << endl;
	cout << "输入a和n,用空格隔开" << endl;
	cin >> a >> n;
	a1 = a;
	if (n == 1) {
		cout << "结果为" << a << endl;
	}
	else if (n == 0) {
		cout << "结果为0"<< endl;
	}
	else {
		for (i = 0; i < n; i++) {
			s += a;
			a=(a * 10) + a1;
		}
		cout << "结果为" << s << endl;
	}
	return 0;
}