#pragma once
class Point {
public:
	double x, y;
};
class Line {
protected:
	double a, b;
public:
	Line();
	Line(double _a, double _b);
	void Print();
	friend Point SetPoint(const Line& l1, const Line& l2);
};