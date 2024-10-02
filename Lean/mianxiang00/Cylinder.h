#pragma once
#include"Circle.h"
class Cylinder :public Container {
protected:
	double h;
public:
	Cylinder(double a,double b);
	double Area();
	double Volume();
};