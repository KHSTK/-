#include<iostream>
using namespace std;
int main() {
	double a,b,c=0;
	cout << "��һԪ���η���ax^2+bx+c=0�ĸ�" << endl;
	cout << "����a" << endl;
	cin >> a;
	cout << "����b" << endl;
	cin >> b;
	cout << "����c" << endl;
	cin >> c;
	if (a == 0) {
		cout << "������ϵ������Ϊ0" << endl;
	}
	else {


		if (b * b - (4 * a * c) < 0) {
			cout << "�÷����޸�" << endl;
		}
		else {
			if (b * b - (4 * a * c) <= 0) {
				cout << "�÷��̵ĸ�Ϊ" << (-1 * b) + sqrt(b * b - (4 * a * c)) / (2 * a) << endl;
			}
			else {
				cout << "�÷��̵ĸ�Ϊ" << (-1 * b) + (sqrt(b * b - (4 * a * c))) / (2 * a) << "��" << (-1 * b) - (sqrt(b * b - (4 * a * c))) / (2 * a) << endl;
			}
		}
	}
	return 0;
}
