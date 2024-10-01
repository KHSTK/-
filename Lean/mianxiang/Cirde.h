#pragma once
#include"Point.h"
class Circle {
private:
	Point center;
	double radius;
public:
	Circle();
	Circle(Point& c, double r);
	double Area();
};