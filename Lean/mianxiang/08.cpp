#include<iostream>
using namespace std;
void swap(int& a, int& b) {
	int n=0;
	n = a;
	a = b;
	b = n;
}
int main() {
	int a, b;
	cout << "输入两个数" << endl;
	cin >> a >> b;
	cout << "交互前a=" << a << " b=" << b << endl;
	swap(a, b);
	cout << "交互后a=" << a << " b=" << b << endl;
}