#include<iostream>
#include"Box-4.1.h"
using namespace std;
int main() {
	/*int a = 5;
	int b = a;
	int c(b);
	cout << a << endl << b << endl << c << endl;*/
	Box b(10,10,10,"blue");
	Box c = b;
	c.SetLength(100);
	Box d(b);
	cout << b.Volume() << endl;
	cout << b.GetColor() << endl;
	cout << c.Volume() << endl;
	cout << c.GetColor() << endl;
	cout << d.Volume() << endl;
	return 0;
}