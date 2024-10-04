#pragma once
class Point {
protected:
	double x, y;
public:
	Point(double a=0, double b=0);
	virtual double Area();
};