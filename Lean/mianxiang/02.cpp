#include<iostream>
using namespace std;
int main() {
	int a,a1, n,i;
	int s = 0;
	cout << "��ͣ�s=a+aa+aaa+��+aa��a(n��a)" << endl;
	cout << "����a��n,�ÿո����" << endl;
	cin >> a >> n;
	a1 = a;
	if (n == 1) {
		cout << "���Ϊ" << a << endl;
	}
	else if (n == 0) {
		cout << "���Ϊ0"<< endl;
	}
	else {
		for (i = 0; i < n; i++) {
			s += a;
			a=(a * 10) + a1;
		}
		cout << "���Ϊ" << s << endl;
	}
	return 0;
}