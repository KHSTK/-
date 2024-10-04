#include<iostream>
#include"Circle.h"
using namespace std;
Circle::Circle(double a, double b, double c)
	:Point(a, b), r(c)
{
}
double Circle::Area() {
	cout << "call Circle area function" << endl;
	return 3.14*r*r;
}