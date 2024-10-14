#include <iostream>
#include"Line.h"
using namespace std;
Line::Line(){}
Line::Line(double _a, double _b) : a(_a), b(_b) {}
void Line::Print(){ cout << "y = " << a << "x + " << b << endl; }
