#include<iostream>
#include"Rect.h"
using namespace std;
int main() {
	Rect R1(20, 30);
	cout<<"int体积是：" << R1.Area_int() << endl;
	Rect R2(12.3, 15.6);
	cout << "double体积是：" << R2.Area_double() << endl;
}