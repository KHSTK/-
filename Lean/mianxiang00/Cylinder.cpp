#include<iostream>
#include"Cylinder.h"
using namespace std;
//Cylinder::Cylinder() 
//{
//	height = 1;
//}
//Cylinder::Cylinder(double r,double h)
//{
//	height = h;
//}
//Cylinder::~Cylinder(){}
//void Cylinder::SetHeight(double h)
//{
//	height = h;
//}
//double Cylinder::GetHight()
//{
//	return height;
//}
//double Cylinder::Area()
//{
//	return 2 * PI * radius * height + 2 * Circle::Area();
//}
//double Cylinder::Volume()
//{
//	return Area() * height;
//}
Cylinder::Cylinder(double a, double b):Container(a),h(b)
{
}
double Cylinder::Area() {
	return 2*(2*PI*r)+r*h;
}

double Cylinder::Volume() {
	return PI*r*r*h;
}