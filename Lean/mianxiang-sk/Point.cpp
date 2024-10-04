#include<iostream>
#include"Point.h"
using namespace std;
Point::Point(double a, double b) {
	 x = a;
	 y = b;
}
double Point::Area() {
	cout << "call point area function" << endl;
	return 0.0;
}