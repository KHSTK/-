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
	cout << "����������" << endl;
	cin >> a >> b;
	cout << "����ǰa=" << a << " b=" << b << endl;
	swap(a, b);
	cout << "������a=" << a << " b=" << b << endl;
}