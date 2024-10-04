#pragma once
#include"Point.h"
class Circle :public Point{
protected:
	double r;
public:
	Circle(double a, double b, double c);
	double Area();
};