#include<iostream>
#include"Rect.h"
using namespace std;
int main() {
	Rect R1(20, 30);
	cout<<"int����ǣ�" << R1.Area_int() << endl;
	Rect R2(12.3, 15.6);
	cout << "double����ǣ�" << R2.Area_double() << endl;
}