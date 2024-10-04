#include<iostream>
#include"Teacher_Leader.h"
#include"Point.h"
#include"Rectangle.h"
#include"Circle.h"
using namespace std;
double CalcArea(Point &p) {
	return p.Area();
}
int main() {
	//Teacher_Leader t1;
	//Teacher_Leader tl2("zs", "p", "d", "8", 100000);
	////string s=tl2.Teacher::ToString()+tl2.Leader::ToString();
	//string s = tl2.ToString();
	//cout << s << endl;
	Point p(1, 2);
	Rectangle r(1, 2, 3, 4);
	Circle c(1, 2, 3);
	cout << CalcArea(p) << endl;
	cout << CalcArea(r) << endl;
	cout << CalcArea(c) << endl;
	return 0;
}