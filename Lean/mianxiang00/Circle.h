#pragma once
#include"Container.h"
//#define PI 3.14
class Circle:public Container {
//protected:
//	double radius;
//public:
//	Circle();
//	Circle(double r);
//	~Circle();
//	void SetRadius(double r);
//	double GetRadius();
//	double Area();
public:
	Circle(double a);
	double Area();
	double Volume();
};