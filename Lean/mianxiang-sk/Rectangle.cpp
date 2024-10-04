#include<iostream>
#include"Rectangle.h"
using namespace std;
Rectangle::Rectangle(double a, double b, double c, double d) 
	:Point(a,b),x1(c), y1(d)
{
	
}
double Rectangle::Area() {
	cout << "call Rectangle area function" << endl;
	return (x-x1)*(y-y1);
}