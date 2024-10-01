#include<iostream>
using namespace std;
int main() {
	double a,b,c=0;
	cout << "解一元二次方程ax^2+bx+c=0的根" << endl;
	cout << "输入a" << endl;
	cin >> a;
	cout << "输入b" << endl;
	cin >> b;
	cout << "输入c" << endl;
	cin >> c;
	if (a == 0) {
		cout << "二次项系数不能为0" << endl;
	}
	else {


		if (b * b - (4 * a * c) < 0) {
			cout << "该方程无根" << endl;
		}
		else {
			if (b * b - (4 * a * c) <= 0) {
				cout << "该方程的根为" << (-1 * b) + sqrt(b * b - (4 * a * c)) / (2 * a) << endl;
			}
			else {
				cout << "该方程的根为" << (-1 * b) + (sqrt(b * b - (4 * a * c))) / (2 * a) << "和" << (-1 * b) - (sqrt(b * b - (4 * a * c))) / (2 * a) << endl;
			}
		}
	}
	return 0;
}
