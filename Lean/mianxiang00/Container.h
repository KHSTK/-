#pragma once
#define PI 3.14
class Container {
protected:
	double r;
public:
	Container(double a);
	virtual double Area();
	virtual double Volume();
};