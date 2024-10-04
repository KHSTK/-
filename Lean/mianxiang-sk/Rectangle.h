#pragma once
#include"Point.h"
class Rectangle :public Point {
protected:
	double x1, y1;
public:
	Rectangle(double a, double b, double c, double d);
	double Area();
};